#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int x = 0; x <= n; ++x){
        if (x % 2 == 0){
            answer += x;
        }
    }
    return answer;
}