// #include<iostream>
// using namespace std;

// struct student{
//     string name;
//     int roll_no;
//     int marks[5];
// };
// int main(){
//     int n;
//     cout<<"Enter the number of students: ";
//     cin>>n;
//     student s[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter the name: ";
//         cin>>s[i].name;
//         cout<<"Enter the roll no. ";
//         cin>>s[i].roll_no;
//         for (int j = 0; j < 5; j++)
//         {
//             cout<<"Enter the marks of "<<j+1<<"subject: ";
//             cin>>s[i].marks[j];

//         }
//         int avg=0;
//         for (int j = 0; j < 5; j++)
//         {
//             avg+=s[i].marks[j];
//         }  

//         avg = avg/5;
//         if(avg>75){
//             cout<<s[i].name<<" "<<s[i].roll_no<<" "<<avg<<endl;
//         }else{
//             cout<<"Your average marks is less than 75"<<endl;
//         }
//     }
    
// return 0;
// }
#include<iostream>
using namespace std;
class Demo
{
	private:
	int num1,num2;
	public:
	Demo()
	{
		cout<<"In Default Constructor\n";
		num1=5;
		num2=7;
	}
	Demo(int num1, int num2)
	{
		cout<<"In Parameterized Constructor\n";
		this->num1=num1;
		this->num2=num2;
	}
	void show()
	{
		cout<<"First Number is "<<num1<<"\n";
		cout<<"Second Number is "<<num2<<"\n";
	}
	~Demo()
	{
		cout<<"In Destructor\n";
	}
};
int main()
{
	Demo obj;
	obj.show();
	Demo obj2(10,15);
	obj2.show();
	return 0;
}