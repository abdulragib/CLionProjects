#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter any four numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d){
                printf("largest value is %d",a);
            }
            else{
                printf("largest value is %d",d);
            }
        }
        else{
            if(c>d)
            {
                printf("largest value is %d",c);
            }
            else{
                printf("largest value is %d",d);
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("largest value is %d",b);
            }
            else{
                printf("largest value is %d",d);
            }
        }
        else{
            if(c>d)
            {
                printf("largest value is %d",c);
            }
            else{
                printf("largest value is %d",d);
            }
        }
    }
    return 0;
}
