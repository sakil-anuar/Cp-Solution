#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[101];

    for(int i=1;i<=n;i++){
        int p;
        cin>>p;

        a[p]=i;
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
