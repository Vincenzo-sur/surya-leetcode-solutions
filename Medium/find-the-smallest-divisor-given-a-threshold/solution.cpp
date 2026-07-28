class Solution {
public:
    int SumOfD(vector<int>& nums, int d){
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += ceil((double)(nums[i])/(double)(d));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1, hi = *max_element(nums.begin(),nums.end());
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(SumOfD(nums,mid) <= threshold){
                hi = mid-1;
            }
            else{
                lo = mid + 1;
            }
        }
        return lo;
        
    }
};