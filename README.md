# Algoritme Dijkstra
adalah algoritma populer dalam pemecahan persoalan yang terkait dengan masalah optimasi dan bersifat sederhana. Algoritma ini menyelesaikan masalah mencari sebuah lintasan terpendek dari vertex a ke vertex z dalam graph berbobot, bobot tersebut adalah bilangan positif jadi tidak dapat dilalui oleh node negatif, namun jika terjadi demikian, maka penyelesaian yang diberikan adalah infiniti atau jumlah tak terbatas.  Diskripsi matematis untuk grafik dapat diwakili G = {V. E}, yang berarti sebuah grafik (G) didefenisikan oleh satu set simpul (Vertex = V) dan koleksi Edge (E).

## Langkah-langkah Algoritme Dijkstra
- Tentukan titik mana yang akan menjadi node awal, lalu beri bobot jarak pada node pertama ke node terdekat satu per satu, Dijkstra akan melakukan pengembangan pencarian dari satu titik ke titik lain dan ke titik selanjutnya tahap demi tahap.

- Beri nilai bobot (jarak) untuk setiap titik ke titik lainnya, lalu set nilai 0 pada node awal dan nilai tak hingga terhadap node lain (belum terisi) 2.

- Set semua node yang belum dilalui  dan set node awal sebagai “Node keberangkatan”

- Dari node keberangkatan, pertimbangkan node tetangga yang belum dilalui dan hitung jaraknya dari titik keberangkatan. Jika jarak ini lebih kecil dari jarak sebelumnya (yang telah terekam sebelumnya) hapus data lama, simpan ulang data jarak dengan jarak yang baru

- Saat kita selesai mempertimbangkan setiap jarak terhadap node tetangga, tandai node yang telah dilalui sebagai “Node dilewati”. Node yang dilewati tidak akan pernah di cek kembali, jarak yang disimpan adalah jarak terakhir dan yang paling minimal bobotnya.

- Set “Node belum dilewati” dengan jarak terkecil (dari node keberangkatan) sebagai “Node Keberangkatan” selanjutnya dan ulangi langkah 4.

