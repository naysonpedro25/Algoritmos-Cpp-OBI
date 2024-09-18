#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        if(map.find(nums[i]) != map.end()) {
            return {map[nums[i]], i};
        }
        map.insert(make_pair(target - nums[i], i));
    }
}

// 7, 2
int main() {
    vector<int> v1 = {3,3};
    vector<int> v2 = twoSum(v1, 6);
    for( int i : v2) {
        cout << i << " ";
    }
    return 0;
}