#include<staio.h>
int main(){
FILE *fp;
char str[]="Hello this is cds training for 2020 batch";
fp=fopen("sam.txt", "w");
fwrite(str,1,sizeof(str),fp);
fclose(fp);
return 0;
}