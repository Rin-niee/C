#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sig_handler(int sig) 
{
    switch(sig) 
    {
        case SIGABRT:
        printf("Received SIGABRT\n");
        break;
        case SIGFPE:
        printf("Received SIGFPE\n");
        break;
        case SIGILL:
        printf("Received SIGILL\n");
        break;
        case SIGINT:
        printf("Received SIGINT\n");
        break;
        case SIGSEGV:
        printf("Received SIGSEGV\n");
        break;
        case SIGTERM:
        printf("Received SIGTERM\n");
        break;
        default:
        printf("Received unknown signal %d\n", sig);
        break;
    }
}

int main() 
{
    signal(SIGABRT, sig_handler);
    signal(SIGFPE, sig_handler);
    signal(SIGILL, sig_handler);
    signal(SIGINT, sig_handler);
    signal(SIGSEGV, sig_handler);
    signal(SIGTERM, sig_handler);
    printf("Waiting for signals...\n");
    return 0;
}

void raise_signal(int sig) 
{
    printf("Raising signal %d...\n", sig);
    raise(sig);
}

int main() 
{
    char input;

    signal(SIGABRT, sig_handler);
    signal(SIGFPE, sig_handler);
    signal(SIGILL, sig_handler);
    signal(SIGINT, sig_handler);
    signal(SIGSEGV, sig_handler);
    signal(SIGTERM, sig_handler);

    printf("Press 1 to raise SIGABRT, 2 to raise SIGFPE, 3 to raise SIGILL,\n");
    printf("4 to raise SIGINT, 5 to raise SIGSEGV, 6 to raise SIGTERM\n");
    input = getchar();
    int sig;
    switch(input) 
    {
        case '1':
            sig = SIGABRT;
            break;
        case '2':
            sig = SIGFPE;
            break;
        case '3':
            sig = SIGILL;
            break;
        case '4':
            sig = SIGINT;
            break;
        case '5':
            sig = SIGSEGV;
            break;
        case '6':
            sig = SIGTERM;
            break;
        default:
            printf("Invalid input\n");
            return 0;
    }
    raise_signal(sig);
    return 0;
}
