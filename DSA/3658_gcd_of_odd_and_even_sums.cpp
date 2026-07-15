class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumofodd = 0;
        int sumofeven = 0;
        for(int i = 1 ; i <= n*2 ; i++){
            if(i%2!=0){
                sumofodd += i;
            }
            else{
                sumofeven += i;
            }
        }
        int GCD = 0;
        for(int i = 1 ; i <= min(sumofodd,sumofeven) ; i++){
            if(sumofodd % i == 0 && sumofeven % i == 0){
                GCD = i;
            }
        }
        return GCD;
    }
};
