#include <iostream>
using namespace std;
#include <fstream>
int main() {
 ifstream file ("data.txt");
  int calories = 0;
  int total = 0;
  string line;
  while (getline(file, line)) {
      if (line.empty()) {
        if (calories > total) {
          total = calories;
        }
        calories = 0;
      }
    else {
      calories += stoi(line);
    }
  }
  cout  << total;
}
//hello
