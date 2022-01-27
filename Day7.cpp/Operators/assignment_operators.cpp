#include <iostream>
using namespace std;

int x = 10;

int main(){
    x += 5; // x = x + 5
    x -= 3; // x = x - 3
    x *= 6; // x = x * 6
    x /= 4; // x = x / 4
    x %= 9; // x = x % 9
    x &= 12; // x = x & 12
    x |= 7; // x = x | 7
    x ^= 10; // x = x ^ 10
    x >>= 1; // x = x >> 1
    x <<= 15; // x = x << 15

    cout << x;
}