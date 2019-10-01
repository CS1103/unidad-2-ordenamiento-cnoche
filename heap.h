#include<iostream>
#include<vector>

template<typename T>
class heap: public Sort {
public:
    heap(std::vector<T> v) : Sort(v) {}

        int size_v = this->data.size();
        void Sift(const std::vector<int>::size_type heapSize, const std::vector<int>::size_type siftNode)
        {
            std::vector<int>::size_type i, j;

            j = siftNode;
            do
            {
                i = j;
                if(((2*i + 1) < heapSize) && this->data[j] < this->data[2*i + 1])
                    j = 2*i + 1;
                if(((2*i + 2) < heapSize) && this->data[j] < this->data[2*i + 2])
                    j = 2*i + 2;

                swap(this->data, i, j);
            }
            while(i != j);
        }

        void MakeInitialHeap()
        {
            for(int i = this->data.size() - 1; i >= 0; --i)
            {
                Sift(this->data, this->data.size(), i);
            }
        }

        void HeapSort()
        {
            MakeInitialHeap(this->data);
            for(std::vector<int>::size_type i = this->data.size()-1; i > 0; --i)
            {
                swap(this->data, i, 0);
                Sift(this->data, i, 0);
            }
        }
    virtual void sort() override{
        heapSort();
    }
};
