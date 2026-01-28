#include <iostream>
#include <string>

#include "Student.hpp"

int main() {
  Student babenko(
      "Babenko",
      "Sergey",
      "Alexandrovich",
      "31.12.1997",
      "Mariupol, Stroiteley Ave. 15A, Apt. 195",
      "+380635656379", "Physics",
      "Second");

  babenko.print(std::cout);

  babenko.setSurname("Ivanov");
  std::cout << "New surname value: "
            << babenko.surname() << '\n';

  return 0;
}
