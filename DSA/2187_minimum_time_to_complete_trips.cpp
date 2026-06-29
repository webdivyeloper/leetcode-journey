class Solution {
public:

    bool check(long long mid , vector<int>& time, int totalTrips){
        long long n = time.size();
        long long sum = 0;
        for(int i = 0 ; i < n ; i++){
            long long rem = mid/time[i];
            sum = sum + rem;
        }

        if(sum>=totalTrips) return true;
        else return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long n = time.size();
       long long low = 1;
       long long L = 0;
       long long  ans = 0;

       for(int i = 0 ; i < n ; i++){
        L = max((long long)time[i],L);
       } 

       long long high = L * totalTrips;

       while(low<=high){
        long long mid = low + (high - low)/2;
        if(check(mid , time , totalTrips)==true){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
       }
       return ans;
    }
};
