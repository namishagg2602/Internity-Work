#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {



cout<<"Enter n: ";
int sz;
cin>>sz;

int ar[sz];

cout<<"\nEnter array : ";
for(int i=0;i<sz;i++)
    cin>>ar[i];

//  Segregating negative and positive elements
	int s=0,e=sz-1;
	while(s<e)
	{
		if(ar[s]<0)
		++s;
		else
		if(ar[e]>=0)
		--e;
		else
		{
			int t=ar[e];
			ar[e]=ar[s];
			ar[s]=t;
			++s;
			--e;
		}
	}

	cout<<"\nArray after segregation is : ";
	for(int i=0;i<sz;i++)
	cout<<ar[i]<<" ";
	cout<<"\n";
	return 0;






return 0;
}
