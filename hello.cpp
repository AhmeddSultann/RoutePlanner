#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> names = {"Alice", "Bob", "Charlie"};
  for (string name : names) {
    cout << "Hello, " << name << "!" << endl;
  }
  return 0;
}