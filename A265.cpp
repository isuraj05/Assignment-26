#include<iostream>
using namespace std;

class Date
{
	private:
		int day,month,year;
	public:
		Date(int d,int m,int y) 
		{
			year=y;
			if(d>=1 && d<=31)
			{
				day=d;
				if(m>=1 && m<=12)	
					month=m;
				else
				{
					cout<<"You have entered an Invalid Month"<<endl;
				}
			}
			else
			{
				if(m<=12)	
				{
					cout<<"You have entered an Invalid Day"<<endl;
					month=m;
				}
				else
					cout<<"You have entered an Invalid Day & Month"<<endl;
			}
		}
		
		void setDate() { }
		
		void showDate()
		{
			cout<<day<<"-"<<month<<"-"<<year;
		}
};

int main()
{
	Date d1(21,9,2022);
	d1.setDate();
	d1.showDate();
	return 0;
}
