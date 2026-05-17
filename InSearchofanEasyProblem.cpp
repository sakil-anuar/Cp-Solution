#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;

   bool ishard=false;

   for(int i=0;i<n;i++)
   {
     int opinion;
     cin>>opinion;
     if(opinion==1)
     {
         ishard=true;
     }
   }

   if(ishard)
   {
       cout<< "HARD" <<endl;
   }
   else{
    cout<< "EASY" <<endl;
   }
   return 0;

}
