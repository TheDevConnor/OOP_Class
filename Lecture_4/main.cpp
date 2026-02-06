#include <iostream>

void add_five(int &num) { num += 5; }

int main(void) {
  int a = 10;
  //? create a ref to a
  int &a_ref = a;

  a += 10; //! a_ref will be assigned to any value of a
  std::cout << a_ref << " " << a << std::endl;

  a_ref *= 10;
  std::cout << a_ref << " " << a << std::endl;

  add_five(a);
  std::cout << a_ref << " " << a << std::endl;

  return 0;
}