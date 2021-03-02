#include<stdio.h>
int main(){
FILE *fp;
char c[100];
if((fp=fopen("sam.txt", "rb"))==NULL){
printf("error while reading a file\n");
exit(0);
}
fscanf(fp, "%[^\n]",c);
printf("%s",c);
fclose(fp);
return 0;
}
