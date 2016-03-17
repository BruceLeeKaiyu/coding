class Solution{
public:
//considering the range of interger and overflow!
	int reverse(int x)
	{ 
		if(x<0)
			return x==INT_MIN ?0 : -reverse(-x);
		int result = 0;
		while(x){
			if(result > INT_MAX/10)
				return 0;
			if(result == INT_MAX/10 && x>7)
				return 0;

			result *=10;
			result += (x%10);
			x /= 10;
		}
		return result;
	}

};

