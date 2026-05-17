#include<iostream>
using namespace std;
int main()
{

    int w;
    cin>>w;
    
    //Check if the number is even and greater than 2
    if( w% 2 == 0 && w>2)
    {
        cout<<"Yes"<<endl;

    }
    else{
        cout<<"NO"<<endl;

    }
    return 0;


}