#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
using namespace std;


// banal solution (bubble sort)
// pair<int, int> two_sum(vector<int> a, int f_s) {
//     pair<int, int> result(0,0);

//     for(int i = 0; i < a.size(); i++) {
//         for(int j = i + 1; j < a.size(); j++) {
//              if(a[i] + a[j] == f_s) {
//                 result.first = a[i];
//                 result.second = a[i+1];
//                 return result;
//             }
//         }
       
//     }



//     return result;

// }

// hashmap solution


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

    int f_s;
    cin >> f_s;
     //result = two_sum(array, f_s);
    // cout <<  result.first<< " " << result.second << endl;


    //map solution
    // verific ce nr imi trebuie sa il am in mapa 
    // daca nu am numarul in mapa adaug valoarea 
    // daca am numarul in mapa returnez
    unordered_map<int, int> umap;
    for (int i = 0; i < array.size(); i++) {
        int value = array[i];
        int complement_pair = f_s - value;
        if(umap.find(complement_pair) != umap.end() && umap.find(complement_pair)->second != i) {
            result.first = umap[complement_pair];
            result.second = i;
        } else {
            umap[value] = i;
        }
    }
     cout <<  result.first<< " " << result.second << endl;
    return 0;
}