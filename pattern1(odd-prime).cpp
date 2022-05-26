#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    // int n;
    // cin>>n;
    for(int i=1;i<=100;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && i%2!=0)
        {
            vec.push_back(i);
        }
    }
    int count=0;
    for(int i=1;i<=4;i++)
    {
        for(int k=4;k>i;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<vec[count]<<" ";
            count++;
        }
        cout<<endl;
    }
}
