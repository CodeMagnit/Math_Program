#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"Enter rows for matrix: ";
    cin>>r;
    cout<<"Enter Coloums for Matrix: ";
    cin>>c;
    int m[r][c];
    cout<<"Enter Matrix Value"<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        cin>>m[i][j];
    }
    cout<<"You Enter Matrix"<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        cout<<m[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Transpose of Matrix"<<endl;
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        cout<<m[j][i]<<" ";
        cout<<endl;
    }
}