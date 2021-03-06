#include <iostream>

#define IS_LEAP_YEAR(year) \
  (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0)

int daysOfMonth(int, int);

using namespace std;

class Date {
  int day, month, year;

  void pre_increment() {
    ++day;

    if (day > daysOfMonth(month, year)) {
      day = 1;
      ++month;
    }

    if (month > 12) {
      month = 1;
      ++year;
    }
  }

  Date post_increment(Date& obj) {
    Date trivial = obj;
    trivial.day++;

    if (obj.day == daysOfMonth(obj.month, obj.year)) {
      trivial.day = 1;
      trivial.month++;
    }

    if (obj.month == 12) {
      trivial.month = 1;
      trivial.year = obj.year;
      trivial.year++;
    }

    Date temp;
    temp = obj;

    obj = trivial;
    trivial = temp;

    return trivial;
  }

 public:
  Date(int d = 1, int m = 1, int y = 1970) : day(d), month(m), year(y) {}

  Date(const Date& dt) : day(dt.day), month(dt.month), year(dt.year) {}

  Date operator++() {  // prefix
    pre_increment();
    return Date(*this);
  }

  Date operator++(int) {  // postfix
    Date retdate(*this);
    retdate = post_increment(*this);
    return retdate;
  }

  void read() {
    std::cout << "Enter date (dd mm yyyy): ";
    std::cin >> day >> month >> year;
  }

  void display() {
    std::cout << day << '-' << month << '-' << year << std::endl;
  }
};

int main(void) {
  Date foo;

  foo.read();
  foo.display();

  Date bar = foo++;

  foo.display();
  bar.display();

  return 0;
}

/* A LUT for days of month (leap year batteries included) */
int daysOfMonth(int month, int year) {
  switch (month) {
    case 1:
      return 31;

    case 2: /* February shit */
      return IS_LEAP_YEAR(year) ? 29 : 28;

    case 3:
      return 31;
    case 4:
      return 30;
    case 5:
      return 31;
    case 6:
      return 30;
    case 7:
      return 31;
    case 8:
      return 31;
    case 9:
      return 30;
    case 10:
      return 31;
    case 11:
      return 30;
    case 12:
      return 31;
  }

  return -1; /* Bad month */
}
