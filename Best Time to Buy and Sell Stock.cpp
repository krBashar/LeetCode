class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int res = 0;

        int s = prices.size();

        //vector<int>vec,vec2;
        int vec[s];
        int vec2[s];
        vec[0]=prices[0];
        vec2[s-1]=prices[s-1];

        for(int i=1; i<s; i++)
        {
            vec[i] = min(vec[i-1], prices[i]);
        }

        for(int i=s-2; i>=0; i--)
        {
            vec2[i] = max(vec2[i+1], prices[i]);
        }

        for(int i=0; i<s; i++)
        {
            res = max(res, vec2[i]-vec[i]);
        }
        
        return res;
    }
};