//Que3. Find the Second heighest Score

#include <iostream>
using namespace std;
int main(){
    int scores[] = {4, 4, 4};
    int n = 3;
int highest = scores[0];
    int second = -1;
    for(int i = 1; i < n; i++){
        if(scores[i] > highest){
            second = highest;
            highest = scores[i];
        }
        else if(scores[i] < highest && scores[i] > second) {
            second = scores[i];
        }
    }
    cout << second;
    return 0;
}

//Output:- -1
// Time Complexity: O(n)

