#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

void rotateLeft(std::vector<char>& v, int k);

int main(void) {
    std::vector<char> attend {'1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j', 'd', 'd', 'f', 'h', 's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd', 'f', 'j', '1', 'i', '7', 'e', 'l', 'u', '4', 'm', 'o', '9', 's', 'j', 'd', 'f'};
    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);
    rotateLeft(attend, n_rotations);

    for(int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }
    std::cout << '\n';

    return 0;
}
//7elu4 

void rotateLeft(std::vector<char>& v, int k) {
    if (v.empty()) return;
    // Ensure k isn't larger than the vector size
    k %= v.size(); 
    std::rotate(v.begin(), v.begin() + k, v.end());
}
