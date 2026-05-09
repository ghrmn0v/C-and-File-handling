#include <stdbool.h>
char* my_strrchr(char* param_1, char param_2){
    int i=0;
    int max;
    bool ok=false;


    while(param_1[i]!='\0'){
        if(param_1[i]==param_2){
            max=i;
            ok=true;
        }
        i++;
    }
    
    i=0;
    if(ok){
        while(param_1[i]!='\0'){
            return param_1 + max;
            i++;
        }
    }
    return 0;
}