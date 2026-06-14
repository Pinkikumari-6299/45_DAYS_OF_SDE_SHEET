
class Solution
{
public:
    void sortZeroOneTwo(vector<int> &nums)
    {

        int n = nums.size();
        int zerocnt = 0;
        int onecnt = 0;
        int twocnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                zerocnt++;
            }
            else if (nums[i] == 1)
            {
                onecnt++;
            }
            else
            {
                twocnt++;
            }
        }
        int index = 0;
        while (zerocnt--)
        {
            nums[index++] = 0;
        }
        while (onecnt--)
        {
            nums[index++] = 1;
        }
        while (twocnt--)
        {
            nums[index++] = 2;
        }
    }
};
