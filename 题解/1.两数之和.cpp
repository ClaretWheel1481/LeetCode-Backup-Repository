class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Hashmap;
        for(int i = 0;i<nums.size();i++){
            auto findkey = Hashmap.find(target - nums[i]); //遍历查找map中是否有匹配的key值
            if(findkey != Hashmap.end()){
                return {findkey->second, i};
            }
            Hashmap.insert(pair<int,int>(nums[i],i)); //没找到匹配值对，将遍历过的元素与下标添加至表中
        }
        return {};//返回空组
    }
};
