#include "hpdesktopbuilder.h"
#include "delldesktopbuilder.h"
#include "desktopDirector.h"

//2 builders and 2 directors

int main(){

 //create the builders
 HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
 DellDesktopbuilder* dellDesktopBuilder = new DellDesktopbuilder();

//director will use the builder to build the product
DesktopDirector* director1 = new DesktopDirector(hp);
DesktopDirector* director2 = new DesktopDirector(dell);

Desktop* desktop1 = director1->buildDesktop();
Desktop* desktop2 = director2->buildDesktop();

desktop1->showSpecs();
desktop2->showSpecs();

return 0;

}