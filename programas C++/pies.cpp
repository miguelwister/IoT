{\rtf1\ansi\ansicpg1252\cocoartf2513
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs24 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include <iostream>\
\'a0\
#define pies 3.28\
\'a0\
using namespace std;\
\'a0\
int main() \{\
  int i;\
  float c;\
\'a0\
  cout << "\\t" << "Metros" << "\\t" << "Pies";\
  cout << endl;\
\'a0\
  for (i=1; i<=40; i++) \{\
    c = i * pies;\
    cout << "\\t" << i << "\\t" << c;\
    cout << endl;\
  \}\
\'a0\
  return 0;\
\}\
}