#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<sstream>
#define endl '\n'
using namespace std;



int main() {

    //ios::sync_with_stdio(false);
    //cin.tie(0);

    int n; cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string word;
        getline(cin, word);
        reverse(word.begin(), word.end());
        stack<string> result;
        stringstream ss(word);
        string tmp;
        while (getline(ss, tmp, ' ')) {
            result.push(tmp);
        }

        while (!result.empty()) {
            cout << result.top() << " ";
            result.pop();
        }
        cout << endl;
    }



    return 0;
}
