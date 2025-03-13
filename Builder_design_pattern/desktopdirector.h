#ifndef DESKTOPDIRECTOR_H
#define DESKTOPDIRECTOR_H
#include "desktopBuilder.h"

//director will use the builder to build the product
class DesktopBuilder{
private:
  DesktopBuilder * desktopBuilder;

public:
//constructor which takes the builder object
DesktopBuilder(DesktopBuilder * pdesktopBuilder){
  desktopBuilder = pdesktopBuilder;
};

//function to build the product: builder pass the configuration to the product
Desktop BuildDesktop(){
  desktopBuilder->buildMonitor();
  desktopBuilder->buildKeyboard();
  desktopBuilder->buildMouse();
  desktopBuilder->buildSpeaker();
  desktopBuilder->buildRam();
  desktopBuilder->buildProcessor();
  desktopBuilder->buildMotherboard();
  return desktopBuilder->getDesktop();
}
};


#endif