// TIME COMPLEXITY : O(M*N)
// SPACE COMPLEXITY : O(N)

class Solution
{
public:
    int new_func(int m, int n)
    {
        vector<int> prev(n, 0);
        for (int i = 0; i < m; i++)
        {
            vector<int> ans(n, 0);
            for (int j = 0; j < n; j++)
            {

                if (i == 0 && j == 0)
                {
                    ans[j] = 1;
                    continue;
                }
                int up = 0;
                int left = 0;

                if (i > 0)
                    up = prev[j];

                if (j > 0)
                    left = ans[j - 1];
                ans[j] = up + left;
            }
            prev = ans;
        }
        return prev[n - 1];
    }
    int uniquePaths(int m, int n) { return new_func(m, n); }
};