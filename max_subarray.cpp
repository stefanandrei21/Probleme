#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <math.h>
using namespace std;

/*
 array: -3, 2, -5, 8, -1, 2, 3, -5

 curr: 8 - 1 = 7; 7 + 2; 9 + 3; 12 -5 = 7
 max: 12


 0 - current = -1
    current = 0
    s = 1;

1 - current 2
    max = 2 
    indexX = 1
    indexY = 1
2 - neg 
    s = 3
.. so on


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
    int indexX = 0, indexY = 0;
    int s = 0;
    int max = array[0];
    int current = 0;
    for(int i = 0; i < n; i++) {
        current = current + array[i];
        if(max < current) {
            max = current;
            indexX = s;
            indexY = i;
        }

        if (current < 0) {
            current = 0;
            s = i + 1;
        }
        
       

    }
   cout << max << endl;
   cout << "Index x :" << indexX << " Index y :" << indexY << endl;
    return 0;
}