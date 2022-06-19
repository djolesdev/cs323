#include <stdio.h>

const int n = 2;
const int m = 3;

int main() {

    FILE *inFile = fopen("datoteka.txt", "w");

    int matrix[n][m] = {{1,2,3,}, {4,5,6,}};

    fprintf(inFile,"%d %d \n", n, m);

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            fprintf(inFile,"%d ",matrix[i][j]);
        }
        fprintf(inFile, "\n");
    }

    printf("Uspesno dodavanje u datoteku. Datoteka se nalazi u cmake-build-debug folderu!");

    return 0;
}
