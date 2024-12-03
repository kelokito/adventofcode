#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    int x, y;
    std::vector<int> v;
    std::vector<int> w;
    
    //Read the values
    while(cin >> x >> y){
        v.push_back(x);
        w.push_back(y);
    }

    //Sort the vectors
    std::sort(v.begin(), v.end());
    std::sort(w.begin(), w.end());    

    //Compute the comparisons
    int sum = 0;
    for (int i = 0; i < v.size(); ++i)
        sum += w[i] - v[i];
    
    cout << sum << endl;
}