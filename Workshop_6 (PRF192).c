#include<stdio.h>
#include<math.h>
#include <stdbool.h>

     //Nhap du lieu mang vao
     void NhapMang(int a[], int n)
     {
          printf("Moi ban nhap phan tu cua mang: ");
          for(int i = 0; i < n; i++)
          {
               scanf("%d",&a[i]);
          }
     }
     
     // Đổi chỗ
     void swap(int *a, int *b)
     {
          
          int temp = *a;
          *a = *b;
          *b = temp;
     }
 
     // Thuật toán sắp xếp Noi Bot
     void BubbleSort(int arr[],int n)
     {
          
          int kt = 0;
          for(int i = 0; i < n - 1; ++i)
          {
    	          kt = 0;
    	          for(int j = 0; j < n - i - 1; ++j)
               {
    		          if(arr[j] > arr[j+1])
                    {
    			          
                         swap(&arr[j], &arr[j+1]);
    			          kt = 1;
			     
                    }
		     }
		     if(kt == 0) 
               {
                    break;
               }
		     // in ra tung buoc
               printf("Buoc %d: ",i+1);
		     for(int i = 0; i < n; ++i)
               { 
                    printf("%d ",arr[i]);
               }

		     printf("\n");
	     }
     }
     
     // Thuật toán sắp xếp chọn trực tiếp
     void SelectionSort(int arr[], int n)
     {
          
          int min;
          for(int i = 0; i < n-1; ++i)
          {
    	          for(int j = i + 1; j < n; ++j)
               {
    		          if(arr[i] > arr[j])
                    {	
                         swap(&arr[i],&arr[j]);
                    }
               }
          // in ra tung buoc
    	     printf("Buoc %d: ",i+1);
    	     for(int i = 0; i < n; ++i)
          {
               printf("%d ",arr[i]);
          }
    	     
          printf("\n");
    	     }
     }

     int first_pos(int a[], int n, int x)
     {
          int l = 0, r = n - 1, pos = -1;
          while(l <= r)
          {
               int m = (l + r) / 2;
               if(a[m] == x)
               {
                    pos = m;
                    r = m - 1;
               }
               else if (a[m] < x)   
               {
                    l = m + 1;
               }
               else                
               {
                    r = m - 1;
               }
          }
          return pos;
     }

     int last_pos(int a[], int n, int x)
     {
          int l = 0, r = n - 1, pos = -1;
          while(l <= r)
          {
               int m = (l + r) / 2;
               if(a[m] == x)
               {
                    pos = m;
                    l = m + 1;
               }
               else if(a[m] < x)   
               {
                    l = m + 1;
               }
               else 
               {
                    r = m - 1;
               }
          }
          return pos;
     }
     
     // Thuat toan tim kiem nhi phan
     void BinarySearch(int a[], int n)
     {
	     int x;
          printf("Moi ban nhap phan tu can tim cua mang: ");
          scanf("%d", &x);
	     for(int i = 0; i < n - 1; i++)
          {
		     for(int j = i + 1; j < n; j++)
               {
			     if(a[i] > a[j])
                    {
				     int tmp = a[i];
				     a[i] = a[j];
				     a[j] = tmp;
			     }
		     }
	     }
	     for(int i = first_pos(a, n, x); i <= last_pos(a, n, x); i++)
          {
		     printf("%d ", i);
	     }
     }


     void nhap(int a[50][50], int *m, int *n) 
     {    
          // Nhap thong tin cho ma tran
	     printf("\nNhap so hang, so cot cua ma tran : ");
	     scanf("%d%d", m, n); // so hang, so cot cua ma tran. dam bao so duong
	     int i, j;
	     for(i = 0; i < *m; i++)
          {
		     for(j = 0; j < *n; j++)
               {
			     printf("\nx[%d][%d] = ", i, j);
			     scanf("%d", &a[i][j]);
		     }
		     printf("\n");
	     }    
     }

     void xuat(int a[50][50], int m, int n) 
     { 
          // xuat thong tin ma tran tuong ung trong tham so truyen vao
	     int i, j;
	     for(i = 0; i < m; i++)
          {
		     for(j = 0; j < n; j++)
               {
			printf("%5d", a[i][j]);
		     }
		printf("\n");
	     }
     }

     // tính tổng 2 mảng
     void Tong(int a[50][50], int b[50][50], int c[50][50], int m, int n)
     {
	     for(int i = 0; i < m; i++) 
          {
		     for(int j = 0; j < n; j++) 
               {
			     c[i][j] = a[i][j] + b[i][j];
		     }
	     }
     }
     
     // tính tích 2 mảng
     void Tich(int a[50][50], int b[50][50], int c[50][50], int m, int n, int k) 
     {
	     int i, j, l;
	     for(i = 0; i < m; i++) 
          {
		     for(j = 0; j < k; j++) 
               {
			     for(l = 0; l < n; l++) 
                    {
				     c[i][j] += a[i][l] * b[l][j];
			     }
		     }
	     }
     }

     // hàm chính
     int main(int argc, char const *argv[])
     {
          int choice;
          do
          {
               printf ("\n******************************************************************************************\n");
               printf ("*               Vui long chon so cho cac lua chon thich hop                               *\n");
               printf ("*   [1]. Question 1 : Nhap mang voi n phan tu ban phim va thuc hien thuat toan            *\n");
               printf ("*   [2]. Question 2 : Nhap mang 2 chieu va thuc hien phep tinh                            *\n");
               printf ("*   [3]. Thoat chuong trinh                                                               *\n");
               printf ("*******************************************************************************************\n");
		     printf("Nhap lua chon cua ban: ");
               scanf("%d",&choice);

               switch (choice)
               {
                    int choice1;
                    int choice2;
                    
                    case 1:
                         
                         int arr[105],n;
                         printf("Moi ban nhap so phan tu cua mang: ");
                         scanf("%d",&n);
                         NhapMang(arr,n);
                         printf("\nMang vua nhap: ");
                         for(int i = 0; i < n; i++)
                         {
                              printf("%d ",arr[i]);
                         }
                         int brr[105];
                         // sao chép mảng để khi thực hiện 2 thuật toán sắp xếp cùng một lúc không bị lỗi
                         /*
                          nếu không sắp xếp thì thuật toán sắp xếp trước sẽ sắp xếp mảng xong, và thuật toán 
                          sau sẽ không có đất diễn.
                         */
                         for(int i = 0; i < n; i++)
                         {
                              brr[i] = arr[i];
                         }

                         do
                         {
                              printf ("\n******************************************************************************************\n");
                              printf ("*               Vui long chon so cho cac lua chon thich hop                               *\n");
                              printf ("*   [1]. Question 1 : Sap xep mang su dung thuat toan Selection Sort va Bubble Sort       *\n");
                              printf ("*   [2]. Question 2 : Tim vi tri cua gia tri tim kiem giong nhau bang Binary Search       *\n");
                              printf ("*   [3]. Quay tro lai                                                                     *\n");
                              printf ("*******************************************************************************************\n");
                              printf("Nhap lua chon cua ban: ");
                              scanf("%d",&choice1);
                              
                              switch (choice1)
                              {

                                   case 1:

                                        printf("Sap xep mang bang thuat toan Selection Sort: \n");
                                        SelectionSort(arr,n);

                                        printf("\n");

                                        printf("Sap xep mang bang thuat toan Bubble Sort: \n");
                                        BubbleSort(brr,n);
                                        
                                        break;

                                   case 2:

                                        printf("Tim vi tri cua gia tri tim kiem giong nhau bang Binary Search: \n");
                                        BinarySearch(arr,n);
                                        break;
                                   case 3: 

                                        break;
                              }
                    
                         
                         
                         
                         } while (choice1!=3);
                         break;

                    case 2:

                         int a[50][50], b[50][50], c[50][50] = {0};
	                    int ma, na, mb, nb;
                         printf("Nhap Ma Tran A: ");
	                    nhap(a, &ma, &na);
	                    printf("\nNhap Ma Tran B: ");
	                    nhap(b, &mb, &nb);
                         printf("Ta co 2 ma tran: ");
                         printf("\nMa tran A: \n");
		               xuat(a, ma, na);
                         printf("\nMa tran B: \n");
		               xuat(b, mb, nb);
                         do
                         {
                              printf ("\n******************************************************************************************\n");
                              printf ("*               Vui long chon so cho cac lua chon thich hop                               *\n");
                              printf ("*   [1]. Question 1 : Tinh Tong 2 ma tran                                                 *\n");
                              printf ("*   [2]. Question 2 : Tinh Tich 2 ma tran                                                 *\n");
                              printf ("*   [3]. Quay tro lai                                                                     *\n");
                              printf ("*******************************************************************************************\n");
                              printf("Nhap lua chon cua ban: ");
                              scanf("%d",&choice2);

                              switch(choice2)
                              {
                                   case 1:
                                        xuat(a, ma, na);
                                        printf("\n+\n");
                                        xuat(b, mb, nb);
                                        printf("\n=\n");
                                        Tong(a,b,c,ma,nb);
                                        xuat(c, ma, nb);
                                        break;

                                   case 2:
                                        xuat(a, ma, na);
                                        printf("\n*\n");
                                        xuat(b, mb, nb);
                                        printf("\n=\n");
                                        Tich(a, b, c, ma, na, nb);
                                        xuat(c, ma, nb);
                                        break;

                                   case 3:
                                        break;
                              }
                         
                         } while (choice2 != 3);
                         break;
               }

          } while (choice != 3);
          return 0;
     }
     