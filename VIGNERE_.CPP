#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void vigenere(char *text,char *key)
{
unsigned int i,j;

printf("Encrypted text:");
for(i=0, j=0;i<strlen(text);i++,j++)
{
	if (j>=strlen(key))
	{
		j=0;
	}
	if(text[i]>='a'&&text[i]<='z')
	{
	printf("%c",97+(((tolower(text[i])-97)+(tolower(key[j])-97))%26));
	}
	else if (text[i]>='A'&&text[i]<='Z')
	{
	printf("%c",65+(((toupper(text[i])-65)+(toupper(key[j])-65))%26) );
	}
 }

 }
void devigenere(char *text,char *key)
{
unsigned int i,j;
printf("Decrypted text:");
for(i=0, j=0;i<strlen(text);i++,j++)
{
	if (j>=strlen(key))
	{
		j=0;
	}
	if(text[i]>='a'&&text[i]<='z')
	{
	printf("%c",97+((tolower(text[i])-97)-(tolower(key[j])-97))%26);
	}
	if (text[i]>='A'&&text[i]<='Z')
	{
	printf("%c",65+((toupper(text[i])-65)-(toupper(key[j])-65))%26);
	}
 }

 }

	int main()
	{
	//clrscr();
	char text[25],keyword[25];
    printf("*******************\n* Vigenere Cipher *\n");
    printf("*******************\n");
    printf("\nEncryption:\n");
    printf("-----------\n");
	printf("Enter text to encrypt:  ");
	gets(text);
	printf("Enter key:  ");
	gets(keyword);
	vigenere(text,keyword);

	printf("\n\n\nDecryption:\n");
    printf("-----------");
    printf("\nEnter text to decrypt:  ");
	gets(text);
	printf("Enter key:  ");
	gets(keyword);
	devigenere(text,keyword);

	getch();
	return 0;
	}
