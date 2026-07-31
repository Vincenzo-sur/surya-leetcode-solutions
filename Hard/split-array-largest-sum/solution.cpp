class Solution {
public:
    int cntStudents(vector<int>& nums,int pages){
        int stu = 1, pagesStudent = 0;
        for(int i = 0; i < nums.size(); i++){
            if(pagesStudent + nums[i] <= pages){
                pagesStudent += nums[i];
            }
            else{
                stu++;
                pagesStudent = nums[i];
            }
        }
        return stu;
    }
    int splitArray(vector<int>& nums, int k) {
        if( k > nums.size()) return -1;
        int lo = *max_element(nums.begin(),nums.end());
        int hi = accumulate(nums.begin(),nums.end(), 0);
        while(lo <= hi){
            int mid = (lo + hi)/2;
            int stu = cntStudents(nums, mid);
            if(stu > k) lo = mid + 1;
            else hi = mid - 1;
        }
        return lo;
        
    }
};