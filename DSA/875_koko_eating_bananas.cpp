class Solution {
public:

    bool check(int mid , vector<int>& piles, int h){
        int n = piles.size();
        int k = mid;
        long long sum = 0;

        for(int i = 0 ; i < n ; i++){
            long long x = (piles[i] + k - 1) / k;
            sum += x;
        }

        if(sum<=h) return true;
        else return false;
    
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = 0;

        for(int i = 0 ; i < n ; i++){
            high = max(piles[i] , high);
        }

        int hours = 0;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(check(mid , piles , h) == true){
                hours = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return hours;
    }
};
