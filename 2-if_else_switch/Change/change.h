#include <iostream>
#include <random>

using namespace std;



void method_gaussa(int** matrix, int* vector_b, int size){
    int* old_str = new int[size];
    int ved_elem = 0;
    for (int i = 0; i<size; i++){
        for (int j = 0; i<size; i++){
            for(int k = 0; j<size; j++){
                if (matrix[j][k]!=0)(
                    ved_elem = matrix[j][k];)
            }
        }
    }
}

int main(){
    int size;
    mt19937 gen;
    gen.seed(std::random_device()());
    uniform_int_distribution<mt19937::result_type> dist;
    cout << "Введите размер массива" << endl; cin >> size;
    int* vector_b = new int[size]; 
    int** matrix = new int* [size];
    for (int i = 0; i<size; i++){
        for (int j = 0; j<5; j++){
            matrix[i] = new int [5];
        }
    }
    for (int i = 0; i<size; i++){
        for (int j = 0; j<5; j++){
            matrix[i][j] = dist(gen)%10;
        }
    }


}
