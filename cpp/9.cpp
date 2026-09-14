class Solution {
public:
    bool isPalindrome(int x) {
        
        long i=0;
        int sol =0;
        string b = to_string(x);
        int sag = b.size()-1;
        while(sol< sag){
            
            swap(b[sol],b[sag]);
            
            sol++;
            sag--;
        }
        
        for(char c: b){
            if(c>='0' && c<='9'){
                i = i*10 + (c -'0');
            }
        }
        int b_son = i;
        if(b_son ==x  ){
        return true;
        }
        else{
            return false;
        }
    }
};