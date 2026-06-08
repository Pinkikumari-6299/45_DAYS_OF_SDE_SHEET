



class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
     int xr =0;
     unordered_map <int,int> mpp;
     int n=nums.size();
     mpp[xr]++;
     int cnt=0;
     for(int i=0;i<n;i++)
     {
    xr = xr ^ nums[i];
    int y= xr ^ k;
    cnt += mpp[y];
    mpp[xr]++;
     }  
     return cnt; 
    }
};