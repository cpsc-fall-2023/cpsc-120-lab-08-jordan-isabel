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
  for (std::string& argument : arguments) {
    if (argument == arguments[0]) {
      continue;
    }
    sum += std::stod(argument);
  }
  double average = sum / static_cast<double>((arguments.size() - 1));
  std::cout << "average = " << average << "\n";
  return 0;
}
