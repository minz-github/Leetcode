#include <iosteam>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> ans(2, -1);
  int n = (int)nums.size();
  unordered_map<int, int> hm;
  
  for (int i = 0; i < n; ++i) {
    int val = target - nums[i];
    
    if (hm.find(val) != hm.end()) {
      ans[0] = hm[val];
      ans[1] = i;
      break;
    }
    
    hm[nums[i]] = i;
  }
  
  return ans;
}
