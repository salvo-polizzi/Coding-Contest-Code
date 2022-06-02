#include "Lmatrix.h"
#include <fstream>

int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int N, M, P;
        input >> N >> M >> P;

        //cout << "N=" << N << ", M=" << M << ", P=" << P << endl; 


        LMatrix matrice1(N, M);
        LMatrix matrice2(M, P);
        
        for(int j=0; j<N; j++) {
            List<int> toInsert(M);
            for(int z=0; z<M; z++) {
                int num;
                input >> num;
                toInsert.insertTail(num);
            }
            //cout << "toInsert: " << toInsert << endl;
            matrice1.setLMatrix(j, toInsert);
        }

        


        
        for(int j=0; j<M; j++) {
            List<int> toInsert1(P);
            for(int z=0; z<P; z++) {
                int num;
                input >> num;
                toInsert1.insertTail(num);
            }
            matrice2.setLMatrix(j, toInsert1);
        }

        
        

        LMatrix toReturn = matrice1.multiplication(matrice2, P);

        //cout << matrice1 << endl;
        //cout << matrice2 << endl;
        //cout << "------Multiplication-----" << endl << toReturn << endl;

        List<int>* toRetMatrix = toReturn.getMatrix();
        for(int i=0; i<N; i++) {
            toRetMatrix[i].toOutput(output);
        }
        output << endl;
    }
}