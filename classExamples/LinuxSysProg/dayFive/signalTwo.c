#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
   pid_t pid;
   int ret;
   switch(pid = fork()){
   	   case -1: perror("fork"); exit(EXIT_FAILURE);
       case 0:
           pause();
           printf("Child"); fflush(stdout);
       default:
           kill(pid, SIGINT);
           wait(&ret);
           printf("Parent"); fflush(stdout);
           if (WIFSIGNALED(ret)){
              printf(" Quit...%d\n", WTERMSIG(ret));
           }
     }
}

