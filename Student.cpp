#include "Student.hpp"

#include <utility>

Student::Student(std::string surname, std::string name, std::string patronymic,
                 std::string birthday, std::string address, std::string phone,
                 std::string faculty, std::string course)
    : surname_(std::move(surname)), name_(std::move(name)),
      patronymic_(std::move(patronymic)), birthday_(std::move(birthday)),
      address_(std::move(address)), phone_(std::move(phone)),
      faculty_(std::move(faculty)), course_(std::move(course)) {}

const std::string &Student::surname() const { return surname_; }
const std::string &Student::name() const { return name_; }
const std::string &Student::patronymic() const { return patronymic_; }
const std::string &Student::birthday() const { return birthday_; }
const std::string &Student::address() const { return address_; }
const std::string &Student::phone() const { return phone_; }
const std::string &Student::faculty() const { return faculty_; }
const std::string &Student::course() const { return course_; }

void Student::setSurname(std::string surname) {
  surname_ = std::move(surname);
}
void Student::setName(std::string name) { name_ = std::move(name); }
void Student::setPatronymic(std::string patronymic) {
  patronymic_ = std::move(patronymic);
}
void Student::setBirthday(std::string birthday) {
  birthday_ = std::move(birthday);
}
void Student::setAddress(std::string address) { address_ = std::move(address); }
void Student::setPhone(std::string phone) { phone_ = std::move(phone); }
void Student::setFaculty(std::string faculty) {
  faculty_ = std::move(faculty);
}
void Student::setCourse(std::string course) { course_ = std::move(course); }

std::ostream &Student::print(std::ostream &out) const {
  return out << *this;
}

std::ostream &operator<<(std::ostream &out, const Student &student) {
  out << "Surname: " << student.surname() << '\n'
      << "Name: " << student.name() << '\n'
      << "Patronymic: " << student.patronymic() << '\n'
      << "Date of birth: " << student.birthday() << '\n'
      << "Address: " << student.address() << '\n'
      << "Phone: " << student.phone() << '\n'
      << "Faculty: " << student.faculty() << '\n'
      << "Course: " << student.course() << '\n';
  return out;
}
