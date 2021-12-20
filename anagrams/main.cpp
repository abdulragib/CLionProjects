#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[100],str2[100];
    int n1,n2,count=0,count2=0;


   cin>>str1;
   cin>>str2;

   n1=strlen(str1);
   n2=strlen(str2);

    //logic
       if(n1==n2)
       {
           for( int i=0;i<n1;i++)
           {
               char temp=str1[0];
               for( int j=0;j<i;j++){
                   if( temp==str2[j])
                   {
                       count++;

                   }

               }




               char temptwo=str2[0];
               for(int j1=0;j1<i;j1++)
               {
                   if(temptwo==str1[j1])
                   {
                       count2++;

                   }
               }
           }

           if(count==count2)
           {
               cout<<"These are anagrams";
           }
           else{

               cout<<"These are not anagrams";
           }

       }
    return 0;
}
