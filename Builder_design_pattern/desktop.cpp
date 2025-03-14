//product class code
#include "desktop.h"
#include <iostream>
using namespace std;

void Desktop::setMonitor(string pMonitor) {
  monitor = pMonitor;
}

void Desktop::setKeyboard(string pKeyboard) {
  keyboard = pKeyboard;
}

void Desktop::setMouse(string pMouse) {
  mouse = pMouse;
}

void Desktop::setSpeaker(string pSpeaker) {
  speaker = pSpeaker;
}

void Desktop::setRam(string pRam) {
  ram = pRam;
}

void Desktop::setProcessor(string pProcessor) {
  processor = pProcessor;
}

void Desktop::setMotherboard(string pMotherboard) {
  motherboard = pMotherboard;
}

//function to displays the specifications of the desktop.
void Desktop::showSpecs() {
  cout << "Monitor: " << monitor << endl;
  cout << "Keyboard: " << keyboard << endl;
  cout << "Mouse: " << mouse << endl;
  cout << "Speaker: " << speaker << endl;
  cout << "RAM: " << ram << endl;
  cout << "Processor: " << processor << endl;
  cout << "Motherboard: " << motherboard << endl;
}
void