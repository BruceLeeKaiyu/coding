class Solution{
public:
        vector<int> plusOne(vector<int>& digits){
        //How to store number using digits and consider the carry bit
                vector<int> result(digits.size(),0);
                int i;
                int carry = 1;
                for(i=digits.size()-1;i>=0;i--){
                        carry = digits[i] + carry;
                        result[i] = carry %10;
                        carry /= 10;
                }
                if(carry == 1)
                        result.insert(result.begin(),1);

                return result;
        }


};