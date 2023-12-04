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

