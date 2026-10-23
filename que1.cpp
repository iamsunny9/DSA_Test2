//Que1.The Missing seat Number//
//A college is organizing a programming competition. Each participant receive a unique seat number from 0 to n. 
//However one seat number is missing from the registration list.
//You are given an array containing n distinct numbers from the range 0 to n. Find and return the missing number.

#include <iostream>

using namespace std;

int main(){
    int nums[]= {3, 0, 1};
    int n = 3;
    int sum = 0;
    for(int i =0; i <= n; i++){
        sum = sum + i;
    }
for(int i=0; i<n; i++){
    sum = sum -nums[i]; 
} 
cout << sum;
return 0;

}


//Output :- 2

//Time Complexity: O(n)
