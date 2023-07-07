#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    printf("[X] Linux Kernel Assignment1\n");
    printf("[+] Current Pid : %d, UID : %d",getpid(),getuid());
}