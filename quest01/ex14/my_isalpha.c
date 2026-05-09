int my_isalpha(char param_1)
{
    char letters[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    
    for(int i=0;i<52;i++){
        if(param_1==letters[i]) return 1;
    }
    return 0;
}