class Solution {
public:
    int DaysReq(vector<int>& weights,int cap){
        int d = 1, load = 0;
        for(int i = 0; i <weights.size();i++){
            if(load + weights[i] > cap){
                d += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(),weights.end());
        int hi = accumulate(weights.begin(),weights.end(), 0);
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(DaysReq(weights,mid) <= days){
                hi = mid -1;
            }
            else{
                lo = mid + 1;
            }
        }
        return lo;
        
    }
};