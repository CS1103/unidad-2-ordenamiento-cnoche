#include<iostream>
#include <vector>
#include"bib.h"


template<typename T>
class merge : public Sort {       
    public:
        int size_v = this->data.size();
        void merge() {
            if (this->data.size() <= 1) return;

            int mid = this->data.size() / 2;
            vector<int> left;
            vector<int> right;

            for (size_t j = 0; j < mid;j++)
                left.push_back(this->data[j]);
            for (size_t j = 0; j < (this->data.size()) - mid; j++)
                right.push_back(this->data[mid + j]);

            merge(left);
            merge(right);
            mergeSort(left, right);
        }
        void mergeSort(vector<int>&left, vector<int>& right)
        {
            int nL = left.size();
            int nR = right.size();
            int i = 0, j = 0, k = 0;

            while (j < nL && k < nR) 
            {
                if (left[j] < right[k]) {
                    this->data[i] = left[j];
                    j++;
                }
                else {
                    this->data[i] = right[k];
                    k++;
                }
                i++;
            }
            while (j < nL) {
                this->data[i] = left[j];
                j++; i++;
            }
            while (k < nR) {
                this->data[i] = right[k];
                k++; i++;
            }
        }
        virtual void merge() override{
        merge();    
        }
};