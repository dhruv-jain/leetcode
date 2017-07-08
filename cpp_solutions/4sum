/*Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target?
Find all unique quadruplets in the array which gives the sum of target.

Note: The solution set must not contain duplicate quadruplets.

For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]
*/

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        sort(num.begin(), num.end());
        unordered_map<int, set<pair<int, int>>> hash;
        set<vector<int>> ans;
        int n = num.size();
        for (int i = 0; i < n; i ++) {
            for (int j = i + 1; j < n; j ++) {
                int a = num[i] + num[j];
                if (hash.count(target - a)) {
                    for (auto &p: hash[target - a]) {
                        vector<int> b = {p.first, p.second, num[i], num[j]};
                        ans.insert(b);
                    }
                }
            }
            for (int j = 0; j < i; j ++) {
                int a = num[j], b = num[i];
                hash[a + b].insert(make_pair(a, b));
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
