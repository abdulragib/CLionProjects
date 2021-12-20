#include <stdio.h>


int main() {
   int x,y,z;

   printf("Enter three number: ");
   scanf("%d%d%d",&x,&y,&z);
   if(x>y)
   {
       if(x>z){
           printf("%d is greater than %d and %d",x,y,z);
       }

   }

    if(y>x){
        if(y>z)
        {
            printf("%d is greater than %d and %d",y,x,z);
        }
    }

      if(z>x)
      {
          if(z>y){
              printf("%d is greater than %d and %d",z,x,y);
          }
      }



}
