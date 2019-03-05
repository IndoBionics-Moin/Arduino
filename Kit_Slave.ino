// LIST OF COMMANDS
// @O#
// @C#
// @1O#
// @1C#
// @2O#
// @2C#
// @3O#
// @3C#
// @4O#
// @4C#
// @5O#
// @5C#
// @6O#
// @6C#
  
//INITIALIZE ALL THE BUTTONS
int MOTOR_11 = 2;
int MOTOR_12 = 3;
int MOTOR_21 = 4;
int MOTOR_22 = 5;
int MOTOR_31 = 6;
int MOTOR_32 = 7;
int MOTOR_41 = 8;
int MOTOR_42 = 9;
int MOTOR_51 = 10;
int MOTOR_52 = 11;
int MOTOR_61 = 12;
int MOTOR_62 = 13;
//int CLOSE_ALL = 0;
//int OPEN_ALL = 1;

// INITIALIZATION OTHERS
int MOTOR_11_STATE = 0;
int MOTOR_12_STATE = 0;
int MOTOR_21_STATE = 0;
int MOTOR_22_STATE = 0;
int MOTOR_31_STATE = 0;
int MOTOR_32_STATE = 0;
int MOTOR_41_STATE = 0;
int MOTOR_42_STATE = 0;
int MOTOR_51_STATE = 0;
int MOTOR_52_STATE = 0;
int MOTOR_61_STATE = 0;
int MOTOR_62_STATE = 0;
//int OPEN_ALL_STATE = 0;
//int CLOSE_ALL_STATE = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(MOTOR_11, INPUT_PULLUP);
  pinMode(MOTOR_12, INPUT_PULLUP);
  pinMode(MOTOR_21, INPUT_PULLUP);
  pinMode(MOTOR_22, INPUT_PULLUP);
  pinMode(MOTOR_31, INPUT_PULLUP);
  pinMode(MOTOR_32, INPUT_PULLUP);
  pinMode(MOTOR_41, INPUT_PULLUP);
  pinMode(MOTOR_42, INPUT_PULLUP);
  pinMode(MOTOR_51, INPUT_PULLUP);
  pinMode(MOTOR_52, INPUT_PULLUP);
  pinMode(MOTOR_61, INPUT_PULLUP);
  pinMode(MOTOR_62, INPUT_PULLUP);
//  pinMode(OPEN_ALL, INPUT_PULLUP);
//  pinMode(CLOSE_ALL, INPUT_PULLUP);

}

void loop() 
{
  MOTOR_11_STATE = digitalRead(MOTOR_11);
  MOTOR_12_STATE = digitalRead(MOTOR_12);
  MOTOR_21_STATE = digitalRead(MOTOR_21);
  MOTOR_22_STATE = digitalRead(MOTOR_22);
  MOTOR_31_STATE = digitalRead(MOTOR_31);
  MOTOR_32_STATE = digitalRead(MOTOR_32);
  MOTOR_41_STATE = digitalRead(MOTOR_41);
  MOTOR_42_STATE = digitalRead(MOTOR_42);
  MOTOR_51_STATE = digitalRead(MOTOR_51);
  MOTOR_52_STATE = digitalRead(MOTOR_52);
  MOTOR_61_STATE = digitalRead(MOTOR_61);
  MOTOR_62_STATE = digitalRead(MOTOR_62);
//  OPEN_ALL_STATE = digitalRead(OPEN_ALL);
//  CLOSE_ALL_STATE = digitalRead(CLOSE_ALL);
  

  ////////////////////////////////////////////////////////////////////
//  if (OPEN_ALL_STATE == LOW) 
//  {
//    Serial.write("@O#");
//    Serial.print("\n");
//    delay(500);
//  }
//  if (CLOSE_ALL_STATE == LOW) 
//  {
//    Serial.write("@C#");
//    Serial.print("\n");
//    delay(500);
//  }
  ////////////////////////////////////////////////////////////////////
  if (MOTOR_11_STATE == LOW) 
  {
    Serial.write("@1O#");
    Serial.print("\n");
    delay(500);
  }
  if (MOTOR_12_STATE == LOW) 
  {
    Serial.write("@1C#");
    Serial.print("\n");
    delay(500);
  }
  ////////////////////////////////////////////////////////////////////
  if (MOTOR_21_STATE == LOW) 
  {
    Serial.write("@2O#");
    Serial.print("\n");
    delay(500);
  }
  if (MOTOR_22_STATE == LOW) 
  {
    Serial.write("@2C#");
    Serial.print("\n");
    delay(500);
  }
  ////////////////////////////////////////////////////////////////////
  if (MOTOR_31_STATE == LOW) 
  {
    Serial.write("@3O#");
    Serial.print("\n");
    delay(500);
  }
  if (MOTOR_32_STATE == LOW) 
  {
    Serial.write("@3C#");
    Serial.print("\n");
    delay(500);
  }
  ////////////////////////////////////////////////////////////////////
  if (MOTOR_41_STATE == LOW) 
  {
    Serial.write("@4O#");
    Serial.print("\n");
    delay(500);
  }
  if (MOTOR_42_STATE == LOW) 
  {
    Serial.write("@4C#");
    Serial.print("\n");
    delay(500);
  }
  ////////////////////////////////////////////////////////////////////
  if (MOTOR_51_STATE == LOW) 
  {
    Serial.write("@5O#");
    Serial.print("\n");
    delay(500);
  }
  if (MOTOR_52_STATE == LOW) 
  {
    Serial.write("@5C#");
    Serial.print("\n");
    delay(500);
  }
  ////////////////////////////////////////////////////////////////////
  if (MOTOR_61_STATE == LOW) 
  {
    Serial.write("@6O#");
    Serial.print("\n");
    delay(500);
  }
  if (MOTOR_62_STATE == LOW) 
  {
    Serial.write("@6C#");
    Serial.print("\n");
    delay(500);
  }
}
