#include <iostream>
using namespace std;

int x, y;
int sum;

/*int main(){
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x;
} */

int main(){
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
}

/*cout (see-out): used for output, uses insertion operator (<<)
  cin (see-in): used for input, uses extraction operator (>>) */