#include<stdio.h>
#include<stdlib.h>


void  my_square(int coln, int rown){
    char** square;

    square = malloc(rown * sizeof(char*));
    for(int i = 0; i < rown; i++){
        square[i] = malloc(coln * sizeof(char));
    }

    for(int i = 0; i < rown; i++){
        for(int j = 0; j < coln; j++){
            if((i == 0 && j == 0) || (i == 0 && j == coln - 1) || (i == rown - 1 && j == 0) || (i == rown - 1 && j == coln - 1))
                square[i][j] = 'o';       

            else if(i == 0 || i == rown - 1)
                square[i][j] = '-';   

            else if(j == 0 || j == coln - 1)
                square[i][j] = '|';   

            else
                square[i][j] = ' ';              

            printf("%c", square[i][j]);
        }
        printf("\n");
    }
}

int main(int ac, char **av) {
    if (ac != 3)
        return 0;

    int x = atoi(av[1]);
    int y = atoi(av[2]);

    my_square(x, y);
    return 0;
}