#include <iostream>
#include <vector>
using namespace ::std;

// sort a list 
int in;
vector<int> toSort;
vector<int> sorted;

int main() {
    cin >> in;
    while(in != -1) {
        toSort.push_back(in);
        cin >> in;
    }

    // sort values
    for (auto& number : toSort) { // loop through numbers and modify them
        
    }



    return 0;
}