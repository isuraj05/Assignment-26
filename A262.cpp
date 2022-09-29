#include<iostream>
using namespace std;

class Time
{
	private:
		int h,m,s;
	public:
		void setTime(int hrs,int mins,int secs)
		{
			h=hrs;
			m=mins;
			s=secs;
		}
		
		void showTime()
		{
			cout<<h<<":"<<m<<":"<<s<<endl;
		}
		
		void normalize()
		{
			m+=s/60;
			s=s%60;
			h+=m/60;
			m=m%60;
		}
		Time add(Time t)
		{
			Time temp;
			temp.h=h+t.h;
			temp.m=m+t.m;
			temp.s=s+t.s;
			temp.normalize();
			return temp;
		}
};

int main()
{
	Time t1,t2,t3;
	
	t1.setTime(7,65,100);
	t1.normalize();
	t1.showTime();
	
	t2.setTime(9,63,90);
	t2.normalize();
	t2.showTime();
	
	t3=t1.add(t2);
	t3.showTime();
	return 0;
}
