#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = sqrt(n);
    if (pow(answer, 2) == n){
        return 1;
    } 
    return 2;
}