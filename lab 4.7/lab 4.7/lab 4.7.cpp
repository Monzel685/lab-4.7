#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;


    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(10) << "arcth(x)" << " |"
        << setw(7) << "S" << "    |"
        << setw(5) << "n" << " |" << endl;
    cout << "-----------------------------------------" << endl;
    x = xp;
    while (x <= xk) {


        if (x <= 1 && x >= -1) {
            n = 0;
            a = x;
            S = a;

            do {
                n++;
                R = R = (2 * n - 1) / (2 * n * x * x + x * x);
                a *= R;
                S += a;
            } while (abs(a) >= eps);

            cout << "|" << setw(7) << setprecision(2) << x << setw(2) << " |"
                << setw(10) << setprecision(5) << "arcth(x)" << setw(4) << " |"
                << setw(10) << setprecision(5) << S << setw(7) << " |"
                << setw(7) << n << setw(7) << " |"
                << endl;
        }
        else {

            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << "Out of range" << " |" <<
                setw(15) << "Out of range" << " |"
                << "Out of range" << " |"
                << endl;
        }

        x += dx;
    }

    cout << "-------------------------------------------------------" << endl;
    return 0;
}
