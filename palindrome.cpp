class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int m = x,rev = 0;
        if (x<0){
            return false;
        }
        

        while(m>0){
            int rem = m % 10;
            rev = (rev*10)+rem;
            m = m/10;
            
        }
        return x == rev;
    }
};
