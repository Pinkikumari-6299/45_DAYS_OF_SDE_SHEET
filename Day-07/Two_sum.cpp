// TIME COMPLEXITY :O(n log n)
// SPACE COMPLEXITY:O(n)


class Solution {
   public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mpp;
        int num, i;
        for (i = 0; i < arr.size(); i++) {

            num = arr[i];
            int moreneeded = target - num;

            if (mpp.find(moreneeded) != mpp.end())

                return {mpp[moreneeded], i};

            mpp[num] = i;
        }
        return {-1, -1};
    }
};
