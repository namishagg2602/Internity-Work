#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    priority_queue<int,vector<int>,greater<int> > pq;
	    for(int i=0;i<k;i++)
	    pq.push(v[i]);
	    
	    int pos=0;
	    for(int i=k;i<n;i++)
	    {
	        pq.push(v[i]);
	        v[pos]=pq.top();
	        pq.pop();
	        ++pos;
	    }
	    
	    while(!pq.empty())
	    {
	        v[pos]=pq.top();
	        pq.pop();
	        ++pos;
	    }
	    
	    	for(int i=0;i<n;i++)
	cout<<v[i]<<" ";
	
	cout<<"\n";
	    
	}
	
	
	
	
	return 0;
}