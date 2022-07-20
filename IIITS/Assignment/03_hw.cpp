#include <iostream>
using namespace std;
class Employee
{
public:
    string employeeName;
    int employeeId;
    int basicSalary;
    void getData(string s, int id, int sal)
    {
        employeeName = s;
        employeeId = id;
        basicSalary = sal;
    }
    void displayInfo()
    {
        cout << "The name of the employee is " << employeeName << endl
             << "and id of that employee is " << employeeId << endl
             << "and salary of the employee is " << basicSalary << endl<<endl;
    }
};
class SalaryCalculator : public Employee
{
private:
    int hra, da, pf, grossSalary;

public:
    void getSal(int h, int d, int p,int sal)
    {
        hra = h;
        da = d;
        pf = p;
        basicSalary = sal;
    }
    void grossCal()
    {
        grossSalary = hra + da + pf + basicSalary;
    }
    void showSalarySlip()
    {
        cout << "The final salary of the employee is " << grossSalary << endl;
    }
};
int main()
{
    Employee abc;
    string name;
    int id, sal;
    cout << "Enter the name of the employee: " << endl;
    cin >> name;
    cout << "Enter the id of the employee: " << endl;
    cin >> id;
    cout << "Enter the basicSalary of the employee: " << endl;
    cin >> sal;
    abc.getData(name, id, sal);
    abc.displayInfo();
    SalaryCalculator b;
    int hra, da, pf, grossSalary;
    cout << "Enter the hra , da and pf of the Employee : " << endl;
    cin >> hra >> da >> pf;
    b.getSal(hra, da, pf,sal);
    b.grossCal();
    b.showSalarySlip();
    return 0;
}