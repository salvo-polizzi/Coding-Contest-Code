#include "monomio.h"
#include "list.h"


class Polinomio{
    private:
        List<Monomio> monomi;
        
    public:
        Polinomio(List<Monomio> _monomi): monomi(_monomi) {}

        void setListaMonomi(List<Monomio> lista) {this->monomi = lista;}

        bool checkGrade(int grade) {
            Node<Monomio>* ptr = monomi.getHead();

            while(ptr->getNext()) {
                if(ptr->getVal().getEsponente() == grade)
                    return true;
                ptr = ptr->getNext();
            }

            return false;
        }

        int maxGrade() {
            Node<Monomio>* ptr = monomi.getHead();
            Monomio maxMonomio = ptr->getVal();
            int maxGrado = maxMonomio.getEsponente();

            while(ptr->getNext()) {
                if(maxMonomio<ptr->getVal())
                    maxMonomio = ptr->getVal();
                ptr = ptr->getNext(); 
            }

            maxGrado = maxMonomio.getEsponente();
            return maxGrado;

        }

        Polinomio operator+(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade();
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1 != nullptr) {
                    if(ptr1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                    ptr1 = ptr1->getNext();
                }

                while(ptr2 != nullptr) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                    ptr2 = ptr2->getNext();
                    
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()+ptr2->getVal();
                    newMonomi.discendingInsert(toInsert);
                }else if(foundGrade1 && !foundGrade2) {
                    Monomio toInsert = ptr1->getVal();
                    newMonomi.discendingInsert(toInsert);

                }else if(!foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr2->getVal();
                    newMonomi.discendingInsert(toInsert);

                }

                gradoMassimo--;

                
            }

            Polinomio p(newMonomi);

            return p;

        }

        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade();
            }else {
                gradoMassimo = p1.maxGrade();
            }


            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1) {
                    if(ptr1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }

                    ptr1 = ptr1->getNext();
                }

                while(ptr2) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }

                    ptr2 = ptr2->getNext();
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
                    newMonomi.discendingInsert(toInsert);
                }else if(foundGrade1 && !foundGrade2) {
                    Monomio toInsert = ptr1->getVal();
                    newMonomi.discendingInsert(toInsert);
                }else if(!foundGrade1 && foundGrade2) {
                    Monomio toInsert = -ptr2->getVal();
                    newMonomi.discendingInsert(toInsert);

                }

                gradoMassimo--;

                
            }

            Polinomio p(newMonomi);
            return p;
        }


        friend ostream& operator<<(ostream& os, Polinomio p) {
            Node<Monomio>* ptr = p.monomi.getHead();

            while(ptr) {
                os << ptr->getVal();

                if(ptr->getNext() && ptr->getNext()->getVal().getCoefficiente() > 0) {
                    os << "+";
                }
                ptr = ptr->getNext();
            }
            return os;
        }
};