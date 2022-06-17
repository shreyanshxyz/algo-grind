class Solution
{
    public:
        void solve(vector<string> &ans, string str, int n, int m)
        {
// we set the two pointers for left and right parenthesis n and m respectively
            if (n == 0 && m == 0)
            {
                ans.push_back(str);
                return;
            }

// if we have > 0 right parenthesis what we simply do is that we add a right parenthesis to our string, deduct it from our pointer. We do that until our recursion condition m > 0 is valid
            
            if (m > 0)
            {
                solve(ans, str + ")", n, m - 1);
            }
// if we have > 0 left parenthesis what we simply do is that we add a left parenthesis to our string, deduct it from our pointer and increase our right parenthesis. We do that until our recursion condition n > 0 is valid
            if (n > 0)
            {
                solve(ans, str + "(", n - 1, m + 1);
            }
        }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        solve(ans, "", n, 0);
        return ans;
    }
};