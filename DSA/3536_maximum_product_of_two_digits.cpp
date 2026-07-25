class Solution {
public:
    int maxProduct(int n) {
      int largest = 0;
      int secondlargest = 0;
      while(n>0){
        int rem = n % 10;
        if(rem >= largest){
            secondlargest = largest;
            largest = rem;
        }
        if(rem < largest && rem > secondlargest){
            secondlargest = rem;
        }
        
        n = n/10;
      }
      return largest * secondlargest;
    }
};
