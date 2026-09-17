class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int gecici;
        int b = nums.size();
        int c = nums.size()-2;
        int i =0;
        while(i<nums.size()-1){
            if(nums[i] > nums[i+1]){
                gecici = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = gecici;
                i =0;
           }
           else{
            i++;
           }

        }
        int son = nums[b-1] -1 ;
        int son_eksi = nums[c] -1 ;
        return son * son_eksi ;
    }
};