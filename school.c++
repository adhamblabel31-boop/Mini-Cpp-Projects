#include <iostream>
#include <string>
using namespace std;

void print(string output)
{
    cout << "------------------------------------" << endl;
    cout << output << endl;
}

int readPositiveInt()
{
    int x;
    do
    {

        cin >> x;

        if (x <= 0)
        {
            cout << "❌ Error: value cannot be negative!\n";
        }

    } while (x < 0);

    return x;
}

double readGradeLimited()
{
    double x;
    do
    {

        cin >> x;

        if (x < 0)
        {
            cout << "❌ Error: grade cannot be negative!\n";
        }
        else if (x > 100)
        {
            cout << "❌ Error: grade cannot be more than 100!\n";
        }

    } while (x < 0 || x > 100);

    return x;
}

int readNumOfStudents()
{
    int numStudent;
    print("plz enter num of students");
    numStudent = readPositiveInt();
    return numStudent;
}

void nameAndNumOfStudent(string &studentName, int &numSubject)
{
    print("plz enter name student");
    cin.ignore();
    getline(cin, studentName);

    print("plz enter num of subject");
    numSubject = readPositiveInt();
}

double ReadGrade(int j)
{
    double gradeSub;
    cout << "plz enter grade of subject" << (j + 1) << " : ";
    gradeSub = readGradeLimited();
    return gradeSub;
}

double totalSub(int numSubject)
{
    double total = 0;
    for (int j = 0; j < numSubject; j++)
    {
        double gradeSub = ReadGrade(j);
        total += gradeSub;
    }
    return total;
}

double calcAvg(double total, int numSubject)
{
    double avg = total / numSubject;
    return avg;
}

bool chickavg(double avg)
{
    if (avg >= 50)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printResult(string studentName, double total, double avg)
{
    cout << "\nstudent  : " << studentName << endl;
    cout << "total    : " << total << endl;
    cout << "average  : " << avg << endl;

    if (chickavg(avg))
    {
        print("pass");
    }
    else
    {
        print("fail");
    }
    cout << "************************************" << endl;
}

int main()
{
    print("Adham");
    int numStudent;
    numStudent = readNumOfStudents();

    for (int i = 0; i < numStudent; i++)
    {
        string studentName;
        int numSubject;

        nameAndNumOfStudent(studentName, numSubject);

        double total = totalSub(numSubject);

        double avg = calcAvg(total, numSubject);

        printResult(studentName, total, avg);
    }

    return 0;
}