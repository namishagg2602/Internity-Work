#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {


	// Checking if given array is palindrome or not
	int n;
	cin>>n;
	int pal[n];
	for(int i=0;i<n;i++)
	cin>>pal[i];

	int n=sizeof(pal)/sizeof(pal[0]);
	int p=0;
	for(int i=0;i<n/2;i++)
	{
		if(pal[i]!=pal[n-i-1])
		 {
		 	p=-1;
		 	break;
		 }
	}

	p==0?cout<<"Array is a palindrome\n":cout<<"Array is not a palindrome\n";


}
