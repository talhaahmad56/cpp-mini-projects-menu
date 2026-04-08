#include <iostream>
using namespace std;

int factorial(int n) {
    switch(n) {
        case 0:
        case 1: return 1;
        case 2: return 2;
        case 3: return 6;
        case 4: return 24;
        case 5: return 120;
        case 6: return 720;
        case 7: return 5040;
        case 8: return 40320;
        case 9: return 362880;
        default: return 1;
    }
}

int main()
{
    int choice;

    cout << "===== MENU =====\n";
    cout << "1. Leap Year\n";
    cout << "2. Day of Week\n";
    cout << "3. Height Category\n";
    cout << "4. Electricity Bill\n";
    cout << "5. Discount\n";
    cout << "6. Exam Eligibility\n";
    cout << "7. Strong Number\n";
    cout << "8. Traffic Light\n";
    cout << "9. Body Fat\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) 
  {

    case 1: {
        int year;
        cout << "Enter year: ";
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << "Leap Year";
        else
            cout << "Not a Leap Year";
        break;
    }

    case 2: {
        int day;
        cout << "Enter number (1-7): ";
        cin >> day;

        switch(day) {
            case 1: cout << "Monday"; break;
            case 2: cout << "Tuesday"; break;
            case 3: cout << "Wednesday"; break;
            case 4: cout << "Thursday"; break;
            case 5: cout << "Friday"; break;
            case 6: cout << "Saturday"; break;
            case 7: cout << "Sunday"; break;
            default: cout << "Invalid input";
        }
        break;
    }

    case 3: {
        float height;
        int type;

        cout << "Enter height (cm): ";
        cin >> height;

        cout << "Select:\n1. Man\n2. Woman\n3. Boy\n4. Girl\n";
        cin >> type;

        // Convert to feet & inches
        float inches = height / 2.54;
        int feet = inches / 12;
        inches = (int)inches % 12;

        cout << "Height: " << feet << " ft " << inches << " in\n";

        if(type == 1)
            cout << (height < 165 ? "Short" : "Tall");
        else if(type == 2)
            cout << (height < 152 ? "Short" : "Tall");
        else if(type == 3)
            cout << (height < 139 ? "Short" : "Tall");
        else if(type == 4)
            cout << (height < 125 ? "Short" : "Tall");
        else
            cout << "Invalid type";

        break;
    }

    case 4: {
        int units;
        float bill;

        cout << "Enter units: ";
        cin >> units;

        if(units <= 100)
            bill = units * 5;
        else if(units <= 200)
            bill = 100 * 5 + (units - 100) * 7;
        else
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;

        cout << "Bill = " << bill;
        break;
    }

    case 5: {
        float cost;
        int cosmetics, jam;

        cout << "Enter total cost: ";
        cin >> cost;

        cout << "Bought cosmetics? (1=yes, 0=no): ";
        cin >> cosmetics;

        cout << "Bought jam-e-shireen? (1=yes, 0=no): ";
        cin >> jam;

        float discount = 0;

        if(cost > 1000)
            discount += 0.10;

        if(cosmetics == 1)
            discount += 0.02;

        if(jam == 1)
            discount += 0.03;

        cout << "Final Price = " << cost - (cost * discount);
        break;
    }

    case 6: {
        int held, attended;
        cout << "Enter classes held: ";
        cin >> held;

        cout << "Enter classes attended: ";
        cin >> attended;

        float percentage = (attended * 100.0) / held;

        cout << "Attendance: " << percentage << "%\n";

        if(percentage >= 75)
            cout << "Allowed in exam";
        else
            cout << "Not allowed in exam";

        break;
    }

    case 7: {
        int num, temp, sum = 0;
        cout << "Enter number: ";
        cin >> num;

        temp = num;

        while(temp > 0) {
            int digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if(sum == num)
            cout << "Strong Number";
        else
            cout << "Not Strong Number";

        break;
    }

    case 8: {
        string color;
        cout << "Enter color (red/yellow/green): ";
        cin >> color;

        if(color == "red")
            cout << "Stop";
        else if(color == "yellow")
            cout << "Ready";
        else if(color == "green")
            cout << "Go";
        else
            cout << "Invalid color";

        break;
    }

    case 9:{
        
    int gender;
    float weight, bodyFat, percentage;

    cout << "Enter your Gender (1 For Male , 2 For Female)\nEnter choice: ";
    cin >> gender;

    switch(gender) {

    case 1: {
        float wrist, A1, A2, B;

        cout << "Enter body weight: ";
        cin >> weight;

        cout << "Enter wrist measurement: ";
        cin >> wrist;

        A1 = (weight * 1.082) + 94.42;
        A2 = wrist * 4.15;
        B = A1 - A2;

        bodyFat = weight - B;
        percentage = (bodyFat * 100) / weight;

        cout << "Body Fat = " << bodyFat << endl;
        cout << "Body Fat % = " << percentage << "%" << endl;

        break;
    }

    case 2: {
        float A1, A2, A3, A4, A5, B;

        cout << "Enter body weight: ";
        cin >> weight;

        cout << "Enter A1: ";
        cin >> A1;
        cout << "Enter A2: ";
        cin >> A2;
        cout << "Enter A3: ";
        cin >> A3;
        cout << "Enter A4: ";
        cin >> A4;
        cout << "Enter A5: ";
        cin >> A5;

        B = A1 + A2 - A3 - A4 + A5;

        bodyFat = weight - B;
        percentage = (bodyFat * 100) / weight;

        cout << "Body Fat = " << bodyFat << endl;
        cout << "Body Fat % = " << percentage << "%" << endl;

        break;
    }

    default:
        cout << "Invalid choice!";
    }

    return 0;
         
    }

    default:
           cout <<"Invalid code";
  }
    return 0;
}