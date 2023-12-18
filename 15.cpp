bool itc_isDigit(unsigned char c){

if ('0' <= c && c <= '9'){
    return true;
}
else
   return false;

}


unsigned char itc_toUpper(unsigned char c){
int a;
if (c >= 'a' && c <= 'z'){
   a = c;
   a = a - 32;
}
else
    a = c;

return a;
}



unsigned char itc_changeCase(unsigned char c){
int a;
if (c >= 'a' && c <= 'z'){
   a = c;
   a = a - 32;
}
else if (c >= 'A' && c <= 'Z'){
    a = c;
    a = a + 32;
}
else {
    c == '#';
    a = '#';
}


return a;
}




int str_len(string s1){
int i;
for (i = 0; s1[i] > '\0'; i++);
    return i;
}
bool itc_compare(string s1, string s2){
int a, b;
a = str_len(s1);
b = str_len(s2);
if (a != b)
return false;

for (int i = 0;  s1[i] != '\0'; i++){
    if (s1[i] != s2[i])
    return false;

}
return true;
}

