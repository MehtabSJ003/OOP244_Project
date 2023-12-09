/*
Name - MEHTAB SINGH JAGDE
Student ID - 119003226
Email - mjagde@myseneca.ca
Section - ZEE
Date - 29 / 11 / 2023

We have completed this assignment ourselves respecting academic integrity.

*/
#ifndef SDDS_IPRODUCT_H
#define SDDS_IPRODUCT_H
#include <iostream>
#include <fstream>
namespace sdds {
	class iProduct {
	public:
        virtual int readSku(std::istream& istr) = 0;
        virtual int operator-=(int qty) = 0;
        virtual int operator+=(int qty) = 0;
        virtual operator double() const = 0;
        virtual operator bool() const = 0;
        virtual int qtyNeeded() const = 0;
        virtual int qty() const = 0;
        virtual void linear(bool isLinear) = 0;
        virtual std::ofstream& save(std::ofstream& ofstr) const = 0;
        virtual std::ifstream& load(std::ifstream& ifstr) = 0;
        virtual std::ostream& display(std::ostream& ostr) const = 0;
        virtual std::istream& read(std::istream& istr) = 0;
        virtual bool operator==(int sku) const = 0;
        virtual bool operator==(const char* description) const = 0;
        virtual ~iProduct() {};
	};
    std::ostream& operator<<(std::ostream& ostr, const iProduct& rhs);
    std::istream& operator>>(std::istream& istr, iProduct& rhs);
}
#endif