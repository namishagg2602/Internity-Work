#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

//   Finding union and intersection array

cout<<"Enter n1 & n2 : ";
int n1,n2;
cin>>n1>>n2;

int a1[n1],a2[n2];

cout<<"\nEnter array1 : ";
for(int i=0;i<n1;i++)
    cin>>a1[i];

cout<<"\nEnter array2 : ";
for(int i=0;i<n2;i++)
    cin>>a2[i];


	int un[n1+n2],in[n1],p1=0,p2=0,i1=0,i2=0;

	while(p1<n1 && p2<n2)
	{
		if(a1[p1]==a2[p2])
		{
			in[i1]=a1[p1];
			i1++;
			un[i2]=a1[p1];
			i2++;
			++p1;
			++p2;
			while(p1<n1 && a1[p1]==a1[p1-1])
			p1++;
			while(p2<n2 && a2[p2]==a2[p2-1])
			p2++;
		}
		else
		if(a1[p1]<a2[p2])
		{
			while(p1<n1 && a1[p1]<a2[p2])
			{
				un[i2]=a1[p1];
				i2++;
				p1++;
				while(p1<n1 && a1[p1]==a1[p1-1])
				++p1;
			}
		}
		else
		{
		    while(p2<n2 && a1[p1]>a2[p2])
			{
				un[i2]=a2[p2];
				i2++;
				p2++;
					while(p2<n2 && a2[p2]==a2[p2-1])
				    ++p2;
			}
		}
	}


	if(p1<n1)
	{
		while(p1<n1)
			{
				un[i2]=a1[p1];
				++i2; ++p1;
			}
	}
	else
	if(p2<n2)
	{
		while(p2<n2)
			{
				un[i2]=a2[p2];
				++i2; ++p2;
			}
	}

	cout<<"Intersection array is : ";
	for(int z=0;z<i1;z++)
	cout<<in[z]<<" ";

	cout<<"\nUnion array is : ";
		for(int z=0;z<i2;z++)
	cout<<un[z]<<" ";


return 0;
}
