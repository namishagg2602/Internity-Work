
// GFG Code 
long long int cnt=0;

 void ms(long long arr[],long long l,long long r)
    {
        if(l>=r-1)
        return;
        
        long long int d=l+ (r-l)/2;
        ms(arr,l,d);
        ms(arr,d,r);
        
        long long m[r-l];
        int i=l,j=d,pos=0;
        
        while(i<d && j<r)
        {
            if(arr[i]>arr[j])
            {
                m[pos]=arr[j];
                cnt+=d-i;
                ++pos;
                ++j;
            }
            else
            {
                m[pos]=arr[i];
                ++pos;
                ++i;
            }
        }
        
        while(i<d)
        {
            m[pos]=arr[i];
            ++pos;  ++i;
        }
        while(j<r)
        {
            m[pos]=arr[j];
            ++j; ++pos;
        }
        
        
        for(i=l;i<r;i++)
        {
            arr[i]=m[i-l];
        }
        
        return;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        cnt=0;
        long long int d=N/2;
        ms(arr,0,d);
        ms(arr,d,N);
        
        long long m[N];
        long long int i=0,j=d,pos=0,l=0,r=N;
        
        while(i<d && j<r)
        {
            if(arr[i]>arr[j])
            {
                m[pos]=arr[j];
                cnt+=d-i;
                ++pos;
                ++j;
            }
            else
            {
                m[pos]=arr[i];
                ++pos;
                ++i;
            }
        }
        
        while(i<d)
        {
            m[pos]=arr[i];
            ++pos;  ++i;
        }
        while(j<r)
        {
            m[pos]=arr[j];
            ++j; ++pos;
        }
        
        
        for(i=l;i<r;i++)
        {
            arr[i]=m[i-l];
        }
        
        return cnt;
    }

};