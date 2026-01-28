#include <iostream>
#include <string>

#include "Student.hpp"

int main() {
  Student babenko(
      "Babenko",
      "Serhii",
      "Oleksandrovich",
      "15.02.2003",
      "Mariupil, Azov Ave. 15A, Apt. 195",
      "+38000000000", "Physics",
      "Second");

  babenko.print(std::cout);
  
  babenko.setSurname("Panchenko");
  std::cout << "New surname value: "
            << babenko.surname() << '\n';

  return 0;
}
