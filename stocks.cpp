#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <math.h>
using namespace std;


// ex [7, 1, 5, 3, 6, 4]
/*
    min = 7;
    profit = 0
....
    min = 2;
    profit = 0

...
    min = 2;
    profit = 4

    .. etc

*/

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