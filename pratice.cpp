#include <iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

// counting the number of digits,spaces and alphabet..
void q1(string str){
	int spaces=0,digits=0,alphabet=0;
	for(int i=0;i<str.size();i++){
		if(str[i]==' ')
			spaces++;
		else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
			alphabet++;
		else if(str[i]>=48 && str[i]<=57)
			digits++;
	}
	cout<<"spaces,alphabet,digits: "<<spaces<<" "<<alphabet<<" "<<digits<<endl;
}

// Input the n number of strings and find the largest string in those n number of strings.
void q3(){
	vector<string> str_v;
	char str[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin.getline(str,1000,'#');
		str_v.push_back(str);
	}
	for(auto i:str_v)
		cout<<i;
	cout<<str_v[0].size();
	// if can be optimize without any problem.
}


// sortest route problem..
void q2(string str){
	int x=0,y=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='E')
			x+=1;
		else if(str[i]=='W')
			x-=1;
		else if(str[i]=='N')
			y+=1;
		else if(str[i]=='S')
			y-=1;
	}
	if(x<0){
		for(int i=0;i<(-1*x);i++)
			cout<<'W';
	}
	else if(x>=0){
		for(int i=0;i<x;i++)
			cout<<'E';
	}
	if(y<0)
		for(int i=0;i<(-1*y);i++)
			cout<<'S';
	else if(y>=0)
		for(int i=0;i<y;i++)
			cout<<'N';
}

void experiment(){
	// cout<<(0 or 0);
	cout<<'w'<<endl;
}

int main(){
	_stdio();
	// char tmp=cin.get();
	// string str;
	// while(tmp!='#'){
	// 	// cout<<tmp;
	// 	str.push_back(tmp);
	// 	tmp=cin.get();
	// }
	// cout<<str<<endl;
	// q1(str);

	// cout<<"Experiment: "<<endl;
	// experiment();

	// q2("SNNNEWE");
	q3();
}