#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	private:
		char *name,*branch;
		int name_size,branch_size,roll, year, sem;
	public:
		Student()
		{
			name=(char*) malloc(sizeof(char));	
			name_size=1;
			branch=(char*)malloc(sizeof(char));
			branch_size=1;
		}
		Student(char *n, int r, int y, int s, char *b) 
		{ 
			name_size=strlen(n);
			name=(char*)malloc(name_size + 1);
			strcpy(name,n);
			roll=r; 
			year=y; 
			sem=s; 
			branch_size=strlen(b);
			branch=(char*)malloc(branch_size +1);
			strcpy(branch,b); 
		}
				
		void setData() { }
		void getData () { }
		
		void showData()
		{
			cout<<"Name- "<<name<<endl;
			cout<<"Roll No- "<<roll<<endl;
			cout<<"Year- "<<year<<endl;
			cout<<"Sem- "<<sem<<endl;
			cout<<"Branch- "<<branch;
		}
};

int main()
{
	Student s1("Suraj Yadav",5,3,6,"ECE");
	s1.setData();
	s1.showData();
	return 0;
}
