#include <stdio.h>

int main() {

    char x[100];
    char temp;
    char find;
    int i,j,count=0,n=5;

    printf("size of array=%d\n",n);

    printf("Enter array :");
    for(i=0;i<n;i++){
        scanf("%c",&x[i]);
    }

    printf("Entered array are :");
    for(i=0;i<n;i++)
    {
        printf("index=%d value=%c\n",i,x[i]);
    }

    printf("Enter element to search in array:\n");
    fflush(stdin);
    scanf("%c",&find);


    for(i=0; i<n; i++)
    {
        if(x[i]==find)
        {
            count++;
        }
    }

    if(count!=0){
        printf("%c found %d times",find,count);
    }
    else{
        printf("%c not found in array",find);
    }

    return 0;
}


