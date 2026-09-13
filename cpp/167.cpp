class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int istenen1,istenen2;
       int sol =0;
       int sag = numbers.size() -1;
       while(sol < numbers.size()){
        if(numbers[sol] + numbers[sag] == target){
            istenen1 = sol +1;
            istenen2 = sag + 1;
            break;
        }
        else if(numbers[sol] + numbers[sag] <  target){
            sol++;  
        }
        else if(numbers[sol] + numbers[sag] > target){
            sag--;
        }    
       }
          return {istenen1,istenen2};
    }
};