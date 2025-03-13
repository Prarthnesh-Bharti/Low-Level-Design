#ifndef DESKTOPBUILDER_H;
#define DESKTOPBUILDER_H;
#include "desktop.h"

//concrete builder class
class desktopbuilder
{
protected:
Desktop * desktop;
 public:
  DesktopBuilder(){
    desktop = new Desktop();
  }

  //virtual functions so that concrete builders can know what to build
  virtual void buildMonitor() = 0;
  virtual void buildKeyboard() = 0;
  virtual void buildMouse() = 0;
  virtual void buildSpeaker() = 0;
  virtual void buildRam() = 0;
  virtual void buildProcessor() = 0;
  virtual void buildMotherboard() = 0;

  //getter function to get the desktop object
  virtual Desktop * getDesktop(){
    return desktop;
  }

};

#endif