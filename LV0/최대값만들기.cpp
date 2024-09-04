#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    
    int com1 = numbers[0] * numbers[1];
    int com2 = numbers.back();
    numbers.pop_back();
    int com3 = numbers.back();
    int com4 = com2 * com3;
    
    if (com1 <= com4){
        return com4;
    }
    else{
        return com1;
    }
    
}