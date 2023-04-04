#include <stdio.h>
#include <stdlib.h>      //k�t�phaneleri tan�mlad�k


#define ROWS 3 // Matris sat�r say�s�
#define COLS 3 // Matris s�tun say�s�

void searchInMatrix(int mat[][COLS], int target) {    // matris aray�c� fonksiyonu tan�mlad�k.
    int i = 0, j = COLS-1;
    while (i < ROWS && j >= 0) {             // while i�indeki 2 �artta sa�lan�yorsa if,if else,else e bak�labilir.
        if (mat[i][j] == target) {           // matris hedef matrise e�itse konumu bulunmu� olur ve ekrana yazd�r�l�r.
            printf("Hedef %d, %d konumunda bulundu.", i, j);
            return;
        }
        else if (mat[i][j] > target) {    // e�er matris  de�eri hedef de�erden b�y�kse j de�erini 1 azalt�r�z.
            j--;
        }
        else {                          // �stteki durumlar ge�erli de�ilse i de�eri 1 artt�r�l�r.
            i++;
        }
    }
    printf("Hedef bulunamad�.");           // e�er while �art� sa�lanm�yorsa ekrana hedef bulunamad� yazd�r�ryoruz.
}

int main() {
    int mat[ROWS][COLS] = { {1, 2, 3},          // tablodaki sat�r ve s�tunlar� de�erleriyle tan�mald�k.
                            {4, 5, 6},
                            {7, 8, 9} };
    int target = 5;                            // hedefi 5 olarak belirledik.
    searchInMatrix(mat, target);                 
    return 0;
}
