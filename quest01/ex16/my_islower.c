int my_islower(char param_1)
{
    char letters[]="qwertyuiopasdfghjklzxcvbnm";
    
    for(int i=0;i<26;i++){
        if(param_1==letters[i]) return 1;
    }
    return 0;
}