//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if(n == 1 || n == 2) return 1;
        vector<int> fibo(n);
        fibo[0] = 1;
        fibo[1] = 1;
        for(int i=2;i<n;i++){
            fibo[i] =(fibo[i-1] + fibo[i-2]) % 1000000007;
        }
        return fibo[n-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends