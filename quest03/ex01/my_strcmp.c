int my_strcmp(char* param_1, char* param_2)
{
    int i=0;
    while(param_1[i]!='\0' && param_2[i]!='\0'){
        if(param_1[i]!=param_2[i]){
            return param_1[i]-param_2[i];
        }
        i++;
    }
    return param_1[i]-param_2[i];
}