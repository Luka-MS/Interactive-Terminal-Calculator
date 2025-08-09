#include <iostream>
#include <cmath>
#include <limits>  // For numeric_limits

using namespace std;

int main() {
    int choice;

    do {
        cout << "Interactive Terminal Calculator by Luka-M. S.";
        cout << "Choose a calculation type:\n";
        cout << "=== 1. Addition ===\n";
        cout << "=== 2. Subtraction ===\n";
        cout << "=== 3. Multiplication ===\n";
        cout << "=== 4. Division ===\n";
        cout << "=== 5. Formulas ===\n";
        cout << "=== 0. Exit ===\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            // If input is not an integer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please enter a number.\n";
            continue;
        }

        if (choice == 0) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        // GRUNDRECHENARTEN =======================================================================================================================
        if (choice >= 1 && choice <= 4) {
            double x, y;
            switch (choice) {
            case 1:
                cout << "You chose Addition.\n";
                cout << "Enter first number: ";
                cin >> x;
                cout << "Enter second number: ";
                cin >> y;
                cout << x << " + " << y << " = " << x + y << "\n";
                break;
            case 2:
                cout << "You chose Subtraction.\n";
                cout << "Enter first number: ";
                cin >> x;
                cout << "Enter second number: ";
                cin >> y;
                cout << x << " - " << y << " = " << x - y << "\n";
                break;
            case 3:
                cout << "You chose Multiplication.\n";
                cout << "Enter first number: ";
                cin >> x;
                cout << "Enter second number: ";
                cin >> y;
                cout << x << " * " << y << " = " << x * y << "\n";
                break;
            case 4:
                cout << "You chose Division.\n";
                cout << "Enter numerator: ";
                cin >> x;
                cout << "Enter denominator: ";
                cin >> y;
                if (y == 0) {
                    cout << "Error: Division by zero is undefined.\n";
                }
                else {
                    cout << x << " / " << y << " = " << x / y << "\n";
                }
                break;
            }
        }
        // FORMEL =================================================================================================================================
        else if (choice == 5) {
            int formulaChoice;
            cout << "Choose a formula category:\n";
            cout << "=== 1. Triangle formulas ===\n";
            cout << "=== 2. Circle formulas ===\n";
            cout << "=== 3. Square formulas ===\n";
            cout << "=== 0. Back to main menu ===\n";
            cout << "Enter your choice: ";
            cin >> formulaChoice;

            if (formulaChoice == 0) {
                continue;  // Back to main menu
            }

            // DREIECK ===========================================================================================================================
            if (formulaChoice == 1) {
                int triChoice;
                cout << "Triangle formulas:\n";
                cout << "=== 1. Area ===\n";
                cout << "=== 2. Perimeter (Pythagoras) ===\n";
                cout << "=== 3. Perimeter (general) ===\n";
                cout << "=== 4. Volume (Pyramids) ===\n";
                cout << "Enter your choice: ";
                cin >> triChoice;

                // FLÄCHENBERECHNUNG =============================================================================================================
                switch (triChoice) {
                case 1: {
                    cout << "Calculating area of triangle.\n";
                    double g, h;
                    cout << "Enter base length (g): ";
                    cin >> g;
                    cout << "Enter height (h): ";
                    cin >> h;
                    cout << "Area = 0.5 * " << g << " * " << h << " = " << 0.5 * g * h << "\n";
                    break;
                }
                      // PERIMETER & PYTHAGORAS ========================================================================================================
                case 2: {
                    cout << "Calculating perimeter using Pythagoras.\n";
                    double a, b;
                    cout << "Enter side a: ";
                    cin >> a;
                    cout << "Enter side b: ";
                    cin >> b;
                    double c = sqrt(a * a + b * b);
                    cout << "Hypotenuse c = sqrt(" << a << "^2 + " << b << "^2) = " << c << "\n";
                    cout << "Perimeter = " << a << " + " << b << " + " << c << " = " << (a + b + c) << "\n";
                    break;
                }
                case 3: {
                    cout << "Calculating perimeter of any triangle.\n";
                    double a, b, c;
                    cout << "Enter side a: ";
                    cin >> a;
                    cout << "Enter side b: ";
                    cin >> b;
                    cout << "Enter side c: ";
                    cin >> c;
                    cout << "Perimeter = " << a << " + " << b << " + " << c << " = " << a + b + c << "\n";
                    break;
                }
                      // VOLUME PYRAMIDS ==============================================================================================================
                case 4: {
                    int pyramidType;
                    cout << "Pyramid volume calculation:\n";
                    cout << "=== 1. Rectangular Pyramid ===\n";
                    cout << "=== 2. Square Pyramid ===\n";
                    cout << "=== 3. Triangular Pyramid (Tetrahedron) ===\n";
                    cout << "Enter pyramid type: ";
                    cin >> pyramidType;

                    if (pyramidType == 1) {
                        cout << "Rectangular pyramid volume.\n";
                        double a, b, h;
                        cout << "Enter side a: ";
                        cin >> a;
                        cout << "Enter side b: ";
                        cin >> b;
                        cout << "Enter height h: ";
                        cin >> h;
                        cout << "Volume = (1/3) * " << a << " * " << b << " * " << h << " = " << (1.0 / 3.0) * a * b * h << "\n";
                    }
                    else if (pyramidType == 2) {
                        cout << "Square pyramid volume.\n";
                        double a, h;
                        cout << "Enter side a: ";
                        cin >> a;
                        cout << "Enter height h: ";
                        cin >> h;
                        cout << "Volume = (1/3) * " << a << "^2 * " << h << " = " << (1.0 / 3.0) * a * a * h << "\n";
                    }
                    else if (pyramidType == 3) {
                        cout << "Triangular pyramid (tetrahedron) volume.\n";
                        double a, hTriangle, hPyramid;
                        cout << "Enter side a: ";
                        cin >> a;
                        cout << "Enter height of the triangle base: ";
                        cin >> hTriangle;
                        cout << "Enter height of the pyramid: ";
                        cin >> hPyramid;
                        cout << "Volume = (1/3) * (0.5 * " << a << " * " << hTriangle << ") * " << hPyramid << " = "
                            << (1.0 / 3.0) * 0.5 * a * hTriangle * hPyramid << "\n";
                    }
                    else {
                        cout << "Invalid pyramid type.\n";
                    }
                    break;
                }
                default:
                    cout << "Invalid choice for triangle formulas.\n";
                }
            }
            // KREIS ==============================================================================================================================
            else if (formulaChoice == 2) {
                int circleChoice;
                const double pi = 3.14159265358979323846;
                cout << "Circle formulas:\n";
                cout << "=== 1. Area ===\n";
                cout << "=== 2. Circumference ===\n";
                cout << "=== 3. Volume (Sphere) ===\n";
                cout << "Enter your choice: ";
                cin >> circleChoice;

                // FLÄCHENBERECHNUNG =============================================================================================================
                double r;
                switch (circleChoice) {
                case 1:
                    cout << "Calculate area.\n";
                    cout << "Enter radius: ";
                    cin >> r;
                    cout << "Area = π * r^2 = " << pi << " * " << r << "^2 = " << pi * r * r << "\n";
                    break;
                    // UMFANG =====================================================================================================================
                case 2:
                    cout << "Calculate circumference.\n";
                    cout << "Enter radius: ";
                    cin >> r;
                    cout << "Circumference = 2 * π * r = " << 2 * pi * r << "\n";
                    break;
                    // VOLUMEN ===================================================================================================================
                case 3:
                    cout << "Calculate volume of a sphere.\n";
                    cout << "Enter radius: ";
                    cin >> r;
                    cout << "Volume = (4/3) * π * r^3 = " << (4.0 / 3.0) * pi * r * r * r << "\n";
                    break;
                default:
                    cout << "Invalid circle formula choice.\n";
                }
            }
            // QUADRAT ============================================================================================================================
            else if (formulaChoice == 3) {
                int squareChoice;
                cout << "Square formulas:\n";
                cout << "=== 1. Area ===\n";
                cout << "=== 2. Perimeter ===\n";
                cout << "=== 3. Volume (Cube) ===\n";
                cout << "Enter your choice: ";
                cin >> squareChoice;

                double a;
                switch (squareChoice) {
                case 1:
                    cout << "Calculate area.\n";
                    cout << "Enter side length: ";
                    cin >> a;
                    cout << "Area = a^2 = " << a << "^2 = " << a * a << "\n";
                    break;
                case 2:
                    cout << "Calculate perimeter.\n";
                    cout << "Enter side length: ";
                    cin >> a;
                    cout << "Perimeter = 4 * a = " << 4 * a << "\n";
                    break;
                case 3:
                    cout << "Calculate volume of cube.\n";
                    cout << "Enter side length: ";
                    cin >> a;
                    cout << "Volume = a^3 = " << a << "^3 = " << a * a * a << "\n";
                    break;
                default:
                    cout << "Invalid square formula choice.\n";
                }
            }
            else {
                cout << "Invalid formula category choice.\n";
            }
        }
        else {
            cout << "Invalid choice. Please select a valid option.\n";
        }

        cout << "\n"; // Blank line for readability
    } while (true);

    return 0;
}
// CODE BY Luka-M. S.
