//nested class
#include<iostream>
using namespace std;
class employee
{
	private:
		int eid,salary;
		char ename[20];
		public:
			void getdata()
			{
				cout<<"enterid,name and salary of an employee"<<endl;
				cin>>eid>>ename>>salary;
				cout<<"enter data of birth of an employee"<<endl;
				db.getDOB();
			}
			void display()
			{
				cout<<"EID="<<eid<<endl;
				cout<<"name="<<ename<<endl;
				cout<<"SALARY="<<salary<<endl;
				cout<<"DOB=";
				db.displayDOB();
			}
			class DOB
			{
				int y,m,d;
				public:
					void getDOB()
					{
					cout<<"enter year:";
					cin>>y;
					cout<<"enter month:";
					cin>>m;
					cout<<"enter day:";
					cin>>d;	
					}
					void displayDOB()
					{
						cout<<y<<"-"<<m<<"-"<<d<<endl;
					}
			};
			DOB db;
};
int main()
{
	employee e;
	e.getdata();
	cout<<"########employee details#####"<<endl;
	e.display();
}
