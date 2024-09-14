#include <iostream>
#include <stack>
#include <iostream>
#include <map>
using namespace std;

int main(int size, char* argv[]) {
    int n = atoi(argv[1]);
    stack<char> tack;



    for (int i = 2; i < n + 2; ++i) {
        string ex = argv[i];
        string res = "S";
        if(ex.size() % 2 != 0) {
            cout << "N" <<endl;
            continue;
        }
        for (char c: ex) {
            if (c == '{' || c == '[' || c == '(') {
                tack.push(c);
            } else {
                if (tack.empty()) {
                    res = "N";
                    break;
                }

                char top = tack.top();
                if ((top == '(' && c == ')') || (top == '{' && c == '}') || (top == '[' && c == ']')) {
                    tack.pop();
                } else {
                    res = "N";
                    break;
                }
            }
        }

        cout << res <<endl;

    }


    return 0;
}
