#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> SplitIntoWords(const string& s) {
    vector<string> ans;
    auto it = s.begin();

    while (true) {
        auto it_word_end = find(it, s.end(), ' ');
        ans.push_back(string(it, it_word_end));

        if (it_word_end == s.end()) {
            break;
        }
        else it = ++it_word_end;
    }

    return ans;
}


/*int main() {
    string s = "C Cpp Java Python";

    vector<string> words = SplitIntoWords(s);
    cout << words.size() << " ";
    for (auto it = begin(words); it != end(words); ++it) {
        if (it != begin(words)) {
            cout << "/";
        }
        cout << *it;
    }
    cout << endl;

    return 0;
}*/
