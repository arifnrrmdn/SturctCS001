#include<stdio.h>
#include<conio.h>
//deklarasi struct
struct data_barang
{
 char nama[20];
 int jumlah;
 float harga;
}

main()
{
 //definisi struct
 struct data_barang brg;
 clrscr();

 printf("Nama barang		= ");
 gets(brg.nama);
 printf("Harga satuan		= ");
 scanf("%f",&brg.harga);
 printf("Jumlah			= ");
 scanf("%d",&brg.jumlah);

 printf("Nama barang tersebut adalah %s\n",brg.nama);
 printf("Harga satuannya Rp. %.2f dengan jumlah %d buah",brg.harga,brg.jumlah);

 getch();
 return 0;
}