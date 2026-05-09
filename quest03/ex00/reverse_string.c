#include <stdio.h>
#include <string.h>

char* reverse_string(char* param_1){

    if (param_1 == NULL || *param_1 == '\0') {
        return param_1;
    }
    
    int i=0;
    int j=strlen(param_1)-1;
    char t;

    while(i<j){
        t=param_1[i];
        param_1[i]=param_1[j];
        param_1[j]=t;

        i++;
        j--;
    }
    return param_1;
}