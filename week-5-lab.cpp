#include <iostream>
#include <fstream>
using namespace std;
int main() {
    cout << "Enter 2 lengths for 2 sides of a triangle";
    int x, y, z;
    cin >> x >> y >> "\n";
    cout << "You entered" << x << "\n" << y << "\n" << endl;
    z = x * x + y * y;
    auto q = sqrt (z);
    ofstream lab5;
    lab5.open ("lab5.txt");
    lab5 << "the 3 sides are:" << q << "," << x << "," << y <<;
    
    lab5.close();

  
    return 0;
}
