#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    
    std::list<int> bigNumList;

    for (char c : numString) {
        if (c >= '0' && c <= '9') {
            bigNumList.push_back(c - '0');
        }
    }
    return bigNumList;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;

    while (!num1.empty() || !num2.empty() || carry != 0) {
        int digit1 = 0, digit2 = 0;

        if (!num1.empty()) {
            digit1 = num1.back();
            num1.pop_back();
        }

        if (!num2.empty()) {
            digit2 = num2.back();
            num2.pop_back();
        }

        int sum = digit1 + digit2 + carry;
        result.push_front(sum % 10);
        carry = sum / 10;
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;

    while (!num1.empty() || !num2.empty()) {
        int digit1 = 0, digit2 = 0;

        if (!num1.empty()) {
            digit1 = num1.back();
            num1.pop_back();
        }

        if (!num2.empty()) {
            digit2 = num2.back();
            num2.pop_back();
        }

        int diff = digit1 - digit2 - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.push_front(diff);
    }

    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;

    if (num2.empty() || num2.front() == 0) {
        result.push_back(0);
        return result;
    }

    int multiplier = num2.front();
    num2.pop_front();

    while (!num1.empty() || carry != 0) {
        int digit1 = 0;

        if (!num1.empty()) {
            digit1 = num1.back();
            num1.pop_back();
        }

        int prod = digit1 * multiplier + carry;
        result.push_front(prod % 10);
        carry = prod / 10;
    }

    while (!result.empty() && result.front() == 0) {
        result.pop_front();
    }

    return result;
}