## Contoh menghitung jarak terdekat dari V1 ke V7 
![gambar contoh dijkstra](https://user-images.githubusercontent.com/81666422/116695200-74af0280-a9ea-11eb-971e-6fa6434bdebc.png)

Hasil setiap langlah seperti tabel dibawah ini :
![langkah](https://user-images.githubusercontent.com/81666422/116695849-58f82c00-a9eb-11eb-95a7-42e1074d07fe.png)

Jika ditinjau dari tabel diatas dapat disimpulkan bahwa jarak terdekat dari V1 ke V7 adalah 16 dengan jalur V1->V2->V3->V5->V6->V7

## Contoh pemrograman
- untuk source code terdapat di bagian code

### Input :
```
Matriks [0][0] : 0
Matriks [0][1] : 4
Matriks [0][2] : 4
Matriks [0][3] : 3
Matriks [0][4] : 0
Matriks [0][5] : 0
Matriks [0][6] : 0
Matriks [0][7] : 0
Matriks [0][8] : 0
Matriks [0][9] : 0
Matriks [1][0] : 4
Matriks [1][1] : 0
Matriks [1][2] : 1
Matriks [1][3] : 0
Matriks [1][4] : 0
Matriks [1][5] : 2
Matriks [1][6] : 5
Matriks [1][7] : 0
Matriks [1][8] : 0
Matriks [1][9] : 0
Matriks [2][0] : 4
Matriks [2][1] : 1
Matriks [2][2] : 0
Matriks [2][3] : 1
Matriks [2][4] : 2
Matriks [2][5] : 0
Matriks [2][6] : 0
Matriks [2][7] : 0
Matriks [2][8] : 0
Matriks [2][9] : 0
Matriks [3][0] : 3
Matriks [3][1] : 0
Matriks [3][2] : 1
Matriks [3][3] : 0
Matriks [3][4] : 1
Matriks [3][5] : 0
Matriks [3][6] : 0
Matriks [3][7] : 0
Matriks [3][8] : 0
Matriks [3][9] : 0
Matriks [4][0] : 0
Matriks [4][1] : 0
Matriks [4][2] : 2
Matriks [4][3] : 1
Matriks [4][4] : 0
Matriks [4][5] : 1
Matriks [4][6] : 0
Matriks [4][7] : 0
Matriks [4][8] : 5
Matriks [4][9] : 0
Matriks [5][0] : 0
Matriks [5][1] : 0
Matriks [5][2] : 2
Matriks [5][3] : 0
Matriks [5][4] : 0
Matriks [5][5] : 0
Matriks [5][6] : 2
Matriks [5][7] : 4
Matriks [5][8] : 0
Matriks [5][9] : 0
Matriks [6][0] : 0
Matriks [6][1] : 2
Matriks [6][2] : 0
Matriks [6][3] : 0
Matriks [6][4] : 0
Matriks [6][5] : 2
Matriks [6][6] : 0
Matriks [6][7] : 1
Matriks [6][8] : 0
Matriks [6][9] : 4
Matriks [7][0] : 0
Matriks [7][1] : 0
Matriks [7][2] : 0
Matriks [7][3] : 0
Matriks [7][4] : 0
Matriks [7][5] : 4
Matriks [7][6] : 1
Matriks [7][7] : 0
Matriks [7][8] : 2
Matriks [7][9] : 1
Matriks [8][0] : 0
Matriks [8][1] : 0
Matriks [8][2] : 0
Matriks [8][3] : 5
Matriks [8][4] : 5
Matriks [8][5] : 0
Matriks [8][6] : 0
Matriks [8][7] : 2
Matriks [8][8] : 2
Matriks [8][9] : 1
Matriks [9][0] : 0
Matriks [9][1] : 0
Matriks [9][2] : 0
Matriks [9][3] : 0
Matriks [9][4] : 0
Matriks [9][5] : 0
Matriks [9][6] : 4
Matriks [9][7] : 1
Matriks [9][8] : 2
Matriks [9][9] : 0
Masukan Vertex Asal : 0
```
### Output :
```
Hasil jarak untuk vertex ke-1 adalah
4<-10
Hasil jarak untuk vertex ke-2 adalah
4<-20
Hasil jarak untuk vertex ke-3 adalah
3<-30
Hasil jarak untuk vertex ke-4 adalah
4<-43<-0
Hasil jarak untuk vertex ke-5 adalah
5<-54<-3<-0
Hasil jarak untuk vertex ke-6 adalah
7<-65<-4<-3<-0
Hasil jarak untuk vertex ke-7 adalah
8<-76<-5<-4<-3<-0
Hasil jarak untuk vertex ke-8 adalah
9<-84<-3<-0
Hasil jarak untuk vertex ke-9 adalah
9<-97<-6<-5<-4<-3<-0
Total Jaraknya adalah 9
```
### Tabel :

![tabel](https://user-images.githubusercontent.com/81666422/116698155-416e7280-a9ee-11eb-9598-09fda55bb9ee.JPG)

### Tree :

![tree](https://user-images.githubusercontent.com/81666422/116698259-58ad6000-a9ee-11eb-8731-e5e032154c27.JPG)

Dapat disimpulkan bahwa program algoritma djikstra sangat membantu didalam menemukan data berupa jarak yang terdekat sehingga dapat menambah efisiensi waktu dalam pencarian tempat yang terdekat yang akan dituju. Program algoritma djikstra selalu melakukan penginputan yang berulang (prinsipnya misalkan 1,2 ≠ 2,1). Dengan adanya prinsip seperti ini, tentu sangat mempengaruhi dalam waktu untuk pencarian data berupa jarak yang terdekat. 
