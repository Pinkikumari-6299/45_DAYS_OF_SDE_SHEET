// TIME COMPLEXITY : O(2N * log N)
// SPACE COMPLEXITY : O(N)

class Solution
{
public:
    int mergeSort(vector<int> &nums, vector<int> &temp, int left, int right)
    {
        if (left >= right)
            return 0;
        int mid = (left + right) / 2;
        int count = 0;
        count += mergeSort(nums, temp, left, mid);
        count += mergeSort(nums, temp, mid + 1, right);
        int i = left;
        int j = mid + 1;
        while (i <= mid && j <= right)
        {
            if (nums[i] <= (long long)2 * nums[j])
            {
                i++;
            }
            else
            {
                count += (mid - i + 1);
                j++;
            }
        }
        i = left;
        j = mid + 1;
        int k = left;
        while (i <= mid && j <= right)
        {
            if (nums[i] <= nums[j])
            {
                temp[k++] = nums[i++];
            }
            else
            {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid)
        {
            temp[k++] = nums[i++];
        }
        while (j <= right)
        {
            temp[k++] = nums[j++];
        }
        for (int q = left; q <= right; q++)
        {
            nums[q] = temp[q];
        }
        return count;
    }

    int reversePairs(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> temp(n);

        return mergeSort(nums, temp, 0, n - 1);
    }
};

T.C : O(2 * n * log n)
          S.C : O(n)