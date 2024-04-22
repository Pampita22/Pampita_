//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
       string s="";
       string k="";
       for(int i=S.size()-1;i>=0;i--)
       {
           if(S[i]!='.')
           s+=S[i];
           else if(S[i]=='.')
           {
               reverse(s.begin(),s.end());
               k=k+s;
               
               k=k+'.';
               s="";
           }
       }
       reverse(s.begin(),s.end());
       k=k+s;
       return k;
       
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends