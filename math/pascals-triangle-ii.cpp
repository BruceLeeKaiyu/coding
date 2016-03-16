class Solution{
public:
	vector<int> getRow(int rowIndex){
		vector<int> res(rowIndex+1,1);
		if(rowIndex==0 || rowIndex==1)
			return res;
		int i,j;
		for(i=2;i<=rowIndex;++i)
			for(j=i-1;j>=1;--j){
				res[j] = res[j-1] + res[j];
			}

		return res;
	}
};


