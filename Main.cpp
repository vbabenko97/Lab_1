#include <iostream>
#include <string>

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
            std::string course)
        : surname_(std::move(surname)),
          name_(std::move(name)),
          patronymic_(std::move(patronymic)),
          birthday_(std::move(birthday)),
          address_(std::move(address)),
          phone_(std::move(phone)),
          faculty_(std::move(faculty)),
          course_(std::move(course))
    {
    }

    const std::string& surname() const { return surname_; }
    const std::string& name() const { return name_; }
    const std::string& patronymic() const { return patronymic_; }
    const std::string& birthday() const { return birthday_; }
    const std::string& address() const { return address_; }
    const std::string& phone() const { return phone_; }
    const std::string& faculty() const { return faculty_; }
    const std::string& course() const { return course_; }

    void setSurname(const std::string& surname) { surname_ = surname; }
    void setName(const std::string& name) { name_ = name; }
    void setPatronymic(const std::string& patronymic) { patronymic_ = patronymic; }
    void setBirthday(const std::string& birthday) { birthday_ = birthday; }
    void setAddress(const std::string& address) { address_ = address; }
    void setPhone(const std::string& phone) { phone_ = phone; }
    void setFaculty(const std::string& faculty) { faculty_ = faculty; }
    void setCourse(const std::string& course) { course_ = course; }

    void print(std::ostream& out) const
    {
        out << "\u0424\u0430\u043c\u0438\u043b\u0438\u044f: " << surname_ << '\n'
            << "\u0418\u043c\u044f: " << name_ << '\n'
            << "\u041e\u0442\u0447\u0435\u0441\u0442\u0432\u043e: " << patronymic_ << '\n'
            << "\u0414\u0430\u0442\u0430 \u0440\u043e\u0436\u0434\u0435\u043d\u0438\u044f: " << birthday_ << '\n'
            << "\u0410\u0434\u0440\u0435\u0441: " << address_ << '\n'
            << "\u0422\u0435\u043b\u0435\u0444\u043e\u043d: " << phone_ << '\n'
            << "\u0424\u0430\u043a\u0443\u043b\u044c\u0442\u0435\u0442: " << faculty_ << '\n'
            << "\u041a\u0443\u0440\u0441: " << course_ << '\n';
    }

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

int main()
{
    Student babenko("\u0411\u0430\u0431\u0435\u043d\u043a\u043e",
                    "\u0421\u0435\u0440\u0433\u0435\u0439",
                    "\u0410\u043b\u0435\u043a\u0441\u0430\u043d\u0434\u0440\u043e\u0432\u0438\u0447",
                    "31.12.1997",
                    "\u0433. \u041c\u0430\u0440\u0438\u0443\u043f\u043e\u043b\u044c, \u043f\u0440. \u0421\u0442\u0440\u043e\u0438\u0442\u0435\u043b\u0435\u0439 15A, \u043a\u0432. 195",
                    "+380635656379",
                    "\u0424\u0418\u0417",
                    "\u0412\u0442\u043e\u0440\u043e\u0439");

    babenko.print(std::cout);

    babenko.setSurname("\u0418\u0432\u0430\u043d\u043e\u0432");
    std::cout << "\u041d\u043e\u0432\u043e\u0435 \u0437\u043d\u0430\u0447\u0435\u043d\u0438\u0435 \u0444\u0430\u043c\u0438\u043b\u0438\u0438: " << babenko.surname() << '\n';

    return 0;
}
