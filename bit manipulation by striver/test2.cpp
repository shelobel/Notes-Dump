#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = a;
        reverse(s.begin(), s.end());
        vector<vector<int>> vec(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[j - 1] != s1[i - 1])
                    vec[i][j] = max(vec[i][j - 1], vec[i - 1][j]);
                else
                    vec[i][j] = vec[i - 1][j - 1] + 1;
            }
        }
        int ans = vec[n][n] / 2;
        cout << ans << endl;
    }
    return 0;
}
