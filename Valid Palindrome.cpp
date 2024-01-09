class Solution {
public:
    bool isPalindrome(string s) {

        string ss="";
        string s1="";

        for(int i=0; i<s.size(); i++)
        {
            char ch = s[i];
            int b = ch - 'A';
            b+=65;
            int a = ch - 'a';
            a += 97;
            int c = ch - '0';
            cout<<b<<endl;
            cout<<a<<endl;
            if(b>=65 && b<=90)
            {
                
                ch = tolower(ch);
                
                    ss+=ch;
                    s1+=ch;
            }
            else if(a>=97 && a<=122)
            {
                ss+=ch;
                s1+=ch;
            }
            else if(c>=0 && c<=9)
            {
                ss+=ch;
                s1+=ch;
            }
        }

        reverse(s1.begin(),s1.end());

        cout<<ss<<endl;
        cout<<s1<<endl;

        if(ss == s1)
        {
            return true;
        }
        else
        {
            return false;
        }

        
    }
};