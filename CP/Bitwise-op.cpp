#include <iostream>
#include <vector>
using namespace std;

/*
XOR:
	x^x=0
	x^0=x
	a^b^c==b^a^c==c^a^b
*/

void removedup(vector<int> v){
	for(int i:v){
		int j=i+1;
		while(j<v.size()){
			if(!(i^v[j])){
				v.erase(v.begin()+j);
				--j;
			}
			j++;
		}
	}
	for(int i:v)
		cout<<i<<" ";
	cout<<endl;
}

void swap(int *a,int *b){
	int a1=*a^*b;
	*b=*b^a1;
	*a=a1^*b;
}

int main(){
	int a=4,b=6;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
	vector<int> v={1,2,42,4,2,4,2,2};
	removedup(v);
	for(int i:v)
		cout<<i<<" ";
}