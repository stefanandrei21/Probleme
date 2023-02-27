#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <math.h>
using namespace std;

/*
    *idee*
    array : 1, 2, 3, 4

    pre: 1, 1, 2, 6

    post: 24, 12, 4, 1 

    ans: 24, 12, 8, 6

    *in implementare calculam direct in ans*

    array : 1, 2, 3, 4
    2 variabile:
    pre: 1(taiem), 2
    post: 1(taiem), 4(taiem), 12

    
    ans: 24,  12, 2(taiem si face 8), 6
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
    vector<int> answer(n);

    int pre = 1, post = 1;
    //creez pre
    for(int i = 0; i < n; i++) {
        
        if(i == 0) {
            answer[i] = pre;
            continue;
        }
        answer[i] = pre * array[i - 1];
        pre = answer[i];
    }
    //post
    for(int i = n - 1; i >= 0; --i) {
        if(i == n - 1) {
            answer[i] = answer[i] * post; 
            continue;
        }
        post *= array[i + 1];
        answer[i] *= post;
    }
    for(int x : answer) {
        cout << x << " ";
    }
    return 0;
}