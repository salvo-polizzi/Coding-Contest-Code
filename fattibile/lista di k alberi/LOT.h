#include "list.h"
#include "BST.h"


template<typename T>
class LOT{
    private:
        List< BST<T> > lot;
        int k;
    public:
        LOT(int k): k(k) {}

        void insertLot(T key) {
            if(lot.isEmpty()) {
                BST<T> newbst;
                newbst.insert(key);
                lot.insertHead(newbst);
                return;
            }
            

            if(lot.getHead()->getVal().getSize() < this->k) {
                lot.getHead()->getVal().insert(key);
                return;
            }

            
            BST<T> emptybst;
            emptybst.insert(key);
            lot.insertHead(emptybst);
        }

        void removeLot(T key) {
            Node< BST<T> >* ptr = lot.getHead();

            while(ptr) {
                if(ptr->getVal().occurencyVal(key) > 0) {
                    int index = 0;
                    while(index < ptr->getVal().occurencyVal(key)) {
                        ptr->getVal().remove(key);
                        index++;
                    }
                }
                ptr = ptr->getNext();
            }
            

            ptr = lot.getHead();
            while(ptr) {
                if(ptr->getVal().isEmpty()) {
                    Node< BST<T> >* toRemove = ptr;
                    ptr = ptr->getNext();
                    lot.removeNode(toRemove);
                }else
                    ptr = ptr->getNext();
            }
        }


        friend ostream& operator<<(ostream& os, LOT<T>& l) {
            Node< BST<T> >* ptr = l.lot.getHead();
            while(ptr) {
                ptr->getVal().preorder(os);
                ptr = ptr->getNext();
            }
            return os;
        } 
};