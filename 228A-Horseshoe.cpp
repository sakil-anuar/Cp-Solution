#include<iostream>
using namespace std;
int main(){
    int a[4];

    for(int i=0;i<4;i++){
        cin>>a[i];
    }

    int duplicate=0;

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                duplicate++;
                break;
            }
        }
    }
    cout<<duplicate;
    return 0;
}
