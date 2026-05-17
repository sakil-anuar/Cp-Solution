#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    while(n--){
        int x;
        cin>>x;

        bool possible=false;

        for(int b=0;b<=x/7;b++){
            if((x-7*b)% 3 == 0){
                possible =true;
                break;
            }
        }

        if(possible==true){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;

}
