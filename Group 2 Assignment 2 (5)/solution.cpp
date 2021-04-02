#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    bool P[n][n];
    memset(P, false, sizeof(P));
    for (int i = 0; i < n; i++)
        P[i][i] = true;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            P[i][i + 1] = true;
            dp[i][i + 1] = 1;
        }
    }
    for (int gap = 2; gap < n; gap++) {
        for (int i = 0; i < n - gap; i++) {
            int j = gap + i;
            if (s[i] == s[j] && P[i + 1][j - 1])
                P[i][j] = true;
            dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1] + P[i][j];
        }
    }
    cout<<"Number of palindrome substring in \""<<s<<"\" with size greater than 1 are: " << dp[0][n - 1];
}