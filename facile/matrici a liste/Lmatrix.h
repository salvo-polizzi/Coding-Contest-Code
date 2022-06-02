#include "list.h"

class LMatrix{
    private:
        List<int>* Matrix;
        int N;
        int M;

    public:
        LMatrix(int N, int M) {
            this->N = N;
            this->M = M;
            
            Matrix = new List<int> [N];
            for(int i=0; i<N; i++) {
                List<int> toInsert(M);
                *(Matrix+i) = toInsert; 
            }
        }

        void setLMatrix(int i, List<int> toInsert) {
            *(Matrix+i) = toInsert;
        }

        List<int>* getMatrix() {return Matrix;}

        LMatrix multiplication(LMatrix Smatrix, int P) {
            LMatrix toReturn(N, P);
            
            for(int i=0; i<N; i++) {
                List<int> toInsert(P);
                toReturn.Matrix[i] = toInsert;
            }
            
            
            for(int i=0; i<N; i++) {
                List<int> toInsert(P);
                
                for(int j=0; j<P; j++) {
                    int sum = 0;
                    for(int z=0; z<M; z++) {
                        //cout << "Valore della lista Matrice Oggetto: " << (this->Matrix[i]).getValIndex(z) << endl;
                        //cout << "Valore della lista Matrice Passata come parametro: " << (Smatrix.Matrix[z]).getValIndex(j) << endl;

                        sum += (this->Matrix[i]).getValIndex(z) * (Smatrix.Matrix[z]).getValIndex(j);
                    }
                    toInsert.insertTail(sum);
                    //cout << "sum=" << sum << endl;
                }
                toReturn.Matrix[i] = toInsert;
            }

            return toReturn;
        }


        List<int> getListIndex(int i) {return Matrix[i];}
        


        friend ostream& operator<<(ostream& os, LMatrix& matrice) {
            for(int i=0; i<matrice.N; i++) {
                os << matrice.Matrix[i] << endl;
            }
            return os;
        }

};


