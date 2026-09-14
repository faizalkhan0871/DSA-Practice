class Solution {
  public:
    int maxConsecutiveOnes(int n) {
    int count = 0;
    int maxCount = 0;

        while(n > 0) {

                    if(n & 1) {
                        count++;
                        maxCount = max(maxCount, count);
                    }
                    else {
                        count = 0;
                    }

                    n = n >> 1;
                }

                return maxCount;
            }
        };
        
    

