#include <iostream>
#include <vector>

void print(std::vector<int> arr) {
  for (auto item : arr) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char *argv[]) {
  std::vector<int> vec1{};

  std::vector<int> vec2{1, 2, 3, 4, 5, 6};
  print(vec2);

  std::vector<int> vec3(5, 10);
  print(vec3);

  // vec4 will be a copy of v2. They do not share the same
  // memory address so it is a copy by value not ref.
  std::vector<int> vec4(vec2);
  std::cout << "Size: " << vec4.size() << " : ";
  print(vec4);

  std::cout << "First: " << vec2.front() << std::endl;
  std::cout << "Last:  " << vec2.back() << std::endl;

  return 0;
}
