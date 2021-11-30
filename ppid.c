#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(void)
{
    pid_t my_parent_ID, my_ID;

    my_parent_ID = getppid();
    my_ID = getpid();
    printf("The parent ID es: %u and the child is: %u\n", my_parent_ID, my_ID);
    return (0);
}
