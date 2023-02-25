#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <math.h>
using namespace std;


int main()            
{

    vector<int> array;
    pair<int, int> result;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int red;
        cin >> red;
        array.push_back(red);
    }
    int min = array[0];
    int profit = 0;
    for(int i = 0; i < array.size(); ++i) {
        if (array[i] < min) {
            min = array[i];
        }
        if(profit < array[i] - min){
            profit = array[i] - min;
        } else {
            profit = profit;
        }
    }

    cout << profit<< endl;

    return 0;
}