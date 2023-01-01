/*
teks program bahasa c terbagi dua bagian
1. Teks yang diproses oleh Compiler
2. Teks yang tidak diproses oleh compiler, yaitu yang ditulis di antara seperti materi yang terdapat pada komentar ini. Ini merupakan contoh komentar yang memudahkan kita memahami sebuah program  */
// kita dapat menyimpan file bahasa c dengan menggunakan ekstensi (.c)
/*
program utama terdiri dari dua bagian, yaitu=
1. Kamus yang berisi nama-nama yang dideklarasi, selanjutnya dapat diacu untuk mengambil nilainya
2. Program, yaitu satu atau deretan instruksi yang ditulis untuk dikerjakan
*/
/*
// setiap bahasa c, baik dideklarasi maupun instruksi, selalu diakhiri dengan(;)
// atau diakhiri dengan suatu blok yang terdiri dituliskan dianta {dan}
*/

/*program tanpa kembalian nilai
contoh program sederhana adalah Halo Dunia, atau lebih sering kita kenal dengan Hello World!
karena program tidak mengirimkan nilai apapun, hanya menuliskan sebuah string
*/
/*
// badan terdiri dari satu instruksi menulis yaitu printf
// jika menulis, memerlukan library standar untuk baca/tulis sering dirulis dengan #include<stdio.h>
*/
#include <stdio.h>
int main(void)
{
    /* code */
    printf("Hello World!");
}
