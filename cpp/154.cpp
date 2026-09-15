class Solution {
public:
    int findMin(vector<int>& nums) {
        int en_kucuk = nums[0];
        for(int i = 0; i< nums.size();i++){
            if(en_kucuk > nums[i]){
                en_kucuk =nums[i];
                
            }
            
        }
        return en_kucuk;
    }
};