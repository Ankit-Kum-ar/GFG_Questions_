//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> D;
            D.push_back(A[0]);
            for(int i=1;i<n1;i++){
                if(A[i] != D[D.size()-1]) D.push_back(A[i]);
            }
            for(int i=0;i<n2;i++){
               if(B[i] != D[D.size()-1])  D.push_back(B[i]);
            }
            for(int i=0;i<n3;i++){
               if(C[i] != D[D.size()-1])  D.push_back(C[i]);
            }
            
            if(D.size() == 1 || D.size() == 2) return D;
            sort(D.begin(),D.end());
            vector<int> ans;
            for(int i=0;i<D.size()-2;i++){
                if(D[i] == D[i+1] and D[i+1] == D[i+2]){
                    ans.push_back(D[i]);
                    break;
                }
            }
            for(int i=0;i<D.size()-2;i++){
                if(D[i] == D[i+1] and D[i+1]==D[i+2] and ans[ans.size()-1] != D[i]){
                    ans.push_back(D[i]);
                    // break;
                }
            }
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends