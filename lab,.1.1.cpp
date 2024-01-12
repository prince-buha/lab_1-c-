#include<iostream>
using namespace std;

class employess{
	public:
	int id;
	 char name;
	 char role;
	 int age;
	 int salary;
	 int experience;
	 char city;
	 char company_name;
};
int main(){
	employess e[5];
	int i;
	
	e[1].id = 7219;
	e[2].id = 7218;
	e[3].id = 7217;
	e[4].id = 7216;
	e[5].id = 7215;
	
	
	
	
	
	
	for(i=1;i<=5;i++){
		
		cout<<"enter your name";
		cin>>e[i].name;
		cout<<"enter your role";
		cin>>e[i].role;
		cout<<"enter your age";
		cin>>e[i].age;
		cout<<"enter your salary";
		cin>>e[i].salary;
		cout<<"enter your experience";
		cin>>e[i].experience;
		cout<<"enter your city";
		cin>>e[i].city;
		cout<<"enter your company_name";
		cin>>e[i].company_name;
	}
	for(i=1;i<=5;i++){
		cout<<"id is :"<<e[i].id;
 		cout<<"name is :"<<e[i].name;
 		cout<<"experience is :"<<e[i].experience;
 		cout<<"role is :"<<e[i].role;
 		cout<<"company_name is :"<<e[i].company_name;
 		cout<<"city is :"<<e[i].city;
		 cout<<"age is :"<<e[i].age;
	}
}

