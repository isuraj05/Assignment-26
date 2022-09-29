#include<iostream>
using namespace std;

class StaticCount
{
	private:
		static int count;
	public:
		void increament()
		{
			count++;
		}
		void displayCount()
		{
			cout<<"The Result is "<<count;
		}
};
int StaticCount::count=0;

int main()
{
	StaticCount sc1,sc2,sc3,sc4;
	sc1.increament();
	sc2.increament();
	sc3.increament();
	sc4.displayCount();
}
