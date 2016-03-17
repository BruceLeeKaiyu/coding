//回文数
class Solution{
public:
	bool isPalindrome(int x){
		if(x<0) return false;
		
		int tmp = x;
		int a = 0;
		while(tmp){
			a *=10;
			a += (tmp%10);
			tmp /= 10;
		}
		if(x == a) return true;
		else return false;
	}
};
