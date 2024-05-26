// prbolem link
// https://leetcode.com/contest/weekly-contest-399/problems/find-the-number-of-good-pairs-i/


class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        int count = 0;

        for(int i : nums1){
            for(int j : nums2){
                if(i%(j*k) ==0){
                    count++;
                }
            }
        }
        return count;
    }
};
