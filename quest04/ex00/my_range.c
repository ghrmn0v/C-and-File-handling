int* my_range(int param_1, int param_2)
{
    int* a;
    int t=0;
    if(param_1<param_2){
        for(int i=param_1;i<param_2;i++){
           a[t]=i;
           t++;
        }
    }
    return a;
}