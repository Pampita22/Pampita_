//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        
      int max_ai = INT_MIN, min_ai = INT_MAX;
      int max_aj = INT_MIN, min_aj = INT_MAX;

    for (int i = 0; i < n; i++) {
        max_ai = max(max_ai, arr[i] + i);
        min_ai = min(min_ai, arr[i] + i);
        max_aj = max(max_aj, arr[i] - i);
        min_aj = min(min_aj, arr[i] - i);
    }

    int ans = max(max_ai - min_ai, max_aj - min_aj);

    return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends