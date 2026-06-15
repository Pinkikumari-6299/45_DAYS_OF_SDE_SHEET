class Solution{
    public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
       int n=Arrival.size();
       int m=Departure.size();
       sort(Arrival.begin(),Arrival.end());
       sort(Departure.begin(),Departure.end());
       int result=0;
       int i=0;
       int j=0;
       int cnt=0;
       while(i<n && j<m)
       {
        if(Arrival[i] <= Departure[j])
        {
            cnt=cnt+1;
            i=i+1;
        }
        else
        {
            cnt=cnt-1;
            j=j+1;
        }
        result=max(result,cnt);
       }
       return result;
    }
};