#include <iostream>
#include <cmath>
using namespace std;

//max(x, y) = find hightest value of x & y
//min(x, y) = find lowest value of x & y

int main(){
    cout << max(5, 10) << "\n";
    cout << min(4, 12) << "\n";

    //include the cmath library to use these functions (& many more)
    cout << sqrt(64) << "\n";     //square root
    cout << round (2.6) << "\n";  // rounds #
    cout << log(2);               // natural log

    return 0;
}