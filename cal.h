# include<stdio.h>

int addition(){
	float x,y,z;
		printf("Enter the first number : ");
		scanf("%f",&x);
		printf("Enter the first number : ");
		scanf("%f",&y);
  		z=x+y;
		printf("%f",z);
	return 0;
}

int substraction(){
	float x,y,z;
		printf("Enter the first number : ");
		scanf("%f",&x);
		printf("Enter the first number : ");
		scanf("%f",&y);
  		z=x-y;
		printf("%f",z);
	return 0;
}

int multiplication(){
	float x,y,z;
		printf("Enter the first number : ");
		scanf("%f",&x);
		printf("Enter the first number : ");
		scanf("%f",&y);
  		z=x*y;
		printf("%f",z);
	return 0;
}

int division(){
	float x,y,z;
		printf("Enter the first number : ");
		scanf("%f",&x);
		printf("Enter the first number : ");
		scanf("%f",&y);
  		z=x/y;
		printf("%f",z);
	return 0;
}

int power(){
	int x,y,z,i;
		printf("Enter the base value : ");
		scanf("%d",&x);
		printf("Enter the power : ");
		scanf("%d",&y);
  		z=x*x;
  		for(i=2;i<y;i++){
		  z=z*x;
  		}
		printf("%d",z);
	return 0;
}

int mode(){
	int x,y,z;
		printf("Enter the first number : ");
		scanf("%d",&x);
		printf("Enter the first number : ");
		scanf("%d",&y);
  		z=x%y;
		printf("%d",z);
	return 0;
}
