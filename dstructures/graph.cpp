#include <iostream>

using namespace std;


class Graph {
private:
		int numberofnodes;
		int** matrix;
		
public:

		Graph(int numberofnodes) {

			this->numberofnodes = numberofnodes;
			matrix = new int* [numberofnodes];

			for (int i = 0; i < numberofnodes; i++) {
				matrix[i] = new int[numberofnodes];
			}
			
			int k = 1;

			for (int i = 0; i < numberofnodes; i++) {
				
				for (int j = 0; j < numberofnodes; j++) {

					matrix[i][j] = k;
					k++;

				}

			}

		}


		void kenarekle(int kaynak, int hedef) {

			matrix[kaynak][hedef] += 1;

			if (kaynak != hedef) {
				matrix[hedef][kaynak] += 1;
			}

		}


		int kenarsayisi(int kaynak, int hedef) {


			return matrix[kaynak][hedef];

		}

		int toplamdugumsayisi() const {

			return numberofnodes;

		}

		void print() {

			for (int i = 0; i < numberofnodes; i++) {

				for (int j = 0; j < numberofnodes; j++) {

					cout << matrix[i][j]<< "\t";

				}

				cout << endl;

			}


		}

};



int main()
{
   
	Graph* matrix = new Graph(4);
	matrix->print();
	cout << endl << endl;
	//matrix->kenarekle(0, 0);
	//matrix->kenarekle(3, 0); 
	//matrix->kenarekle(3, 1);
	//matrix->kenarekle(2, 2);
	//matrix->kenarekle(2, 1);
	//matrix->kenarekle(1, 0);

	matrix->print();
	
	return 0;

}





