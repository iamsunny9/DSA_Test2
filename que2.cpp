//Que2. Find the Best Pair of Students 

#include <iostream>
using namespace std;
int main(){
    int scores[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;
for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(scores[i] + scores[j] == target){
                cout << "[" << i << ", " << j << "]";
                return 0;
            }
        }
    }
    return 0;
}



//....Output:- Best pAir: [0,1]

// Time Complexity: O(n^2)

