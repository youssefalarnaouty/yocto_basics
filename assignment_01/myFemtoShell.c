#include <stdio.h>
#include <string.h>

#define STRING_SIZE 200

int main(){
        char input [STRING_SIZE];
        while(1){
                printf("Type a something > ");
                gets(input);
                if(0 == strcmp(input,"exit")){
                                printf("Good Bye :)\n");
                                break;
                                }
                printf("You said: %s\n",input);
        }
        return 0;
}  
