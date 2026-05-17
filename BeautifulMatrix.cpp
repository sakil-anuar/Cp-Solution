#include<iostream>
using namespace std;
int main()
{
    int matrix[5][5];
    int row,col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        cin>>matrix[i][j];

        if(matrix[i][j]==1)
        {
          row=i+1;
          col=j+1;
        }

        }
    }
    int move=abs(row-3)+abs(col-3);
    cout<<move<<endl;

    return 0;
}
