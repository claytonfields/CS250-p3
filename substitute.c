//Substitute function for use in SED253
#include<string.h>
#include<stdio.h>
#include'substitute.h'

int doSubstitute(char *regex, char *string){
    
    while(fgets(line, MAXLINE, stdin) != NULL){
        foo = strstr(line, regex);

        if(strlen(line)>1023){
            return 1;
        }


        if(foo == line){
            templine = char[1024];
            strcat(templine,string,strlen(string));
            strcat(templine,line+2,strlen(line+2));
            fputs(templine,stdout);

        } else if(){

        }


    }

    return 0;

}



