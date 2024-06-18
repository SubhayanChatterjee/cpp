#include<iostream>
#include<bitset>
using namespace std;

string countAndSay(int n) {
    if (n == 1) return "1";
    string prev = countAndSay(n - 1);
    string result = "";
    int count = 1;
    for (int i = 0; i < prev.length(); i++) {
        if (prev[i] == prev[i + 1]) {
            count++;
        } else {
            result += to_string(count) + prev[i];
            count = 1;
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th term of the Count and Say sequence is: " << countAndSay(n) << endl;
    return 0;
}

