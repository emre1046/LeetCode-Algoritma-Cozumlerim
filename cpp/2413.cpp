class Solution {
public:
    int smallestEvenMultiple(int n) {
        int sonuc;
        if(n %2 ==0){
            sonuc=n;
        }
        else{
            sonuc = n*2;
        }
        return sonuc;
    }
};