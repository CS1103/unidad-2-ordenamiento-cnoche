#include<iostream>
#include<vector>
#include"bib.h"

template<typename T>
class quick: public Sort {
public:
    quick(std::vector<T> v) : Sort(v) {}
    int size = this->data.size();
        int partition(, int left, int right) {
            int pivotIndex = left + (right - left) / 2;
            int pivotValue = this->data[pivotIndex];
            int i = left, j = right;
            int temp;
            while(i <= j) {
                while(this->data[i] < pivotValue) {
                    i++;
                }
                while(this->data[j] > pivotValue) {
                    j--;
                }
                if(i <= j) {
                    temp = this->data[i];
                    this->data[i] = this->data[j];
                    this->data[j] = temp;
                    i++;
                    j--;
                }
            }
            return i;
        }
        void quicksort(int left, int right) {
            if(left < right) {
                int pivotIndex = partition(this->data, left, right);
                quicksort(this->data, left, pivotIndex - 1);
                quicksort(this->data, pivotIndex, right);
            }
        }
    virtual void sort() override{
    quicksort(0,size-1);
    }
};