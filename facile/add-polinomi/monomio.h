#include <iostream>

using namespace std;


class Monomio{
    private:
        int coefficiente, esponente;
    public:
        Monomio(int coeff, int esp): coefficiente(coeff), esponente(esp) {}

        void setCoefficiente(int coeff) {coefficiente = coeff;}
        void setEsponente(int esp) {esponente = esp;}

        int getCoefficiente() {return coefficiente;}
        int getEsponente() {return esponente;}



        Monomio operator+(Monomio m1) {
            Monomio m2(this->coefficiente + m1.coefficiente, this->esponente);
            return m2;
        }

        Monomio operator-(Monomio m1) {
            Monomio m2(this->coefficiente - m1.coefficiente, this->esponente);
            return m2;        
        }

        Monomio operator-() {
            Monomio m(- this->coefficiente, this->esponente);
            return m;
        }

        bool operator<(Monomio m1) {
            return this->esponente < m1.esponente;
        }

        bool operator>(Monomio m1) {
            return this->esponente > m1.esponente;
        }

        bool operator>=(Monomio m1) {
            return this->esponente >= m1.esponente;
        }


        bool operator==(Monomio m1) {
            return this->esponente == m1.esponente;
        }

        bool operator!=(Monomio m1) {
            return this->esponente != m1.esponente;
        }


        friend ostream& operator<<(ostream& os, Monomio m) {
            string coeff = to_string(m.coefficiente);
            string esp = to_string(m.esponente);

            if(m.coefficiente == 0)
                return os;

            if(m.esponente == 0) {
                os << coeff;
                return os;
            }

            if(m.esponente == 1) {
                if(m.coefficiente != 1 && m.coefficiente != -1)
                    os << coeff << "x";
                else if(m.coefficiente == 1)
                    os << "x";
                else 
                    os << "-x";
                return os;
            }
            
            if(m.coefficiente != 1 && m.coefficiente != -1)
                os << coeff << "x^" << esp;
            else if(m.coefficiente == 1) 
                os << "x^" << esp;
            else
                os << "-x^" << esp;

            return os;
        }
};