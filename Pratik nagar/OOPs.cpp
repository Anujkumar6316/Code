#include<iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

class product{
	int s_no;
	string name;
	int MRP;
	int Selling_Price;
	public:
		product(int s_no,string name,int MRP,int Selling_Price){
			this->s_no=s_no;
			this->name=name;
			this->MRP=MRP;
			if(Selling_Price>=0){
				if(Selling_Price>MRP)
					this->Selling_Price=MRP;
				else
					this->Selling_Price=Selling_Price;
			}
			else
				Selling_Price=0;
		}

		//setter
		void set_SP(int Selling_Price){
			if(Selling_Price>=0){
				if(Selling_Price>MRP)
					this->Selling_Price=MRP;
				else
					this->Selling_Price=Selling_Price;
			}
			else
				Selling_Price=0;
		}

		void set_MRP(int MRP){
			this->MRP=MRP;
		}

		void display(){
			cout<<"S No.: "<<s_no<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"MRP: "<<MRP<<endl;
			cout<<"Selling_Price: "<<Selling_Price<<endl;
		}
};

int main(){
	_stdio();
	product p1(01,"Butter",500,450);
	p1.display();


}