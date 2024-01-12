#include<iostream>
using namespace std;

class car{
	public:
	int id;
	char company_name;
	char color;
	char model;
	int release_year;
};

int main(){
	car c[4];
	int i;
	
	for(i=1;i<=4;i++){
	
	cout<<"enter id";
	cin>>c[i].id;
	cout<<"enter company_name";
	cin>>c[i].company_name;
	cout<<"enter color";
	cin>>c[i].color;
	cout<<"enter model";
	cin>>c[i].model;
	cout<<"enter release_date";
	cin>>c[i].release_year;
	
}
	for(i=1;i<=4;i++){
			cout<<"id is :"<<c[i].id;
 		cout<<"company_name is :"<<c[i].company_name;
 		cout<<"model is :"<<c[i].model;
 		cout<<"color is :"<<c[i].color;
 		cout<<"release_date is :"<<c[i].release_year;
	}	
}
