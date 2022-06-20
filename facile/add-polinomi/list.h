#include <iostream>

using namespace std;


template<typename T>
class Node{
    private:
        T val;
        Node<T>* next;
        Node<T>* prev;

        template<typename U>
        friend class List;
    public:
        Node(T val): next(nullptr), prev(nullptr), val(val) {}

        Node(): next(nullptr), prev(nullptr), val(NULL) {}

        T getVal() const {return val;}
        Node<T>* getNext() const {return next;}
};



template<typename T>
class List{
    private:
        Node<T>* head;
        Node<T>* tail;
        int size;
    public:
        List(): head(nullptr), tail(nullptr), size(0) {}

        bool isEmpty() {return head == tail && head == nullptr;}

        Node<T>* getHead() {return head;}

        Node<T>* getNode(T val) {
            if(head->val == val)
                return head;
            
            Node<T>* ptr = head;
            while(ptr->next && ptr->val != val) {
                ptr = ptr->next;
            }

            return ptr;
            
        }

        void insertHead(T val) {
            if(this->isEmpty()) {
                Node<T>* toInsert = new Node<T> (val);
                head = toInsert;
                tail = head;

                size++;
                return;
            }

            Node<T>* toInsert = new Node<T> (val);
            toInsert->next = head;
            head->prev = toInsert;
            head = toInsert;
            size++;
        }


        void insertTail(T val) {
            if(this->isEmpty()) {
                Node<T>* toInsert = new Node<T> (val);
                head = toInsert;
                tail = head;
                size++;
                return;
            }

            Node<T>* toInsert = new Node<T>(val);
            toInsert->prev = tail;
            tail->next = toInsert;
            tail = toInsert;
            size++;
        }


        void discendingInsert(T val) {
            if(this->isEmpty()) {
                Node<T>* toInsert = new Node<T> (val);
                head = toInsert;
                tail = head;
                size++;
                return;
            }

            if(head->val < val) {
                this->insertHead(val);
                return;
            }

            Node<T>* ptr = head;
            while(ptr->next && ptr->val >= val) {
                if(ptr->next->val < val)
                    break;
                ptr = ptr->next;
            }

            if(!(ptr->next)) {
                this->insertTail(val);
                return;
            }


            Node<T>* toInsert = new Node<T> (val);
            toInsert->next = ptr->next;
            toInsert->prev = ptr;
            
            ptr->next->prev = toInsert;
            ptr->next = toInsert;

            size++;
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

