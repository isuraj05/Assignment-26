#include<iostream>
using namespace std;

class Bill
{
	private:
		int unit,bill;
	public:
		void setData(int u) { unit=u; }
		
		void calBill()
		{
			if(unit<=100)
				bill=unit*1.20;
			else if(unit>100 && unit<=200)
				bill=(100*1.20) + ((unit-100)*2);
			else
				bill=(100*1.20) + (100*2) + ((unit-200)*3);
		}
		int getBill() { return bill; }
};

int main()
{
	Bill b1;
	b1.setData(560);
	b1.calBill();
	cout<<"Total electricity bill- Rs "<<b1.getBill()<<"/-";
	return 0;
}
