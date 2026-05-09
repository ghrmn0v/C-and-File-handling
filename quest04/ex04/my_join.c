#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include <stdlib.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)
{
    if(param_1->size==0) return NULL ;
    int count=0;
    for(int i=0;i<param_1->size;i++){
        int j=0;
        while(param_1->array[i][j]!='\0'){
            j++;
        }
        count+=j;
    }
    int a=0;
    while (param_2[a]!='\0') {
        a++;
    }
    count+=(param_1->size-1)*a;
    char* result=malloc(count+1);
    int b=0;
    int i=0;
    while(i<count){
        int j=0;
        while(param_1->array[b][j]!='\0'){
            result[i]=param_1->array[b][j];
            j++;
            i++;  
        }
        b++;
        
      if (b < param_1->size) {
            for(int t=0;t<a;t++){
            result[i]=param_2[t];
            i++;
        }
      }
        
    }
    return result;
}