//product class code
#ifndef DESKTOP_H
#define DESKTOP_H

#include <string>
using namespace std;

//class of desktop
class Desktop {
  string monitor;
  string keyboard;
  string mouse;
  string speaker;
  string ram;
  string processor;
  string motherboard;

  //setters
  public:
  void setMonitor(string pMonior) ;
  void setKeyboard(string pKeyboard) ;
  void setMouse(string pMouse) ;
  void setSpeaker(string pSpeaker) ;
  void setRam(string pRam) ;
  void setProcessor(string pProcessor) ;
  void setMotherboard(string pMotherboard) ;
  void showSpecs() ;
}





#endif