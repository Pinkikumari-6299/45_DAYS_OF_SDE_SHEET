class Solution {
public:
    struct jobs {
        int id;
        int profit;
        int deadline;
    };

    static bool comp(jobs a, jobs b) {
        return a.profit > b.profit;
    }

    vector<int> JobScheduling(vector<vector<int>>& Jobs) {

        int n = Jobs.size();
        vector<jobs> arr(n);

        for(int i = 0; i < n; i++) {
            arr[i].id = Jobs[i][0];
            arr[i].deadline = Jobs[i][1];
            arr[i].profit = Jobs[i][2];
        }

        sort(arr.begin(), arr.end(), comp);

        int maxdeadline = -1;
        for(int i = 0; i < n; i++) {
            maxdeadline = max(maxdeadline, arr[i].deadline);
        }

        vector<int> hash(maxdeadline + 1, -1);

        int cnt = 0;
        int totalprofit = 0;

        for(int i = 0; i < n; i++) {
            for(int j = arr[i].deadline; j > 0; j--) {
                if(hash[j] == -1) {
                    hash[j] = arr[i].id;
                    cnt++;
                    totalprofit += arr[i].profit;
                    break;
                }
            }
        }

        return {cnt, totalprofit};
    }
};