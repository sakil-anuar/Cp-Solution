#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{

    string S;
    int count=1;

    cin>>S;
    sort(S.begin(),S.end());

    for(int i=0;i<S.size()-1;i++)
    {

        if(S[i]!=S[i+1])
        {
            count++;
        }
    }

    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";

    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
    // object oriented programming  (oop2)....

}
