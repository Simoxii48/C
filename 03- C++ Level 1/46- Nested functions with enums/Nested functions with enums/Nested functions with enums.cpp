#include <iostream>
using namespace std;

enum enWeekDay {
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

void showWeekDayMenu() {
    cout << "******************************************" << endl;
    cout << "               Week Days                  " << endl;
    cout << "******************************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "******************************************" << endl;
    cout << "Please enter the number of day : ";
}

enWeekDay readWeekDay() {
    int choosenDay;
    cin >> choosenDay;
    return (enWeekDay)choosenDay;
}

string getWeekDayName(enWeekDay weekDay) {
    switch (weekDay) {
    case enWeekDay::Sun:
        return "Sunday";
        break;
    case enWeekDay::Mon:
        return "Monday";
        break;
    case enWeekDay::Tue:
        return "Tuesday";
        break;
    case enWeekDay::Wed:
        return "Wednesday";
        break;
    case enWeekDay::Thu:
        return "Thursday";
        break;
    case enWeekDay::Fri:
        return "Friday";
        break;
    case enWeekDay::Sat:
        return "Saturday";
        break;
    default:
        return "Not a week day!\n";
    }
}

int main()
{ 
    showWeekDayMenu();

    cout << "Today is " << getWeekDayName(readWeekDay()) << endl;
    
}