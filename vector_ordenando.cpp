#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool teste(vector<int> nums){

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size() - 1; i++){

        if(nums[ i + 1 ] != (nums[1] + 1)){
          return false;

        }

        }

return true;    
}

int main (){

vector<int>nums = {1, 2, 5, 7, 4, 3,6};
//vector<int>nums = { 1, 2 , 5, 0, 3, 6, 7};

for (int x : nums){

    cout << x << " ";
cout << "\nChecando numeros consecutivos " << teste(nums) << endl;

}

return 0; 
}