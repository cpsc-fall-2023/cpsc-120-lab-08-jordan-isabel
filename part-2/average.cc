// Jordan Gibson
// jgibson@csu.fullerton.edu
// @jordang101
// Partners: @isabel285

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one argument\n";
    return 1;
  }
  double sum{0.0};
  for (int i = 1; i < arguments.size(); ++i) {
    sum += std::stod(arguments.at(i));
  }
  double average = sum / (arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
