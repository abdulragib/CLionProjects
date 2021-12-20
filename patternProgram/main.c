#include <stdio.h>
int main()
{ /*program to print series*/
    int r=1,c,k=1;
    while(r<=4)
    {
        c=1;
        while(c<=r){
            printf("%d",k);
            k++;
            c++;

        }
        printf("\n");
        r++;
        k--;
    }
    return 0;


}