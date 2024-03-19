//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        // int flag = 1;
        long long sum = 0;
        for(long long i=1;i<sqrt(N);i++){
            if(N%i == 0) sum += i;
        }
        for(long long i=sqrt(N);i>=1;i--){
            if(N%i == 0) sum += (N/i);
        }
        sum -= N;
        if(sum == N) return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends