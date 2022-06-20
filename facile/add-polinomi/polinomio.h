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
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                    ptr1 = ptr1->getNext();
                }

                while(ptr2->getNext()) {
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

        }

        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
Polinomio operator+(Polinomio p1) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    List<Monomio> m1 = p1.monomi;
        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    List<Monomio> _monomi;
        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    if(this->maxGrade() >= p1.maxGrade()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        cout << "this->maxGrade = " << this->maxGrade() << ", p1->maxGrade = " << p1.maxGrade() << endl;
        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        Node<Monomio>* ptr = monomi.getHead();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        Node<Monomio>* ptr1 = m1.getHead();
        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        while(ptr->getNext()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            if(p1.checkGrade(ptr->getVal().getEsponente())) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                while(ptr1->getNext()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                    if(ptr->getVal() == ptr1->getVal()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                        Monomio m = ptr->getVal() + ptr1->getVal();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                        _monomi.discendingInsert(m);
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                        break;
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                    }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                    ptr1 = ptr1->getNext();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                } 
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            _monomi.discendingInsert(ptr->getVal());
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            ptr = ptr->getNext();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    }else {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        Node<Monomio>* ptr = monomi.getHead();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        Node<Monomio>* ptr1 = m1.getHead();
        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        while(ptr1->getNext()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            if(this->checkGrade(ptr1->getVal().getEsponente())) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                while(ptr->getNext()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                    if(ptr->getVal() == ptr1->getVal()) {
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                        Monomio m = ptr->getVal() + ptr1->getVal();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                        _monomi.discendingInsert(m);
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                        break;
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                    }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                    ptr = ptr->getNext();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
                } 
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            _monomi.discendingInsert(ptr1->getVal());
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
            ptr1 = ptr1->getNext();
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
        }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    }
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    Polinomio toReturn(_monomi);
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
    return toReturn;
                Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }
}
        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

        }

        Polinomio operator-(Polinomio p1) {
            List<Monomio> m1 = p1.monomi;

            List<Monomio> newMonomi;
            int gradoMassimo;

            if(this->maxGrade() > p1.maxGrade()) {
                gradoMassimo = this->maxGrade()
            }else {
                gradoMassimo = p1.maxGrade();
            }

            while(gradoMassimo >= 0) {
                bool foundGrade1 = false;
                bool foundGrade2 = false;

                Node<Monomio>* ptr1 = this->monomi.getHead();
                Node<Monomio>* ptr2 = p1.monomi.getHead();

                 
                while(ptr1->getNext()) {
                    if(pt1->getVal().getEsponente() == gradoMassimo) {
                        foundGrade1 = true;
                        break;
                    }
                }

                while(ptr2->getNext()) {
                    if(ptr2->getVal().getEsponente() == gradoMassimo) {
                        foundGrade2 = true;
                        break;
                    }
                }


                if(foundGrade1 && foundGrade2) {
                    Monomio toInsert = ptr1->getVal()-ptr2->getVal();
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

            os << endl;

            return os;
        }
};