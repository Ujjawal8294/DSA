#include<iostream>
#include<vector>
using namespace std;

int main() {
   /* vector<int> r(6);
    cout << r.size() << endl;

    r.push_back(1);
    cout << r.size() << endl;

    r.pop_back();
    r.erase(r.begin() + 7);
    cout << r.size() << endl;

    r.insert(r.begin() + 2, 4);
    cout << r[2] << endl;*/
    vector<int>r;
    int i,element;
    for(i=0;i<5;i++){
        cin>>element;
        r.push_back(element);
    }
    for(i=0;i<5;i++){
        cout<<r[i];
    }

    return 0;
}
