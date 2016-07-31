#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSums(vector<int>& nums, int target) {
  vector<vector<int>> ans;
  int n = (int)nums.size();
  
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n; ++i) {
    int l = i + 1;
    int r = n - 1;
    
    while (l < r) {
      int sum = nums[i] + nums[l] + nums[r];
      if (sum < target) {
        ++l;
        
        while (l < r && nums[l] == nums[l - 1]) ++l;
      } else if (sum > target) {
        --r;
        
        while (l < r && nums[r] == nums[r + 1]) --r;
      } else {
        ans.push_back({nums[i], nums[l], nums[r]};
        ++l;
        --r;
        
        while (l < r && nums[l] == nums[l - 1]) ++l;
        while (l < r && nums[r] == nums[r + 1]) --r;
      }
    }
  }
  
  return ans;
}
