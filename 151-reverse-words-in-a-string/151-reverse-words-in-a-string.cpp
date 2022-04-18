class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
// we set our left right and string size indexes
        int l = 0, r = 0, i = 0, n = s.size(); 

// now we iterate and see where how long our first word is, we set the right index and our iterator to its end
        while (i < n) {
            while (i < n && s[i] != ' ')
                s[r++] = s[i++];
// now we go through our "reversed" word and reverse it again
            if (l < r) { 
                reverse(s.begin() + l, s.begin() + r); 
                if (r == n) break; // if we reach the end of the string we have completed our work
// if not then we add a whitespace and then set our left index and the right index on the same point again
                s[r++] = ' ';  
                l = r;
            }
            ++i; 
        }
// if we find our string has any underlying white spaces in the end, we then cut them off and resize our string before returning it
        if (r > 0 && s[r-1] == ' ') --r; 
        s.resize(r);
        return s;
    }
};
