#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    stack<int> s;

    for(int i = 0; i < n; i++){
        int v;
        cin >> v;
        if(v != 0){
            s.push(v);
        }else{
            s.pop();
        }
    }
    int sum =0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;
    return 0;


}
