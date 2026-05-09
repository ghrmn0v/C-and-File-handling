int my_isdigit(char param_1)
{
    char nums[]="1234567890";
    
    for(int i=0;i<10;i++){
        if(param_1==nums[i]) return 1;
    }
    return 0;
}