#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int arr[n],ele;
for(int i=0;i<n;i++)
  cin>>arr[i];
cin>>ele;

int lo=0,hi=n-1,pos=-1;
while(lo<=hi)
{
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==ele)
    {
        pos=mid;
        break;
    }
    else
        {
            if(arr[lo]<=arr[mid])
            {
                if(ele>=arr[lo] && ele<=arr[mid])
                {
                    hi=mid-1;
                }
                else
                lo=mid+1;
                
            }
            else
            if(arr[lo]>=arr[mid])
            {
                if(ele>=arr[mid] && ele<=arr[hi])
                lo=mid+1;
                else
                hi=mid-1;
            }
            
        }
}

pos==-1?cout<<"Element not found\n":cout<<"Element found at index : "<<pos<<"\n";



return 0;
}
