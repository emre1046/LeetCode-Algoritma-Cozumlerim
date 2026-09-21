class Solution {
public:
    bool isPowerOfThree(int n) {
        double i = n;
        bool dogru_mu = 0;
        if(i == 1){
            dogru_mu = 1;
        }
        while(i > 1){
            
            double ara_sonuc = i/3;
            i = ara_sonuc;
            if(ara_sonuc ==1){
                dogru_mu = 1;
                break;
            }

        }
        
        return dogru_mu;
    }
};