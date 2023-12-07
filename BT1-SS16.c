#include<stdio.h>
int main()
{
FILE *filePointer; 
	char buffer[] = "thay Cuong dep zai";
	
	// mo tep tin
	filePointer = fopen("C:\\Users\\nguye\\OneDrive\\Máy tính\\Bt01.txt", "w"); 
	
	//ghi vao tep tin
	fwrite(buffer, sizeof(buffer), 1, filePointer);
	
	fclose(filePointer);
	
+	return 0;
}-
