#include <stdio.h>
#include <string.h>
//CountNumber=CN, CountCharacter=CC, CountSpecial=CS
void count(char str[], int length){
	int CC = 0, CN = 0, CS = 0;
	for(int i = 0; i < length; i++){
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
			CC++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			CN++;
		}
	}
	printf("%s", str);
	printf("\nSo ki tu la chu cai: %d", CC);
	printf("\nSo ki tu la so: %d", CN);
	printf("\nSo ki tu dac biet la: %d", length - CC - CN);
}
int main(){
	char str[] = "6@U C0n mu@ tr0i l@! $@n&";
	int length = strlen(str);
	if(str[length - 1] == '\n'){
		str[length - 1] = '\0';
		length--;
	}
	count(str, length);
	return 0;
}
