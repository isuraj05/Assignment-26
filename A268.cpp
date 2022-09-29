#include<iostream>
using namespace std;

class Bank
{
	private:
		int prin,roi,year,simpin;
	public:
		Bank(int p,int r,int y) { prin=p; roi=r; year=y; }
		
		void setData() { }
		void showData() 
		{
			cout<<"Principal- "<<prin<<", ROI- "<<roi<<", Year- "<<year<<endl;
		}
		
		void calSimpIn()
		{
			simpin=(prin*roi*year)/100;
		}
		int getSimpIn() { return simpin; }
};

int main()
{
	Bank b1(1000,12,7);
	b1.setData();
	b1.showData();
	b1.calSimpIn();
	cout<<"Simple interest is "<<b1.getSimpIn();
	return 0;
}
