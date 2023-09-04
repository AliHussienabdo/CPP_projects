#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <vector>
#include <iostream>
using namespace std;

template <typename key>
class maxHeap{
    public:
        maxHeap(vector<key>v){
            values.resize(v.size()+1,0);
            for(int i = 1; i < values.size(); i++){
                values[i] = v[i-1];
            }
            sz = values.size() - 1;

            for(int k=sz/2; k >= 1; k--){
                sink(k);
            }
        }
        
        void insert(key val){
            if(sz == values.size()-1){
                values.push_back(val);
                ++sz;
            }
            else{
                values[++sz] = val;
            }
            swim(sz);
        }

        void HeapSort(){
            int Size = sz;
            while(Size--){
                delMax();
            }
            std::cout << "HeapSort Done" << std::endl;
            for(int i = 1;i < values.size();i++){
                cout << values[i] << " ";
            }
        }
        key delMax(){
            key max = values[1];
            swap(values[1],values[sz--]);
            sink(1);
            return max;

        }

        bool isItMaxHeap(){
            values[sz] = 234344;
            for(int i = 1;i < values.size()/2 ;i++){
                if(i*2 < values.size() && values[i] < values[i*2]) return false;
                if(i*2+1 < values.size() && values[i] < values[i*2+1]) return false;
            }
            return true;
        }

        bool isEmpty(){
            return sz == 0;
        }
        int size(){
            return sz;
        }

        ~maxHeap(){
            // destructor
        }
    
    private:
        vector<key> values;
        int sz;

        // Heapify the array like a complete binary tree
        void sink(int k){
            // it's childs are k*2 and k*2 + 1

            while(2*k <= sz){
                int j = k*2;
                if(j < sz && values[j+1] > values[j]) ++j;
                if(values[j] <= values[k]) break;
                swap(values[j], values[k]);
                k = j;
            }
            
        }

        // for inserting values at the end of the heap we compare it with it's parent
        void swim(int k){

            while(k >1 && values[k/2] < values[k]){
                swap(values[k], values[k/2]);
                k = k/2;
            }
        }
};
#endif