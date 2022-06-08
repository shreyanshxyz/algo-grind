class Solution {
public:
    
// A basic function to check the given string is a palindrome or not
bool isPalindrome(string& s, int st, int e){
    while(st < e){
        if(s[st++] != s[e--]){
            return false;
        }
    }
    return true;
}
    
    
void solve(int index, string& s, vector<string>& ds, vector<vector<string>>& ans)
{
    if(index == s.size()){
        ans.push_back(ds);
        return;
    }
// we iterate through the string
    for(int i = index; i < s.size(); i++){
// and while iterating we check on every iteration that the current string is a palindrome or not
        if(isPalindrome(s, index, i)){
// if it is a palindrome, what we do is we push that much part into our data structure
            ds.push_back(s.substr(index, i-index+1));
            solve(i+1, s, ds, ans);
            ds.pop_back();
        }
    }
}
    
vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        solve(0, s, ds, ans);
        return ans;
    }
};