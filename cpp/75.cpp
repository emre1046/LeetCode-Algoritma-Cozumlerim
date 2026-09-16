class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int gecici;
        while(i < nums.size()-1){
            if(nums[i]> nums[i+1]){
                gecici = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = gecici;
                i=0;
            }
            else{
                i++;
            }
        }
    }
};