//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int fav=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            fav++;
        }
        if(fav==0)
        return 0;
        int i=0,j=0,bad=0;
        int ans=INT_MAX;
        while(j<n)
        {
            if(arr[j]>k)
            bad++;
            if(j-i+1<fav)
            j++;
            else if(j-i+1==fav)
            {
                ans=min(ans,bad);
                if(arr[i]>k)
                    bad--;
                i++;
                j++;
                
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends