#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    int x;
    int process = getpid();
    int *ptr;
    ptr = (int*)malloc(atoi(argv[1]) * sizeof(int));
    
    for(x=0; x<atoi(argv[1]); x = x+1)
    {
        //puts("This is my code");
        ptr[x] = x + 1;
        printf("%d\n",process);
        x--;
    }
    return (0);
}