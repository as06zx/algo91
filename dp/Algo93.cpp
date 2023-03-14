#include <iostream>

using namespace std;

int main() {
    int argsCount;
    cin >> argsCount;
    for (int t=0; t<argsCount; ++t) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        
        int dp[k+1][n+1];
        
        for (int i=0; i<=n; ++i) {
            dp[0][i] = i;
        }
        
        for (int i=1; i<=k; ++i) {
            dp[i][0] = 0;
            for (int j=1; j<=n; ++j) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        cout << dp[k][n] << endl;
    }
    return 0;
}
