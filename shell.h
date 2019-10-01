#include<iostream>
#include<vector>


template<typename T>
class shell : public Sort {
    shell(std::vector<T> v) : Sort(v) {}
    void shellSort(){
        int gap = this->data.size() /2;
        while(gap > 0){
            for (int i = gap; i < this->data.size();i++){
                for (int j = i;j > gap; j-= gap){
                    if (this->data[j]<this->data[j-gap])
                        swap(this->data[j], this->data[j-gap]);
                    else
                        break;
                    
                    }
                }
            }
        gap = gap/2;
        }
    virtual void sort () override{
    shellSort();    
    }

};
