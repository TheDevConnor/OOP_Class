#include <iostream>

void rotate_right(int n, int size, const int arr[], int dest[]);

int main(int argc, char *argv[]) {
  const int SIZE = 7;
  int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
  int new_list[SIZE];

  rotate_right(5, SIZE, list, new_list);

  for (int item : new_list) {
    std::cout << item << " ";
  }
  std::cout << std::endl;

  return 0;
}

void rotate_right(int n, int size, const int arr[], int dest[]) {
  if (size == 0)
    return;

  n = n % size;
  int start = size - n;

  int i = 0;

  // Copy second half
  for (int j = start; j < size; j++) {
    dest[i++] = arr[j];
  }

  // Copy first half
  for (int j = 0; j < start; j++) {
    dest[i++] = arr[j];
  }
}
