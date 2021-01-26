#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include<algorithm>
using namespace std;

// Time Complexity O(N^2) and Space Complexity O(1)
vector<int> twoNumberSumN2(vector<int> array, int targetSum){
    // Using two loops for solving.
    for(int i = 0; i < array.size() - 1; i++){
        for(int j = i + 1; j < array.size() - 1; j++){
            if(array[i] + array[j] == targetSum)
                return vector<int> {array[i], array[j]}; 
        }
    }
    return {};
}

// Time Complexity O(N) and Space Complexity O(N)
vector<int> twoNumberSumMap(vector<int> array, int targetSum) {
  // Using Maps for solving
	map<int, int> diff;
	for(auto i: array)
	{
		if(diff.find(i) != diff.end()){
			return vector<int>{diff[i], i};
		}
		else{
			diff[targetSum-i] = i;
		}
	}
  return {};
}

// Time Complexity O(N) and Space Complexity O(N)
vector<int> twoNumberSumOS(vector<int> array, int targetSum){
    // Using unordered set.
    unordered_set<int> diff;
    for(auto i: array){
        int potentialMatch = targetSum - i;
        if(diff.find(potentialMatch) != diff.end()){
            return vector<int> {potentialMatch, i};
        }
        else{
            diff.insert(i);
        }
    }
    return {};
}

// Time Complexity O(N log(N)) and Space Complexity O(1)
vector<int> twoNumberSumSort(vector<int> array, int targetSum){
    // Using sort algorithm
    sort(array.begin(), array.end());
    int left = 0;
    int right = array.size() - 1;
    while(left < right){
        if(array[left] + array[right] == targetSum)
            return vector<int> {array[left], array[right]};
        else if(array[left] + array[right] < targetSum)
            left = left + 1;
        else
            right = right + 1;
    }
    return {};
}
