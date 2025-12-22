#pragma once

#include <string>
#include <iostream>

class Student
{
public:
    Student(std::string surname,
            std::string name,
            std::string patronymic,
            std::string birthday,
            std::string address,
            std::string phone,
            std::string faculty,
            std::string course);

    const std::string& surname() const;
    const std::string& name() const;
    const std::string& patronymic() const;
    const std::string& birthday() const;
    const std::string& address() const;
    const std::string& phone() const;
    const std::string& faculty() const;
    const std::string& course() const;

    void setSurname(const std::string& surname);
    void setName(const std::string& name);
    void setPatronymic(const std::string& patronymic);
    void setBirthday(const std::string& birthday);
    void setAddress(const std::string& address);
    void setPhone(const std::string& phone);
    void setFaculty(const std::string& faculty);
    void setCourse(const std::string& course);

    void print(std::ostream& out) const;

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
