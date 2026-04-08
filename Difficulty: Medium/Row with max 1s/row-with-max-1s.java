// User function Template for Java

class Solution {
    public int rowWithMax1s(int arr[][]) {
        // code here
        int m = arr.length;
        int n = arr[0].length;
        int max = 0, count = 0;
        int index = -1;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] == 1) {
                    count = n - j + 1;
                    break;
                }
            }
            if(count > max) {
                index = i;
            }
            max = Math.max(count, max);
            count = 0;
        }
        return index;
    }
}