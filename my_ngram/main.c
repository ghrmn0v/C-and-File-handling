#include<stdio.h>

int main(int argc, char* argv[]){
    int count[256];

    for(int i=0;i<256;i++){
        count[i]=0;    
    }

    for(int i=1; i<argc;i++){
        int j=0;
         while(argv[i][j]!='\0'){
            char c = argv[i][j];
            if (c != '"') count[(unsigned char)c]++;
            j++;
        }
    }

    for(int i=0;i<256;i++){
        if(count[i]>0){
            printf("%c:%d\n", i, count[i]);
        }
    }
}