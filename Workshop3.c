#include<stdio.h>
#include<math.h>

double add(double a, double b)
{
	return a+b;
}

double sub(double a, double b)
{
	return a-b;
}

double mul(double a, double b)
{
	return a*b;
}

double div(double a, double b)
{
	return a/b;
}


double perimeterOfRectangle(double length, double width)
{
	return (length+width)*2;
}

double areaOfRectangle(double length, double width)
{
	return length*width;
}

double perimeterOfParallelogram(double base, double sideLength)
{
	return (base+sideLength)*2;
}

double areaOfParallelogram(double base, double height)
{
	return base*height;
}

double perimeterOfTriangle(double a, double b, double c)
{
	return a+b+c;
}

double areaOfTriangle(double a, double b, double c)
{
	double p=perimeterOfTriangle(a,b,c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

double perimeterOfCircle(double r)
{
	return 2*3.14*r;
}

double areaOfCircle(double r)
{
	return 3.14*r*r;
}

void decToBin(int number)
{
	int i=0;
	int binNum[32];
	while(number>0)
	{
		binNum[i]=number%2;
		number/=2;
		i++;
	}
	printf("Binary of given number = ");
	int j = i - 1;
	for(; j >= 0; j--)
	{
        printf("%d", binNum[j]);
	}
	printf("\n");
}

void decToOct(int number)
{
	printf("Octal of given number = %o\n", number);
}

void decToHex(int number)
{
	printf("Hexadecimal of given number = %X\n", number);
}

int main (){
	printf("\n******************************************************\n");
	printf("*     Date           :         20/9/2022             *\n");
	printf("*     Student Name   :         Vu Duc Hoang          *\n");
	printf("*     Student ID     :         HE163885              *\n");
	printf("******************************************************\n");
	int choice;
	do{
        printf ("\n******************************************************\n");
        printf ("*   Plese select the number for appropritate tasks   *\n");
        printf ("*                [1]. NUMERALS                       *\n");
        printf ("*                [2]. GEOMETRY                       *\n");
        printf ("*                [3]. INFORMATION                    *\n");
		printf ("*                [4]. EXIT                           *\n");
        printf ("******************************************************\n");
		printf("Enter your choice: ");
    	scanf ("%d", &choice);
		switch(choice)
		{
			int choice1;
			int choice2;
			int choice3;
			case 1:
				//int choice1;
				do
				{
					printf ("\n******************************************************\n");
					printf ("*                      NUMERALS                      *\n");
					printf ("*                [1]. Addition                       *\n");
					printf ("*                [2]. Subtraction                    *\n");
					printf ("*                [3]. Multiplication                 *\n");
					printf ("*                [4]. Division                       *\n");
					printf ("*                [5]. Back                           *\n");
					printf ("******************************************************\n");
					printf("Enter your choice: ");
					//int choice1;
					scanf("%d", &choice1);
					switch(choice1)
					{
						double firstNum, secondNum;
						case 1:
							printf("Enter first number = ");
							scanf("%lf", &firstNum);
							printf("Enter second number = ");
							scanf("%lf", &secondNum);
							if(firstNum-(long long)firstNum==0 && secondNum-(long long)secondNum==0)
							{
								printf("%lld + %lld = %lld\n", (long long)firstNum, (long long)secondNum, (long long)add(firstNum, secondNum));
							}
							else
							{
								printf("%.2lf + %.2lf = %.2lf\n", firstNum, secondNum, add(firstNum, secondNum));
							}
							break;
						case 2:
							printf("Enter first number = ");
							scanf("%lf", &firstNum);
							printf("Enter second number = ");
							scanf("%lf", &secondNum);
							if(firstNum-(long long)firstNum==0 && secondNum-(long long)secondNum==0)
							{
								printf("%lld - %lld = %lld\n", (long long)firstNum, (long long)secondNum, (long long)sub(firstNum, secondNum));
							}
							else
							{
								printf("%.2lf - %.2lf = %.2lf\n", firstNum, secondNum, sub(firstNum, secondNum));
							}
							break;
						case 3:
							printf("Enter first number = ");
							scanf("%lf", &firstNum);
							printf("Enter second number = ");
							scanf("%lf", &secondNum);
							if(firstNum-(long long)firstNum==0 && secondNum-(long long)secondNum==0)
							{
								printf("%lld * %lld = %lld\n", (long long)firstNum, (long long)secondNum, (long long)mul(firstNum, secondNum));
							}
							else
							{
								printf("%.2lf * %.2lf = %.2lf\n", firstNum, secondNum, mul(firstNum, secondNum));
							}
							break;
						case 4:
							printf("Enter first number = ");
							scanf("%lf", &firstNum);
							printf("Enter second number = ");
							scanf("%lf", &secondNum);
							if(secondNum==0)
							{
								printf("Error!\n");
							}
							else
							{
								if(firstNum-(long long)firstNum==0 && secondNum-(long long)secondNum==0 &&(long long)firstNum%(long long)secondNum==0)
								{
									printf("%lld / %lld = %lld\n", (long long)firstNum, (long long)secondNum, (long long)div(firstNum, secondNum));
								}
								else if(firstNum-(long long)firstNum==0 && secondNum-(long long)secondNum==0 &&(long long)firstNum%(long long)secondNum!=0)
								{
									printf("%lld / %lld = %.2lf\n", (long long)firstNum, (long long)secondNum, div(firstNum, secondNum));
								}
								else
								{
									printf("%.2lf / %.2lf = %.2lf\n", firstNum, secondNum, div(firstNum, secondNum));
								}
							}
							break;
						case 5:
							break;
					}
				} while(choice1!=5);
				break;
			case 2:
				//int choice2;
				do
				{
					printf ("\n******************************************************\n");
					printf ("*                      GEOMETRY                      *\n");
					printf ("*                [1]. Rectangle                      *\n");
					printf ("*                [2]. Parallelogram                  *\n");
					printf ("*                [3]. Triangle                       *\n");
					printf ("*                [4]. Circle                         *\n");
					printf ("*                [5]. Back                           *\n");
					printf ("******************************************************\n");
					printf("Enter your choice: ");
					//int choice2;
					scanf("%d", &choice2);
					switch(choice2)
					{
						double length, width;
						double base, sideLength, height;
						double firstSide, secondSide, thirdSide;
						double radius;
						case 1:
							//double length, width;
							printf("Rectangle\n");
							printf("Enter length = ");
							scanf("%lf", &length);
							printf("Enter width = ");
							scanf("%lf", &width);
							if(length<=0 || width<=0 || width>=length)
							{
								printf("Error!\n");
							}
							else
							{
								if(length-(int)length==0 && width-(int)width==0)
								{
									printf("Perimeter = %.0lf\n", perimeterOfRectangle(length, width));
									printf("Area = %.0lf\n", areaOfRectangle(length, width));
								}
								else
								{
									printf("Perimeter = %.2lf\n", perimeterOfRectangle(length, width));
									printf("Area = %.2lf\n", areaOfRectangle(length, width));
								}
							}
							break;
						case 2:
							//double base, sideLength, height;
							printf("Parallelogram\n");
							printf("Enter base = ");
							scanf("%lf", &base);
							printf("Enter side length = ");
							scanf("%lf", &sideLength);
							printf("Enter height = ");
							scanf("%lf", &height);
							if(base<=0 || sideLength<=0 || height<=0)
							{
								printf("Error!\n");
							}
							else
							{
								if(base-(int)base==0 && sideLength-(int)sideLength==0 && height-(int)height==0)
								{
									printf("Perimeter = %.0lf\n", perimeterOfParallelogram(base, sideLength));
									printf("Area = %.0lf\n", areaOfParallelogram(base, height));
								}
								else
								{
									printf("Perimeter = %.2lf\n", perimeterOfParallelogram(base, sideLength));
									printf("Area = %.2lf\n", areaOfParallelogram(base, height));
								}	
							}
							break;
						case 3:
							//double firstSide, secondSide, thirdSide;
							printf("Triangle\n");
							printf("Enter first side = ");
							scanf("%lf", &firstSide);
							printf("Enter second side = ");
							scanf("%lf", &secondSide);
							printf("Enter third side = ");
							scanf("%lf", &thirdSide);
							if(firstSide<=0 || secondSide <=0 || thirdSide <=0 || firstSide+secondSide<=thirdSide || firstSide+thirdSide<=secondSide || secondSide+thirdSide<=firstSide)
							{
								printf("Error!\n");
							}
							else
							{
								if(firstSide-(int)firstSide==0 && secondSide-(int)secondSide==0 && thirdSide-(int)thirdSide==0)
								{
									printf("Perimeter = %.0lf\n", perimeterOfTriangle(firstSide, secondSide, thirdSide));
									printf("Area = %.0lf\n", areaOfTriangle(firstSide, secondSide, thirdSide));
								}
								else
								{
									printf("Perimeter = %.2lf\n", perimeterOfTriangle(firstSide, secondSide, thirdSide));
									printf("Area = %.2lf\n", areaOfTriangle(firstSide, secondSide, thirdSide));
								}	
							}
							break;
						case 4:
							//double radius;
							printf("Circle\n");
							printf("Enter radius = ");
							scanf("%lf", &radius);
							if(radius<=0)
							{
								printf("Error!\n");
							}
							else
							{						
								printf("Perimeter = %.2lf\n", perimeterOfCircle(radius));
								printf("Area = %.2lf\n", areaOfCircle(radius));
							}
							break;
						case 5:
							break;
					}
				} while(choice2!=5);
				break;
	    	case 3:
	    		//int choice3;
				do
				{
					printf ("\n******************************************************\n");
					printf ("*                      INFORMATION                   *\n");
					printf ("*                [1]. DEC to BIN                     *\n");
					printf ("*                [2]. DEC to OCT                     *\n");
					printf ("*                [3]. DEC to HEX                     *\n");
					printf ("*                [4]. Back                           *\n");
					printf ("******************************************************\n");
					printf("Enter your choice: ");
					//int choice3;
					scanf("%d", &choice3);
					switch(choice3)
					{
						long long number;
						case 1:
							printf("Enter a number to convert = ");
							scanf("%lld", &number);
							decToBin(number);
							break;
						case 2:
							printf("Enter a number to convert = ");
							scanf("%lld", &number);
							decToOct(number);
							break;
						case 3:
							printf("Enter a number to convert = ");
							scanf("%lld", &number);
							decToHex(number);
							break;
						case 4:
							break;
					}
				} while(choice3!=4);
				break;
			case 4:
				break; 
    	}
    }while(choice!=4);
    return 0;
}



