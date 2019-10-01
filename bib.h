#ifndef BIB_H
#define BIB_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Data{  
string country_or_area;
int year;
int comm_code;
string commodity;
string flow;
int trade_usd;
int weight_kg;
string quantity_name;
int quantity;
string category;
};

template<typename T>
class Sort {
    protected:
        std::vector<T> data;
    public:
        Sort(std::vector<T> data) : data(data){}

        virtual void sort() = 0;
};
#endif