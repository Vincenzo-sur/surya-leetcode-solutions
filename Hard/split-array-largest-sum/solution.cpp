class Solution {
public:
    int cnt(vector<int>& nums,int msum){
        int ls = 1, csum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(csum + nums[i] <= msum){
                csum += nums[i];
            }
            else{
                ls++;
                csum = nums[i];
            }
        }
        return ls;
    }
    int splitArray(vector<int>& nums, int k) {
        if( k > nums.size()) return -1;
        int lo = *max_element(nums.begin(),nums.end());
        int hi = accumulate(nums.begin(),nums.end(), 0);
        while(lo <= hi){
            int mid = (lo + hi)/2;
            int stu = cnt(nums, mid);
            if(stu > k) lo = mid + 1;
            else hi = mid - 1;
        }
        return lo;
        
    }
};