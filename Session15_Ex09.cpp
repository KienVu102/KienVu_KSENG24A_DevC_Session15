#include <stdio.h>
#include <string.h>
//RemoveCharacter=RC
void RC(char str[], int length, char character){
	for(int i = 0; i < length ; i++){
		if(str[i] == character){
			for(int j = i; j < length; j++){
				str[j] = str[j+1];
			}
			str[length - 1] = '\0';
			length--;
			i--;
		}
	}
	printf("%s", str);
}
int main(){
	char str[] = "hello world";
	char character;
	printf("Nhap ki tu ban muon xoa: ");
	scanf("%c", &character);
	int length = strlen(str);
	RC(str, length, character);
	return 0;
}
