#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define ll long long
#define READ(x) freopen(x, "r", stdin)
#define WRITE(x) freopen(x, "w", stdout)
#define BOOST1                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(NULL);                                                             \
    cout.tie(NULL)
#define pb push_back
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define mem(x, y) memset(x, y, sizeof x)
#define srt(vec) sort(vec.begin(), vec.end())
#define all(v) v.begin(), v.end()
#define priority vector<int>, greater<int>
#define uniqVec(x)                                                             \
    sort(all(x));                                                              \
    x.erase(unique(all(x)), x.end())
#define For(j, k) for (int i = j; i < k; i = i + 2)
#define for0(k) for (int i = 0; i < k; i++)
#define for1(k) for (int i = 1; i <= k; i++)
#define yes printf("YES\n")
#define no printf("NO\n")

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector <int> vec;

     //   int sz = sizeof(nums) / sizeof(nums[0]);
      //  sort(nums.begin(), nums.end());

        bool f = true;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vec.pb(i);
                    vec.pb(j);
                    f=false;
                    break;
                }
            }
            if(f==false)
            {
                break;
            }
        }

        return vec;
    }
};