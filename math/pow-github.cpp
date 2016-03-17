class Solution{
public:
//considering negative not only positive!!
	double myPow(double x,int n){
		double tmp;
		if(n>0)
			tmp = x;
		else{
			tmp = 1.0/x;
			n = -n;
		}

		double result = 1;
		while(n){
			if(n%2)
			    result *=tmp;
			tmp *= tmp;
			n /= 2;
		}

		return result;
	}
};
