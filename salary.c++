#include <iostream>
#include <string>
using namespace std;

void print(string output)
{
    cout << "------------------------" << endl;
    cout << output << endl;
}

int readNumEmployees()
{
    print("plz enter numbers of employees");
    int numEmployees = 0;
    cin >> numEmployees;
    return numEmployees;
}

void readInfo(string &nameEmployee, double &salaryemployee, double &hoursWork)
{
    print("plz enter name of employees");
    cin >> nameEmployee;

    print("plz enter salary of employee");
    cin >> salaryemployee;

    print("plz enter hours work of employee");
    cin >> hoursWork;
}

void calcSalary(double salaryemployee, double hoursWork, double &totalSalary, double &extraHoursWork, double &extraSalary)
{
    if (hoursWork > 156)
    {
        extraHoursWork = hoursWork - 156;
        extraSalary = (extraHoursWork * 1.5) * (salaryemployee / 156);
    }

    totalSalary = salaryemployee + extraSalary;
}

void printInfo(string nameEmployee, double salaryemployee, double hoursWork, double extraHoursWork, double extraSalary, double totalSalary)
{
    cout << "\nname         : " << nameEmployee << endl;
    cout << "hours work   : " << hoursWork << endl;
    cout << "extra hours  : " << extraHoursWork << endl;
    cout << "basic salary : " << salaryemployee << endl;
    cout << "extra salary : " << extraSalary << endl;
    cout << "total salary : " << totalSalary << endl;
}

int main()
{
    print("Adham");

    int numEmployees = readNumEmployees();

    for (int i = 0; i < numEmployees; i++)
    {
        string nameEmployee = " ";
        double salaryemployee, hoursWork, extraHoursWork, extraSalary, totalSalary = 0;

        readInfo(nameEmployee, salaryemployee, hoursWork);

        calcSalary(salaryemployee, hoursWork, totalSalary, extraHoursWork, extraSalary);

        printInfo(nameEmployee, salaryemployee, hoursWork, extraHoursWork, extraSalary, totalSalary);
    }

    return 0;
}