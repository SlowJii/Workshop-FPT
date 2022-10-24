#include<stdio.h>
#include<math.h>


     void SoDaoNguoc() 
     // so dao nguoc
     {
          int n;
          printf("Moi ban nhap so : ");
          scanf("%d",&n);
          int ans = 0,tmp;
          while(n > 0)
          {
               tmp = n % 10;
               ans = ans*10+tmp;
               n/=10;
          }
          printf("So dao nguoc la : %d", ans);
     }

     void ChiaHet() 
     //chia het cho 9
     {
          int sohang = 0;
          printf("Cac so chia het cho 9 la : ");
          for(int i = 9; i <= 1000; i+=9)
          {
               printf("%d ",i);
               sohang++;
          }
          printf("\nTong cua chung la : ");
          printf("%d", ((999+9)*sohang)/2);
     }

     int tong(int n)
     {
          int sum = 0;
          int tmp;
          while(n)
          {
               tmp = n % 10;
               sum+= tmp;
               n/=10;
          }
          if (sum <= 9)       
          {
               return sum;
          }
          else
          {
               return tong(sum);
          }
     }
     
     void Sum() 
     // 
     {
          int n;
          printf("Moi ban nhap so: ");
          scanf("%d",&n);
          printf("Ket qua la: %d",tong(n));
     }

     void TamGiacVuong()
     // tam giac vuong ki tu
     {
          printf("Nhap vao so dong: ");
          int n;
          scanf("%d",&n);
          printf("\n");
          int count = 0;
          for(int i = 1; i <= n; i++)
          {
               for(int j = 1; j <= i; j++)
               {
                    if (count % 2 == 0 )
                    {
                         printf("%c ",65+count);
                    }
                    else
                    {
                         printf("%c ",65+count);
                    }
                    count++;
               }
               printf("\n");
          }
     }

     void TamGiacKiTu()
     // tam giac deu ki tu
     {
          int n;
          printf("Nhap vao so dong : ");
     	scanf("%d", &n);
	     int ans = 0;
	     int x = n;
	     for(int i = 1; i <= n; i++)
          {
		     int cnt = 1;
               int j = 1;
		     while(j <= n * 2 - 1)
               {
			     if(j == x)
                    {
				     while(cnt <= i)
                         {
					     printf("%c", 65 + ans++);
					     if(cnt < i && j <= n * 2 - 1)
                              {
						     printf(" ");						
						     j++;
					     }    
					     ++cnt;
				     }
			     }
			     if(j <= 2 * n - 1)
                    {
				     printf(" ");
				     j++;
			     }
		     }
		     x--;
		     printf("\n");
	     }	
     }

     void TamGiacPascal()
     // tam giac pascal deu
     {
          int n;
          int row, space,ncr,r;
          printf("Nhap vao so dong: ");
          scanf("%d",&row);
          for(n = 0; n < row; n ++ )
          {
               for(space = 1; space < row - n; space ++)
               {
                    printf(" ");
               }
               for( r = 0; r <= n; r++)
               {
                    if (n == 0 || r == 0)
                    {
                         ncr = 1;
                         printf("%d ",ncr);
                    }
                    else
                    {
                         ncr = ncr*(n-r+1)/r;
                         printf("%d ",ncr);
                    }
               }
               printf("\n");
          }
     }

     int main() 
     {
          int choice;
          do
          {
               printf ("\n*******************************************************\n");
               printf ("*   Plese select the number for appropritate tasks    *\n");
               printf ("*                [1]. Question 1                      *\n");
               printf ("*                [2]. Question 2                      *\n");
               printf ("*                [3]. Exit                            *\n");
               printf ("*******************************************************\n");
		     printf("Enter your choice: ");
               scanf("%d",&choice);
          
               switch (choice)
               {
                    int nextchoice1;
                    int nextchoice2;
               
                    case 1:
               
                         do
                         {
                              printf ("\n*************************************************************************\n");
                              printf ("*   Plese select the number for appropritate tasks                      *\n");
                              printf ("*     [1]. Write a function that reverses the digits of a given integer *\n");
                              printf ("*     [2]. Write a function that multiple times adds all the digits     *\n");
                              printf ("*     of a given non-negative number until the result is only one digit.*\n");
                              printf ("*     [3]. Write a function that finds the number and sum of all        *\n");
                              printf ("*     integers between 9 and 1000 that are divisible by 9.              *\n");
                              printf ("*     [4]. Back                                                         *\n");
                              printf ("*************************************************************************\n");
                              printf("Enter your choice: ");
                              scanf("%d",&nextchoice1);

                              switch (nextchoice1)
                              {
                              
                                   case 1:
                                        SoDaoNguoc();
                                        break;
                              
                                   case 2:
                                        Sum();
                                        break;
                              
                                   case 3:
                                        ChiaHet();
                                        break;
                              
                                   case 4:
                                        break;
                              }             
               
                         } 
               
                         while (nextchoice1!=4);
                         break;
               
               
                    case 2:

                         do
                         {
                              printf ("\n*************************************************************************\n");
                              printf ("*   Plese select the number for appropritate tasks                      *\n");
                              printf ("*     [1]. Display the model as a right triangle using the character    *\n");
                              printf ("*     [2]. Show pattern like equilateral triangle using character       *\n");
                              printf ("*     [3]. Display Pascal's Triagle                                     *\n");
                              printf ("*     [4]. Back                                                         *\n");
                              printf ("*************************************************************************\n");
                              //next_choice_2
                              printf("Enter your choice: ");
                              scanf("%d",&nextchoice2);

                              switch (nextchoice2)
                              {
                                   case 1:
                                        TamGiacVuong();
                                        break;
                              
                                   case 2:
                                        TamGiacKiTu();
                                        break;
                              
                                   case 3:
                                        TamGiacPascal();
                                        break;;
                              
                                   case 4:
                                        break;
                         
                              }

                         } 
                    
                         while (nextchoice2!= 4);
                         break;

                    case 3: 

                         break;
          
               }

          } 
          
          while (choice!=3);
          return 0;
           
     }