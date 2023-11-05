#include<iostream>
#include<cmath>

using namespace std;


void SUBTRACTION() {
    double A, B;
    cout << "Please enter any two numbers: ";
    cin >> A >> B;
    cout << "Answer is: " << A - B << endl;
}

void ADDITION() {
    double A, B;
    cout << "Please enter any two numbers: ";
    cin >> A >> B;
    cout << "Answer is: " << A + B << endl;
}
void DIVISION() {
    double A, B;
    cout << "Please enter any two numbers: ";
    cin >> A >> B;

    if (B != 0) {
        cout << "Answer is: " << A / B << endl;
    } else {
        cout << "Error: Sorry, division by zero is not defined." << endl;
    }
}


void MULTIPLICATION() {
    double A, B;
    cout << "Please enter any two numbers: ";
    cin >> A >> B;
    cout << "Answer is: " << A * B << endl;
}
void SQUARE_ROOT() {
    double C;
    cout << "Please enter any number: ";
    cin >> C;

    if (C >= 0) {
        cout << "Answer is: " << sqrt(C) << endl;
    } else {
        cout << "Error: sorry, You Cannot calculate a square root of a negative number.otherwise it will give imaginary number" << endl;
    }
}


void sqr() {
    double C;
    cout << "Please enter any number: ";
    cin >> C;
    cout << "Answer is: " << C * C << endl;
}



int main() {
    int opr;
    cout<<"#####//////////////////////////////////######"<<endl;
    cout<<"#######WELCOME TO OUR SIMPLE CALCULATER######"<<endl;
    cout<<"#####//////////////////////////////////######"<<endl;

    do {
        cout << "You Can Select any of the following operations "

            "\n1 = SUBTRACTION"
            "\n2 = ADDITION"
            "\n3 = DIVISION"
            "\n4 = MULTIPLICATION"
            "\n5 = SQUARE_ROOT"
            "\n6 = SQUARE"
            "\n7 = EXIT"
            "\n \n Please make your choice: ";

        cin >> opr;

        switch (opr) {
            case 1:
                SUBTRACTION();

                break;
            case 2:
                 ADDITION();
                break;
            case 3:
                DIVISION();
                break;
            case 4:
                 MULTIPLICATION();

                break;
            case 5:
                  SQUARE_ROOT();

                break;
            case 6:
                 sqr();
                break;
            case 7:
                cout << "Exiting from program.\n";
                break;
            default:
                cout << "OOPss!!Something went wrong..!!" << endl;
                break;
        }

        cout << " \n---------------------------------\n";
    } while (opr != 7);

    return 0;
}

