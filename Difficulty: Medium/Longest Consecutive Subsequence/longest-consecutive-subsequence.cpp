class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        unordered_set<int> st;

        for(int x : arr)
            st.insert(x);

        int ans = 0;

        for(int x : st){

            if(st.find(x-1)==st.end()){

                int cnt = 1;
                int curr = x;

                while(st.find(curr+1)!=st.end()){

                    curr++;
                    cnt++;
                }

                ans=max(ans,cnt);
            }
        }

        return ans;
    }
};