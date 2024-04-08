//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
     int minele=INT_MAX;
     int maxele=INT_MIN;
     map<int,bool> mp;
     
     for(int i=0;i<N;i++)
     {
         mp[arr[i]]=true;
         if(arr[i]<minele)
         minele=arr[i];
         if(arr[i]>maxele)
         maxele=arr[i];
     }
     int count=0;
     int ans=INT_MIN;
     for(int i=minele;i<=maxele;i++)
     {
         if(mp.find(i)!=mp.end())
         {
             count++;
             ans=max(ans,count);
         }
         else
         {
             count=0;
         }
     }
     return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends