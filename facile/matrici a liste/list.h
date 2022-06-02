#include <iostream>

using namespace std;


template<typename T>
class Node{
    private:
        T val;
        Node<T>* next;

        template<typename U>
        friend class List;

    public:
        Node(T val): val(val) {next = nullptr;}

        T getVal() {return this->val;}

        Node<T>* getNext() {return next;}
};

template<typename T>
class List{
    private:
        Node<T>* head;
        int size;
        int index;
        T* arr;
    
    public:
        List(int size): head(nullptr), size(size), index(0) {
            arr = new T[size];
        }

        List(): head(nullptr), index(0), size(0) {
            arr = new T[size];
        }

        bool isEmpty() {return head == nullptr;}
        
        void setSize(int num) {size = num;}

        void insertHead(T val) {
            if(this->isEmpty()) {
                head = new Node<T> (val);
                arr[index++] = val;
                return;
            }

            Node<T>* ptr = new Node<T> (val);
            ptr->next = head;
            head = ptr;

            arr[index++] = val;
        }

        void insertTail(T val) {
            if(this->isEmpty()) {
                head = new Node<T> (val);
                arr[index++] = val;
                return;
            }

            Node<T>* ptr = head;
            while(ptr->next)
                ptr = ptr->next;

            Node<T>* toInsert = new Node<T> (val);
            ptr->next = toInsert;

            arr[index++] = val;
        }

        T getValIndex(int index) {return arr[index];}

        fstream& toOutput(fstream& out) {
            for(int i=0; i<size; i++) {
                out << arr[i] << " ";
            }
            return out;
        }


        friend ostream& operator<<(ostream& os, List<T>& lista) {
            Node<T>* ptr = lista.head;

            while(ptr) {
                os << ptr->val << " ";
                ptr = ptr->next;
            }
            os << endl;
            return os;
        }
};