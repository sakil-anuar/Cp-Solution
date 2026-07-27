#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int a[10];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int ans=0;

		for(int i=0;i<n;i++){
			a[i]++;
			int product=1;

			for(int j=0;j<n;j++){
				product *=a[j];
			}

			if(product>ans){
				ans=product;
			}

			a[i]--;
		}
		cout<<ans<<endl;
	}
	return 0;
}
