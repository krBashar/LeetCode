class Solution {
public:
    bool isValid(string s) {

        stack <char> st;

        bool f = true;

        if(s.size()%2!=0)
        {
            f = false;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                {
                    st.push(s[i]);
                }
                else if(s[i]==')')
                {
                    if(st.top()!='(' || st.size()==0)
                    {f=false; break;}
                    else {st.pop();}
                }
                else if(s[i]=='}')
                {
                    if(st.top()!='{' || st.size()==0)
                    {f=false; break;}
                    else {st.pop();}
                }
                else if(s[i]==']')
                {
                    if(st.top()!='[' || st.size()==0)
                    {f=false; break;}
                    else {st.pop();}
                }
            }
        }

        if(st.size()!=0)
        {f=false;}
        return f;
        
    }
};