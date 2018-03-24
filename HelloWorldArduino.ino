#include "Arduboy.h"

Arduboy arduboy;

void
setup()
{
  arduboy.begin();
  arduboy.setFrameRate(60);
}

void
loop()
{
  if (!(arduboy.nextFrame())) return;
  arduboy.clear();
  arduboy.setCursor(4, 9);
  arduboy.print(F("Your mother smells\n of elderberries."));
  arduboy.display();
}
