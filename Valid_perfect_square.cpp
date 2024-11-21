class Solution {
public:
    bool isPerfectSquare(int num) {
        bool ans = false;
        if(num==1){
            return true;
        }
        for(long long i=1; i<=num/2; i++){
            if((i*i)==num){
                ans = true;
                return ans;
            }
            else if((i*i)>num){
                break;
            }
        }
        return ans;
    }
};
