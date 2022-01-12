#include<stdio.h>
#include<string.h>
void encrypt(char password[],int key)
{
	int i;
	for(i=0;i<strlen(password);i++)
	password[i]=password[i]-key;
}

int main()
{
	char password[20];
	printf("Enter your password: ");
	scanf("%s",&password);
	encrypt(password,0XAED);
	printf("\n%s",password);
	return 0;
}
