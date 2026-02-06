#include <cmath>
#include <iostream>
#include <vector>

void rotateLeft(std::vector<char> &v, int k);

int main(void) {
  std::vector<char> attend{
      '1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j', 'd', 'd', 'f', 'h',
      's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd', 'f', 'j', '1',
      '2', 'z', 'g', 'd', '7', '3', 'k', 'o', '9', 's', 'j', 'd', 'f'};
  int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);
  rotateLeft(attend, n_rotations);

  for (int i = 0; i < 5; i++) {
    std::cout << attend.at(i);
  }
  std::cout << std::endl;

  return 0;
}

void rotateLeft(std::vector<char> &v, int k) {
  if (v.size() == 0)
    return;

  k = k % v.size();
  int start = k;

  int i = 0;
  std::vector<char> dest(v.size());

  // Copy second half
  for (int j = start; j < v.size(); j++) {
    dest[i++] = v[j];
  }

  // Copy first half
  for (int j = 0; j < start; j++) {
    dest[i++] = v[j];
  }

  v = dest;
}
