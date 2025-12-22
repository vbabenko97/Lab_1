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

void Student::setSurname(const std::string &surname) { surname_ = surname; }
void Student::setName(const std::string &name) { name_ = name; }
void Student::setPatronymic(const std::string &patronymic) {
  patronymic_ = patronymic;
}
void Student::setBirthday(const std::string &birthday) { birthday_ = birthday; }
void Student::setAddress(const std::string &address) { address_ = address; }
void Student::setPhone(const std::string &phone) { phone_ = phone; }
void Student::setFaculty(const std::string &faculty) { faculty_ = faculty; }
void Student::setCourse(const std::string &course) { course_ = course; }

void Student::print(std::ostream &out) const {
  out << "\u0424\u0430\u043c\u0438\u043b\u0438\u044f: " << surname_ << '\n'
      << "\u0418\u043c\u044f: " << name_ << '\n'
      << "\u041e\u0442\u0447\u0435\u0441\u0442\u0432\u043e: " << patronymic_
      << '\n'
      << "\u0414\u0430\u0442\u0430 "
         "\u0440\u043e\u0436\u0434\u0435\u043d\u0438\u044f: "
      << birthday_ << '\n'
      << "\u0410\u0434\u0440\u0435\u0441: " << address_ << '\n'
      << "\u0422\u0435\u043b\u0435\u0444\u043e\u043d: " << phone_ << '\n'
      << "\u0424\u0430\u043a\u0443\u043b\u044c\u0442\u0435\u0442: " << faculty_
      << '\n'
      << "\u041a\u0443\u0440\u0441: " << course_ << '\n';
}
