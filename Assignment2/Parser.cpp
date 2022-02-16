#include <iostream>
#include "Parser.h"
using namespace std;
/*
Function Name: Acount - Zcount
What is does: Searches through the string and if it finds a specific character, the int of that character will increment by 1. There is a function just like this for each letter in the alphabet.
Parameters name and Data types: No parameters but data types are int and string
Return value and type: returns the final value of the int of the character
Function Name: Non_Charactercount
What it does: The command isalpha is used to to see if any index position in the string is a non-alphabetic character, if so no_alpha will increment by 1.
Parameters name and Data types: No parameters but data types are int and string
Return value and type: returns the final value of the int of the character
Function Name: Pairs
What it does: Compares the current index position in the string to the next position and if they equal, pair will increment by 1.
Parameters name and Data types: No parameters but data types are int and string
Return value and type: returns the final value of the int of the character
*/

Parser::Parser(){
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  e = 0;
  f = 0;
  g = 0;
  h = 0;
  i = 0;
  j = 0;
  k = 0;
  l = 0;
  m = 0;
  n = 0;
  o = 0;
  p = 0;
  q = 0;
  r = 0;
  s = 0;
  t = 0;
  u = 0;
  v = 0;
  w = 0;
  x = 0;
  y = 0;
  z = 0;
  no_alpha = 0;
  pair = 0;
  getline(cin, line);


}
int Parser::Acount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'a'){
      a++;
    }
  }
  return a;
}
int Parser::Bcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'b'){
      b++;
    }
  }
  return b;
}
int Parser::Ccount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'c'){
      c++;
    }
  }
  return c;
}
int Parser::Dcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'd'){
      d++;
    }
  }
  return d;
}
int Parser::Ecount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'e'){
      e++;
    }
  }
  return e;
}
int Parser::Fcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'f'){
      f++;
    }
  }
  return f;
}
int Parser::Gcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'g'){
      g++;
    }
  }
  return g;
}
int Parser::Hcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'h'){
      h++;
    }
  }
  return h;
}
int Parser::Icount(){
  for(int jerry = 0; jerry < line.length(); jerry++){
    if(line[jerry] == 'i'){
      i++;
    }
  }
  return i;
}
int Parser::Jcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'j'){
      j++;
    }
  }
  return j;
}
int Parser::Kcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'k'){
      k++;
    }
  }
  return k;
}
int Parser::Lcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'l'){
      l++;
    }
  }
  return l;
}
int Parser::Mcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'm'){
      m++;
    }
  }
  return m;
}
int Parser::Ncount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'n'){
      n++;
    }
  }
  return n;
}
int Parser::Ocount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'o'){
      o++;
    }
  }
  return o;
}
int Parser::Pcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'p'){
      p++;
    }
  }
  return p;
}
int Parser::Qcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'q'){
      q++;
    }
  }
  return q;
}
int Parser::Rcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'r'){
      r++;
    }
  }
  return r;
}
int Parser::Scount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 's'){
      s++;
    }
  }
  return s;
}
int Parser::Tcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 't'){
      t++;
    }
  }
  return t;
}
int Parser::Ucount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'u'){
      u++;
    }
  }
  return u;
}
int Parser::Vcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'v'){
      v++;
    }
  }
  return v;
}
int Parser::Wcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'w'){
      w++;
    }
  }
  return w;
}
int Parser::Xcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'x'){
      x++;
    }
  }
  return x;
}
int Parser::Ycount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'y'){
      y++;
    }
  }
  return y;
}
int Parser::Zcount(){
  for(int i = 0; i < line.length(); i++){
    if(line[i] == 'z'){
      z++;
    }
  }
  return z;
}
int Parser::Non_Charactercount(){//The command isalpha is used to to see if any index position in the string is a non-alphabetic character, if so no_alpha will increment by 1.
  for(int i = 0; i < line.length(); i++){
    if(!(isalpha(line[i]))){
      no_alpha++;
    }
  }
  return no_alpha;
}


int Parser::Pairs(){ //Compares the current index position in the string to the next position and if they equal, pair will increment by 1.
  for(int i = 0; i < line.length(); i++){
    if(isalpha(line[i])){
    if(line[i] == line[i+1]){
      pair++;
      }
    }
  }
  return pair;
}
