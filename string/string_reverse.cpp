/*
	reverse an string
	such as 'abc' => 'cba'
		'abcdef' => 'cbafed'
		'I am a student!' => 'student! a am I'

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void LeftShiftOne(char *s,int n)
{	
	char tmp = s[0];
	int i;
	for(i=1;i<n;++i)
		s[i-1] = s[i];
	s[n-1] = tmp;
}

void LeftShift(char *s,int n,int t)
{
	while(t--)
		LeftShiftOne(s,n);
}

void ReverseString(char *s,int from,int to)
{
	char tmp;
	while(from < to){
		tmp = s[from];
		s[from++] = s[to];
		s[to--] = tmp;
	}
}
void LeftRotateString(char* s,int n,int m)
{
	m %= n;
 	ReverseString(s,0,m-1);
	ReverseString(s,m,n-1);
	ReverseString(s,0,n-1);
}
void ReverseWord(char *s) 
{
	vector<int> v;
	v.clear();
	v.push_back(-1);
	int i=0;
	while(s[i]!='\0'){
		if(s[i]==32)
			v.push_back(i);
		i++;
	}
	v.push_back(i);
	i =0;
	while(i<=v.size()-2){
		ReverseString(s,v[i]+1,v[i+1]-1);
		i++;
	}
	ReverseString(s,0,v[i]-1);	
}
int main()
{
	char s[] = "abcdefg";
	//char *s = s1.c_str();
	LeftShiftOne(s,7);
	cout<< s <<endl;
	LeftShift(s,7,3);
	cout<< s <<endl;
	ReverseString(s,0,6);
	cout<< s << endl;
	LeftRotateString(s,7,3);
	cout<< s <<endl;
	char s1[] = "I am a student!";
	//char *s3 = s2.c_str();
	ReverseWord(s1);
	cout<< s1 <<endl;
	return 0;
}
