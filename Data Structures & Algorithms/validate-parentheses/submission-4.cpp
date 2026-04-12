class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            if(c=='(' or c=='{' or c=='['){
                st.push(c);
                continue;
            }
            if(st.size()==0)
                return false;
            char ch = st.top();
            if(c==')' and ch!='(')
                return false;
            else if(c=='}' and ch!='{')
                return false;
            else if(c==']' and ch!= '[')
                return false;
            st.pop();
        }
        return st.size()==0;
    }
};
