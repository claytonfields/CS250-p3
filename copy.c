//Copy Function to be implemented
#include<string.h>
#include<stdio.h>
#include"copy.h"

int doCopy(void){

    char line[1024];
    const int MAXLINE=1024;
    while(fgets(line, MAXLINE, stdin) != NULL){

        if(strlen(line) > 1023){
            
            return 1;
        } else {
            printf("%s",line)
        }

    }
    return 0;

}