#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int count=0;
    // Another condition would be
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            count ++;
        }
    }

    /*for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }*/
    cout<<count<<endl;
    return 0;
}
