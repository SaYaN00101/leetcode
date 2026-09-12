class Solution {
public:
    bool isPalindrome(string s) {
        string cleanstr="";
        for(char n:s){
            if(isalnum(n)){
                cleanstr+=tolower(n);
            }
        }
        int st=0;
        int end=cleanstr.length()-1;
        while(st<end){
            if(cleanstr[st]!=cleanstr[end]){
                return false;

            }
            st++;
            end--;
        }
        return true;
    }
};