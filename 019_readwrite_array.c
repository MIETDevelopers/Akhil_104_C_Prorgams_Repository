  
#include <stdio.h>
#include <stdlib.h>
struct s {
	//Creating a user defined data type using structures.
	char text[1000];
	};
 int main(){
	struct s a[1000],b[1000];
	FILE *fptr;
	int i;
	fptr=fopen("C:\\Users\\CAIP\\Desktop\\C_Programs\\Akhil_104_C_Prorgams_Repository\\019readwrite_array.c","wb");
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //Scanning the entered text.
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("C:\\Users\\CAIP\\Desktop\\C_Programs\\Akhil_104_C_Prorgams_Repository\\019readwrite_array.c","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); //Printing the entered text.
	}
	fclose(fptr); //Closing the program.
}