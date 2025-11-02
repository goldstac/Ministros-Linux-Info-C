#include <stdio.h>
#include <string.h>
int main() {
printf("Ministros Linux Info\n");
printf("Type --help for info\n");
char input[50];
while(1) {
fgets(input,sizeof(input),stdin);
input[strcspn(input,"\n")] = '\0';
if (strcmp(input,"--help") == 0) {
    printf("license\n");
    printf("base\n");
    printf("vm info\n");

}
else if (strcmp(input,"license") == 0) {
    printf("GNU GPLv3\n");
}
else if (strcmp(input,"base") == 0) {
    printf("Debian\n");

}
else if (strcmp(input,"vm info") == 0) {
    printf("8GB Storage\n");
    printf("1-2 GB RAM\n");

}
else if (strcmp(input,"exit") == 0) {
    break;
}
else{
    printf("Command Not Found");
}
}
return 0;
}
