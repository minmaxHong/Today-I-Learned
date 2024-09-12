#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    for(int i=0; i < box.size(); ++i){
        if (box[i] < n){
            return 0;
        }
    }
    
    return (box[0] / n) * (box[1] / n) * (box[2] / n);    
}