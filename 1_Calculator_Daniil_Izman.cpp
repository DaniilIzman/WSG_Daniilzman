#include <iostream>
using namespace std;

int main()
{
    // Get the X and Y coordinates from the user

    int Mx, My;

    cout << "Enter X-coordinate(Mx): ";
    cin >> Mx;
    cout << "Enter Y-coordinate(My): ";
    cin >> My;

    // Set maximum values for coordinate systems
    int Xmax = 20, Ymax = 20,Gx_maximum = 200, Gy_maximum = 100;

    // Creating output variables and formulas for them
    int Calculator_Gx,Calculator_Gy;
    Calculator_Gx = (Mx + Xmax) * (Gx_maximum/(Xmax*2));
    Calculator_Gy = Gy - 2.5 * (Gy_maximum + Ymax);

    // Final output
    cout << "Coordinates in graphical System are: G(" << Calculator_Mx <<"," << Calculator_My << ")";

    return 0;
}
