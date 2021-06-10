#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
  cin>>arr[i];

int ele,pos=-1;
cin>>ele;
for(int i=0;i<n;i++)
 if(arr[i]==ele)
 {
     pos=i;
     break;
 }

pos==-1?cout<<"Element not found\n":cout<<"Element first found at index : "<<pos<<"\n";

return 0;
}
