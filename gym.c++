#include <iostream>
using namespace std;

const string checkPassword = "9016";
void Password()
{
    string password;
    do
    {
        cout << "--------------------------" << endl;
        cout << "plz entre the password" << endl;
        cout << "--------------------------" << endl;

        cin >> password;
        if (checkPassword == password)
        {
            cout << "Success , Hello" << endl;
            break;
        }
        else
        {
            cout << "False" << endl;
            cout << "plz try again" << endl;
        }

    } while (true);
}

int TakeSystem()
{
    int systemchioser = 0;
    cout << "------------------------------------" << endl;
    cout << "-------- welcome to our gym --------" << endl;
    cout << "------------------------------------" << endl;
    cout << "------ plz choose your system ------" << endl;
    cout << "------------------------------------" << endl;
    
    cout << "1.Upper / Lower" << endl;
    cout << "2.Push / Pull / Leg" << endl;
    cout << "3.Full Body" << endl;
    cout << "4.Exit" << endl;
    
    while (true)
    {
        cin >> systemchioser;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input\n";
            continue;
        }

        if (systemchioser >= 1 && systemchioser <= 4)
        {
            return systemchioser;
        }
        else
        {
            cout << "\nenter 1 or 2 or 3 or 4\n";
        }

    }
    
}

int UL()
{
    int ul = 0;
    cout << "plz choose your part " << endl;
    cout << "1.upper" << endl;
    cout << "2.lower" << endl;

    while (true)
    {
        cin >> ul;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input\n";
            continue;
        }

        if (ul >= 1 && ul <= 2)
        {
            return ul;
        }
        else
        {
            cout << "\nenter 1 or 2\n";
        }
    }
    
}
void Upper()
{
    cout << "Bench press" << endl;
    cout << "Overhead press" << endl;
    cout << "Incline dumbbell press" << endl;
    cout << "Lateral raises" << endl;
    cout << "Face pulls" << endl;
    cout << "Biceps curls" << endl;
    cout << "Triceps pushdowns" << endl;
    cout << "Hanging leg raises" << endl;
    cout << "Pull-ups" << endl;
    cout << "Barbell row\n\n\n";
}
void lowerLeg()
{
    cout << "Squat" << endl;
    cout << "Deadlift" << endl;
    cout << "Romanian deadlift" << endl;
    cout << "Lunges" << endl;
    cout << "Leg press" << endl;
    cout << "Leg curl" << endl;
    cout << "Leg extension" << endl;
    cout << "Calf raises" << endl;
    cout << "Hip thrust" << endl;
    cout << "Plank or ab rollout\n\n\n";
}

int PPL()
{
    int ppl = 0;
    cout << "plz choose your part " << endl;
    cout << "1.push" << endl;
    cout << "2.pull" << endl;
    cout << "3.leg" << endl;

    while (true)
    {
        cin >> ppl;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input\n";
            continue;
        }

        if (ppl >= 1 && ppl <= 3)
        {
            return ppl;
        }
        else
        {
            cout << "\nenter 1 or 2 or 3\n";
        }

    }
    
}
void Push()
{
    cout << "Bench press  " << endl;
    cout << "Overhead press " << endl;
    cout << "Incline dumbbell press" << endl;
    cout << "Lateral raises" << endl;
    cout << "Triceps dips  " << endl;
    cout << "push-ups" << endl;
    cout << "dumbbell shoulder press" << endl;
    cout << "skull crushers\n\n\n";
}
void Pull()
{
    cout << "Pull-ups  " << endl;
    cout << "lat pulldown" << endl;
    cout << "Barbell row" << endl;
    cout << "dumbbell row" << endl;
    cout << "rear delt fly" << endl;
    cout << "Face pulls" << endl;
    cout << "Biceps curls" << endl;
    cout << "Hammer curls" << endl;
    cout << "Plank or ab rollout\n\n\n";
}

void FullBody()
{
    cout << "Squat" << endl;
    cout << "Deadlift" << endl;
    cout << "Bench press" << endl;
    cout << "Overhead press" << endl;
    cout << "Pull-ups" << endl;
    cout << "Barbell row" << endl;
    cout << "Lunges" << endl;
    cout << "Hip thrust" << endl;
    cout << "Lateral raises" << endl;
    cout << "Biceps curls" << endl;
    cout << "Triceps pushdowns" << endl;
    cout << "Plank\n\n\n";
}

int main()
{
    Password();
    bool cont = true;
    while (cont)
    {
        int systemchioser = TakeSystem();
        switch (systemchioser)
        {
        case 1:
        {
            int ul = UL();
            switch (ul)
            {
            case 1:
            {
                Upper();
                break;
            }

            case 2:
            {
                lowerLeg();
                break;
            }

            default:
                cout << "\"Not avaliable !\"";
                break;
            }

            break;
        }
        case 2:
        {
            int ppl = PPL();
            switch (ppl)
            {
            case 1:
            {
                Push();
                break;
            }
            case 2:
            {
                Pull();
                break;
            }
            case 3:
            {
                lowerLeg();
                break;
            }

            default:
            {
                cout << "\"Not avaliable !\"";
                break;
            }
            }

            break;
        }
        case 3:
        {
            FullBody();
            break;
        }
        case 4:
        {
            cont = false;
            cout << "Work hard \n\n\n";
            break;
        }
        default:
        {
            cout << "\"Not avaliable !\"\n\n\n";
            break;
        }
        }
    }
    return 0;
}