#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin>>n;
    set<int> mSet;
    for(int i=0;i<n;i++) {
        int code;
        cin>>code;
        mSet.insert(code);
    }

    cout<<mSet.size()<<endl;
}
