char* my_spaceship(char* param_1)
{
    int x=0, y=0, dir=0;
    int i=0;
    char* s;
    while(param_1[i]!='\0'){
        if(param_1[i]=='R'){
            dir++;
        }

        else if(param_1[i]=='L'){
            dir--;
        }

        else if(param_1[i]=='A'){
            if((dir%4+4)%4==0){
                y--;
            }

            else if((dir%4+4)%4==1){
                x++;
            }

            else if((dir%4+4)%4==2){
                y++;
            }

            else if((dir%4+4)%4==3){
                x--;
            }
        }
        i++;
    }
    dir=(dir%4+4)%4;
    if(dir==0) s="up";
    else if(dir==1) s="right";
    else if(dir==2) s="down";
    else s="left";
    
    static char result[100];
    sprintf(result, "{x: %d, y: %d, direction: '%s'}", x, y, s);
    return result;
}