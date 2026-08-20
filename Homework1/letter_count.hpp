#include <iostream>
#include <string>
using namespace std;

int char_to_index(char ch) {
    return ch - 'A';
}
char index_to_char(int i) {
    return i + 'A';
}
void count(string s, int counts[]) {
    for (int i = 0; i < s.size(); ++i) {
        char ch = s[i];
        if ('a' <= ch && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }

        if ('A' <= ch && ch <= 'Z') {
            counts[char_to_index(ch)]++;
        }
    }
}
void print_counts(int counts[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << index_to_char(i) << ' ' << counts[i] << '\n';
    }
}