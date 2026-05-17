#include<iostream>
using namespace std;
void countingsort1(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    int count[1000]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }

    int index=0;
    for(int i=0;i<=max;i++)
    {
        if(count[i]>0)
        {
            arr[index++]=i;
            count[i]--;
        }
    }
}

int main()
{
    int n;
    cout<<" enter number of elements"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countingsort1(arr,n);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
