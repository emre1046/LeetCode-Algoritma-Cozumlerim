class Solution {
public:
    void reverseString(vector<char>& s) {
       int sol = 0;
       int sag = s.size()-1;

       while(sol < s.size() /2){
        swap(s[sol],s[sag]);
        sol++;
        sag--;
       }
    }
};