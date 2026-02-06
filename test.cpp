#include <iostream>
#include <string>

int main() {
  int rows;
  std::cin >> rows;

  // Build the last row to know total width
  std::string last;
  for (int n = rows; n >= 1; n--) {
    last += std::to_string(n);
    if (n != 1)
      last += "  ";
  }
  for (int n = 2; n <= rows; n++) {
    last += "  " + std::to_string(n);
  }
  int total_width = last.size();

  // Build each row
  for (int i = 1; i <= rows; i++) {
    std::string row;

    // Descending
    for (int n = i; n >= 1; n--) {
      row += std::to_string(n);
      if (n != 1)
        row += "  ";
    }

    // Ascending
    for (int n = 2; n <= i; n++) {
      row += "  " + std::to_string(n);
    }

    // Center it
    int indent = (total_width - row.size()) / 2;
    std::cout << std::string(indent, ' ') << row << '\n';
  }

  return 0;
}