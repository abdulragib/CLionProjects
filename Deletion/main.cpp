#include <cstdio>
int main() {
    int LA[] = {1,3,5,7,8};
    int k = 0, n = 5;
    int i, j;

    printf("The original array elements are :\n");

    for(i = 0; i<n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    printf("Enter Position u want to delete:");
    scanf("%d",&k);



    if(k>=n+1)
    {
        printf("you are crossing the higher limit \n");

    }
    else{
        if(k<0)
        {
            printf("You are crossing the lower limit\n");
        }
        else{
            j = k;
            while( j < n) {

                LA[j-1] = LA[j];
                j = j + 1;
            }
            n = n-1;
            printf("The array elements after deletion :\n");

            for(i = 0; i<n; i++) {
                printf("LA[%d] = %d \n", i, LA[i]);
            }

        }

    }

    return 0;
}