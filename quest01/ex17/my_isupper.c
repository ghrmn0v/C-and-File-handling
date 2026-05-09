int my_isupper(char param_1)
{
    char letters[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    
    for(int i=0;i<26;i++){
        if(param_1==letters[i]) return 1;
    }
    return 0;
}