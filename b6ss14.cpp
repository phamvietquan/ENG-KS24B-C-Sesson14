#include <stdio.h>

int main(){
	char str[]="xin chao cac ban";
	int length=sizeof(str)/sizeof(char);
	int i=0;
	int count=0;
	while(str[i]!='\0'){
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
        i++;
    }
	printf("So ky tu la chu cai co trong chuoi la: %d", count);
	return 0;
}

