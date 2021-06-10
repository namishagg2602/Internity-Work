#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
  cin>>arr[i];

int lo=0,hi=n-1,res;
int mid=lo+(hi-lo)/2;

while(lo<mid && hi>mid)
{
    cout<<mid<<"   ";
    if(arr[mid]>arr[lo] && arr[mid]>arr[hi])
        lo=mid;
    else
    if(arr[mid]<arr[lo] && arr[mid]<arr[hi])
        hi=mid;
    else
        hi=mid;
    res=mid;
    mid=lo+(hi-lo)/2;
}
int ans=arr[res];
if(res>0)
    { ans=min(ans,arr[res-1]); }
if(res<n-1)
    ans=min(ans,arr[res+1]);

cout<<"\nSmallest element found : "<<ans<<"\n";



return 0;
}
