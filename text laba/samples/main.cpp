#include <iostream>
#include "TText.h"
#include "TTextViewer.h"
using namespace std;

int main()
{
  PTText pText;
  TTextLink::InitMemSystem(50);
  pText = new TText(new TTextLink((char*)"hello world"));
  TTextViewer::StartInterface(pText);
  return 0;
}
