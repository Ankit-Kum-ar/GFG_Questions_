//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string s = "";
        s += S[0];
        for(int i=0;i<S.length()-1;i++) {
            if(S[i] != S[i+1]) {
                if(s[s.length()-1] != S[i]) {
                    s += S[i];
                    s += S[i+1];
                }
                else {
                    s += S[i+1];
                }
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends