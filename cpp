#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max=arr[n-1];
     for(i=0;i<n;i++)
    {
        if(arr[i]==max)
          count++;
    }
    cout<<count;
    
    
}
