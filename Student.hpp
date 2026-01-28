#pragma once

#include <ostream>
#include <string>

class Student {
public:
  Student(std::string surname, std::string name, std::string patronymic,
          std::string birthday, std::string address, std::string phone,
          std::string faculty, std::string course);

  const std::string &surname() const;
  const std::string &name() const;
  const std::string &patronymic() const;
  const std::string &birthday() const;
  const std::string &address() const;
  const std::string &phone() const;
  const std::string &faculty() const;
  const std::string &course() const;

  void setSurname(std::string surname);
  void setName(std::string name);
  void setPatronymic(std::string patronymic);
  void setBirthday(std::string birthday);
  void setAddress(std::string address);
  void setPhone(std::string phone);
  void setFaculty(std::string faculty);
  void setCourse(std::string course);

  std::ostream &print(std::ostream &out) const;

private:
  std::string surname_;
  std::string name_;
  std::string patronymic_;
  std::string birthday_;
  std::string address_;
  std::string phone_;
  std::string faculty_;
  std::string course_;
};

std::ostream &operator<<(std::ostream &out, const Student &student);
