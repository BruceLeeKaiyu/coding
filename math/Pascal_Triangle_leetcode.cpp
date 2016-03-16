class Solution{
public:
	vector<vector<int> > generate(int numRows){
		int i,j;
		vector<vector<int> > res;
		res.clear();
		for(i=1;i<=numRows;++i){
			res.push_back(vector<int>(i,1));
			for(j=1;j<i-1;++j)
				res[i-1][j] = res[i-2][j-1] + res[i-2][j];
		}		
		return res;
	}
};

