#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
#include<stdio.h>
int main() {
    int LA[] = {1,3,5,7,8};
    int item = 0, k = 0, n = 5;
    int i,j=n;

    printf("Enter position u want to insert value: ");
    scanf("%d",&k);

    printf("Enter value to want to insert: ");
    scanf("%d",&item);

    printf("The original array elements are :\n");

    for(i = 0; i<n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }


    if(k>n+1)
    {
        printf("You are crossing the higher limit");
    }
    else{
        if(k<0){
            printf("You are crossing lower limit");
        }
        else{

            n = n + 1;
            while( j >= k) {
                LA[j+1] = LA[j];
                j = j - 1;
            }
            LA[k] = item;

            printf("The array elements after insertion :\n");

            for(i = 0; i<n; i++) {
                printf("LA[%d] = %d \n", i, LA[i]);
            }

        }
    }



}
