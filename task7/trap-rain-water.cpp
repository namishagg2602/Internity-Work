// Trap rain water in complete structure including all available spaces

int trappingWater(int arr[], int n){
        int ans=0;
        int l=0,h=n-1;
        int sums[n],maxleft=INT_MIN,maxright=INT_MIN;
        
        
        while(l<h)
        {
             if(arr[l]<arr[h])
             {
                 if(arr[l]>maxleft)
                 maxleft=arr[l];
                 else
                 ans+=maxleft-arr[l];
                 
                 ++l;
             }
             else
             {
                 if(arr[h]>maxright)
                 maxright=arr[h];
                 else
                 ans+=maxright-arr[h];
                 
                 --h;
             }

        }
        
        return ans;
    }