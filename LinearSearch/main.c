#include <stdio.h>

int main() {
    int n;
    int x[100];
    int temp,find,i,count=0;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter array :");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    printf("Enter element to search in array:");
    scanf("%d",&find);


    for(i=0;i<n;i++){
        if(x[i]==find)
        {
             temp=x[i];
              count++;
        }
        else
        {
         temp=0;
        }
    }

    if(find==temp){
        printf("Element found at %d index and %d times",i,count);
    }
    else{
        if(count==0)
        {
            printf("Element not inside the array");
        }

    }
    return 0;
}

