#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    int dp[n];
    int length = 0;
    for (int i=0; i<n; i++)
    {
        dp[i] = 1;
        for (int j=i-1; j>=0; j--)
        {
            if (array[i] > array[j])
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        length = max(dp[i],length);
    }
    cout << length;
    
}
