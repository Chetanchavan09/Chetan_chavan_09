 #include<stdio.h>
 
 void main()
 {
 	int num;
 	int square,cube;
 	
 	printf("Enter the value : ");
 	scanf("%d",&num);
 	
 	square = num * num;
 	cube = num * num * num;
 	
 	printf("square of %d = %d \n",num,square);
 	printf("cube of %d = %d \n",num,cube);
 	
 	return 0;
 }