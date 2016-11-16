// Need G4P library
import g4p_controls.*;
import processing.serial.*;
import cc.arduino.*;

Serial myPort;

public void setup(){
  size(380, 420, JAVA2D);
  createGUI();
  customGUI();
  // Place your setup code here
  println(Serial.list());
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);
  
}

public void draw(){
  background(230);
}
// Use this method to add additional statements
// to customise the GUI controls
public void customGUI(){
  
}