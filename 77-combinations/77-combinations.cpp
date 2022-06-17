class Solution
{
    public:
        void findCombination(vector<vector < int>> &res, vector< int > temp, int index, int n, int k)
        {
// as soon as we find a combination of size k we push it
            if (temp.size() == k)
            {
                res.push_back(temp);
                return;
            }
            
// iterating now, we push our first digit and then call recursion for the digit next to it (+1)
            for (int itr = index; itr < n; itr++)
            {
                temp.push_back(itr + 1);
                findCombination(res, temp, itr + 1, n, k);
                temp.pop_back();
            }
        }
    vector<vector < int>> combine(int n, int k)
    {
        vector<vector < int>> res;
        findCombination(res, vector<int> (), 0, n, k);
        return res;
    }
};