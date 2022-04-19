class Solution {
public:
    string interpret(string c) {
        string str = "";
        for(int i = 0; i < c.size(); i++){
            if(c[i] == '(' && c[i+1] == ')'){
                str+='o';
            }
            else if(isalpha(c[i]))
                str+=c[i];
        }
        return str;
    }
};