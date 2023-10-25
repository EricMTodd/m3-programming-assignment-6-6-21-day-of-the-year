#include <iostream>

using namespace std;

int month, day, year;

void outputStandardYear();
void outputLeapYear();

int main() {

  char ch;

  cout << "Please type the month, day, then year: ";
  cin >> month >> ch >> day >> ch >> year;
  cout << month << ch << day << ch << year;

  if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0) {
    outputLeapYear();
  } else {
    outputStandardYear();
  };

  return 0;
}

void outputStandardYear() {
  switch (month) {
    case 1: // January, 31 days
      cout << "This is day number " << day << ".";
      break;
    case 2: // February, 28 days
      cout << "This is day number " << 31 + day << ".";
      break;
    case 3: // March, 31 days
      cout << "This is day number " << 28 + 31 + day << ".";
      break;
    case 4: // April, 30 days
      cout << "This is day number " << 31 + 28 + 31 + day << ".";
      break;
    case 5: // May, 31 days
      cout << "This is day number " << 30 + 31 + 28 + 31 + day << ".";
      break;
    case 6: // June, 30 days
      cout << "This is day number " << 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
    case 7: // July, 31 days
      cout << "This is day number " << 30 + 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
    case 8: // August, 31 days
      cout << "This is day number " << 31 + 30 + 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
    case 9: // September, 30 days
      cout << "This is day number " << 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
    case 10: // October, 31 days
      cout << "This is day number " << 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
    case 11: // November, 30 days
      cout << "This is day number " << 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
    case 12: // December, 31 days
      cout << "This is day number " << 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day << ".";
      break;
  }
}

void outputLeapYear() {
    switch (month) {
    case 1: // January, 31 days
      cout << "This is day number " << day << ".";
      break;
    case 2: // February, 29 days
      cout << "This is day number " << 31 + day << ".";
      break;
    case 3: // March, 31 days
      cout << "This is day number " << 29 + 31 + day << ".";
      break;
    case 4: // April, 30 days
      cout << "This is day number " << 31 + 29 + 31 + day << ".";
      break;
    case 5: // May, 31 days
      cout << "This is day number " << 30 + 31 + 29 + 31 + day << ".";
      break;
    case 6: // June, 30 days
      cout << "This is day number " << 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
    case 7: // July, 31 days
      cout << "This is day number " << 30 + 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
    case 8: // August, 31 days
      cout << "This is day number " << 31 + 30 + 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
    case 9: // September, 30 days
      cout << "This is day number " << 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
    case 10: // October, 31 days
      cout << "This is day number " << 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
    case 11: // November, 30 days
      cout << "This is day number " << 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
    case 12: // December, 31 days
      cout << "This is day number " << 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 29 + 31 + day << ".";
      break;
  }
}