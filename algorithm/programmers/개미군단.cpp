#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) {
    int king = hp / 5;
    int king_a = hp % 5;
    
    int middle = king_a / 3;
    int middle_a = king_a % 3;
    
    if (middle_a == 0){
        return king + middle;
    }
    
    return king + middle + middle_a;
    
}