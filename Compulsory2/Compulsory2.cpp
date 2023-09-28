#include <iostream>
#include <string>
#include <limits>
using namespace std;

unsigned long long int factorial(int n) {
    int result;
    if (n == 1 || n == 0) {
        result = 1;
    }
    else if (n < 0) {
        result = 0;
    }
    else {
        result = n * factorial(n - 1);
    }
    return result;
}

int main() {
    bool cont = true;
    int yourChoice = 0;
    int yourChoice2 = 0;
    int yourChoice3 = 0;
    int firstNumberAddition = 0;
    int secondNumberAddition = 0;
    int firstNumberSubtraction = 0;
    int secondNumberSubtraction = 0;
    int firstNumberMultiplication = 0;
    int secondNumberMultiplication = 0;
    int firstNumberDivision = 0;
    int secondNumberDivision = 0;

    while (cont) {
        cout << "\n1. Solve a factorial\n";
        cout << "2. Solve a 3rd degree polynomial equation\n";
        cout << "3. Solve a simple mathematical equation\n";
        cout << "4. Exit the program\n";
        cin >> yourChoice;
        if (cin.fail()) {
            cout << "Please enter numbers only\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch (yourChoice) {
        case 1:
            cout << "Enter number\n";
            int n;
            cin >> n;
            cout << factorial(n) << "\n";
            break;
        case 2:
            cout << endl << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cin >> yourChoice3;
            switch (yourChoice3) {
            case 1:
                cout << "\nInput 4 values for the first polynomial, (lowest polynomial first)\n";
                int firstPolyAdd[4];
                for (int i = 0; i < 4; i++) {
                    cin >> firstPolyAdd[i];
                }
                cout << "\nInput 4 values for the second polynomial, (lowest polynomial first)\n";
                int secondPolyAdd[4];
                for (int i = 0; i < 4; i++) {
                    cin >> secondPolyAdd[i];
                }
                int sumPolyAdd;
                for (int i = 0; i < 4; i++) {
                    sumPolyAdd = firstPolyAdd[i] + secondPolyAdd[i];
                    if (sumPolyAdd < 0) {
                        cout << " - ";
                        cout << sumPolyAdd * -1;
                    }
                    else if (i != 3, i != 0) {
                        cout << " + ";
                        cout << sumPolyAdd;
                    }
                    else {
                        cout << sumPolyAdd;
                    }
                    if (i != 0)
                        cout << "x^" << i;
                }
                break;
            case 2:
                cout << "\nInput 4 values for the first polynomial, (lowest polynomial first)\n";
                int firstPolySub[4];
                for (int i = 0; i < 4; i++) {
                    cin >> firstPolySub[i];
                }
                cout << "\nInput 4 values for the second polynomial, (lowest polynomial first)\n";
                int secondPolySub[4];
                for (int i = 0; i < 4; i++) {
                    cin >> secondPolySub[i];
                }
                int sumPolySub;
                for (int i = 0; i < 4; i++) {
                    sumPolySub = firstPolySub[i] - secondPolySub[i];
                    if (sumPolySub < 0) {
                        cout << " - ";
                        cout << sumPolySub * -1;
                    }
                    else if (i > 0, i != 0) {
                        cout << " + ";
                        cout << sumPolySub;
                    }
                    else {
                        cout << sumPolySub;
                    }
                    if (i != 0)
                        cout << "x^" << i;
                }
                break;
            case 3:
                cout << "\nInput 4 values for the first polynomial, (lowest polynomial first)\n";
                int firstPolyMult[4];
                for (int i = 0; i < 4; i++) {
                    cin >> firstPolyMult[i];
                }
                cout << "\nInput 4 values for the second polynomial, (lowest polynomial first)\n";
                int secondPolyMult[4];
                for (int i = 0; i < 4; i++) {
                    cin >> secondPolyMult[i];
                }
                int sumPolyMult;
                int result[7] = { 0 };
                for (int i = 0; i < 4; i++) {
                    for (int y = 0; y < 4; y++) {
                        result[i + y] += firstPolyMult[i] * secondPolyMult[y];
                    }
                }
                for (int i = 6; i >= 0; i--) {
                    if (result[i] != 0) {
                        if (i <= 0) {
                            cout << result[i];
                        }
                        else if (i <= 1) {
                            cout << result[i] << "x";
                        }
                        else {
                            cout << result[i] << "x^" << i;
                        }
                        if (i > 0) {
                            cout << " + ";
                        }
                    }
                }
                break;
            }
        case 3:
            cout << "\n1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cin >> yourChoice2;
            switch (yourChoice2) {
            case 1:
                cout << "Enter first number" << endl;
                cin >> firstNumberAddition;
                cout << "Enter second number" << endl;
                cin >> secondNumberAddition;
                cout << firstNumberAddition + secondNumberAddition << endl;
                break;
            case 2:
                cout << "Enter first number" << endl;
                cin >> firstNumberSubtraction;
                cout << "Enter second number" << endl;
                cin >> secondNumberSubtraction;
                cout << firstNumberSubtraction - secondNumberSubtraction << endl;
                break;
            case 3:
                cout << "Enter first number" << endl;
                cin >> firstNumberMultiplication;
                cout << "Enter second number" << endl;
                cin >> secondNumberMultiplication;
                cout << firstNumberMultiplication * secondNumberMultiplication << endl;
                break;
            case 4:
                cout << "Enter first number" << endl;
                cin >> firstNumberDivision;
                cout << "Enter second number" << endl;
                cin >> secondNumberDivision;
                if (cin.fail()) {
                    cout << "Please enter numbers only\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                cout << firstNumberDivision / secondNumberDivision << endl;
                break;
            default:
                cout << "Invalid option, choose again\n";
                break;
            }
            break;
        case 4:
            cont = false;
            break;
        default:
            cout << "Invalid option, choose again\n";
            break;
        }
    }
    return 0;
}