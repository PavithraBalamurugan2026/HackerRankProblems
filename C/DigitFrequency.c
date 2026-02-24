int main() {
int counts[10] = {0};
char input_string[1000]; 
scanf("%s", input_string);
for (int i = 0; i < strlen(input_string); i++)
{
    char current_char = input_string[i];
    if (current_char >= '0' && current_char <= '9')
    {
        int digit_index = current_char - '0';
        counts[digit_index]++;
}
}
for (int i = 0; i < 10; i++)
{
    printf("%d ", counts[i]);
}
printf("\n");
return 0;
}
