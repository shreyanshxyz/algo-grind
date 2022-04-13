class Solution {
public:
    bool isAnagram(string s, string t) {
//         BRUTE FORCE APPROACH (SORTING)
        
        // if (s.size() != t.size()) return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t)
        //     return true;
        // return false;
        
// Optimal (HASHING)
        if (s.size() != t.size()) return false;
        unordered_map<char, int> a, b; // we create two unordered maps
        for (int i=0; i<s.size(); i++)
        {
            a[s[i]]++; // we hash the first string into the first map
            b[t[i]]++; // we hash the second string into the second map
        }
        
        if(a == b) // if both the maps match, we return true else we return false.
            return true;
        return false;
    }
};