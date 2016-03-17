class Solution{
public:
	int uniquePaths(int m,int n){
		vector<int> number(m+n-1,1);
		int i,j;
		if(m==1 || n==1)
			return 1;
		for(i=2;i<m+n-1;++i)
			for(j=i-1;j>=1;--j)
				number[j] = number[j] + number[j-1];
		return number[n-1];
	}
};

