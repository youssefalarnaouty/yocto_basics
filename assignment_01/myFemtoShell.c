#include <stdio.h>
#include <string.h>

#define STRING_SIZE 200

int main(){
        char input [STRING_SIZE];
        char terminator_message[] = "exit\n";
        while(1){
                printf("Type something > ");
                fgets(input,200,stdin);
                if(0 == strcmp(input,terminator_message)){
                                printf("Good Bye :)\n");
                                break;
                                }
                printf("You said: %s",input);
        }
        return 0;
}  
