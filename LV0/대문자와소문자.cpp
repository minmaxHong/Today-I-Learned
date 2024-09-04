#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i=0; i < my_string.length(); ++i){
        if(my_string[i] >= 'a' && my_string[i] <= 'z'){
            my_string[i] = my_string[i] - ('a' - 'A');
        }
        else{
            my_string[i] = my_string[i] + ('a' - 'A');
        }
    }
    return my_string;
}