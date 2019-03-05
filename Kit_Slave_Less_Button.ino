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
int MOTOR_1 = 2;
int MOTOR_2 = 3;
int MOTOR_3 = 4;
int MOTOR_4 = 5;
int MOTOR_5 = 6;
int MOTOR_6 = 7;
int DIR_COCKWISE = 12;
int DIR_ANTICOCKWISE = 13;

// INITIALIZATION OTHERS
int MOTOR_1_STATE = 0;
int MOTOR_2_STATE = 0;
int MOTOR_3_STATE = 0;
int MOTOR_4_STATE = 0;
int MOTOR_5_STATE = 0;
int MOTOR_6_STATE = 0;
int DIR_COCKWISE_STATE = 0;
int DIR_ANTICOCKWISE_STATE = 0;

void setup() 
{
  Serial.begin(9600);
  
  pinMode(MOTOR_1, INPUT_PULLUP);
  pinMode(MOTOR_2, INPUT_PULLUP);
  pinMode(MOTOR_3, INPUT_PULLUP);
  pinMode(MOTOR_4, INPUT_PULLUP);
  pinMode(MOTOR_5, INPUT_PULLUP);
  pinMode(MOTOR_6, INPUT_PULLUP);
  pinMode(DIR_COCKWISE, INPUT_PULLUP);
  pinMode(DIR_ANTICOCKWISE, INPUT_PULLUP);
}

void loop() 
{
  MOTOR_1_STATE = digitalRead(MOTOR_1);
  MOTOR_2_STATE = digitalRead(MOTOR_2);
  MOTOR_3_STATE = digitalRead(MOTOR_3);
  MOTOR_4_STATE = digitalRead(MOTOR_4);
  MOTOR_5_STATE = digitalRead(MOTOR_5);
  MOTOR_6_STATE = digitalRead(MOTOR_6);
  DIR_COCKWISE_STATE = digitalRead(DIR_COCKWISE);
  DIR_ANTICOCKWISE_STATE = digitalRead(DIR_ANTICOCKWISE);
  
  ////////////////////////////////////////////////////////////////////
  if (DIR_COCKWISE_STATE == LOW)
  {
    if (MOTOR_1_STATE == LOW)
    {
      Serial.write("@1O#");
      Serial.print("\n");
//      delay(500);
    }
  }
  if (DIR_ANTICOCKWISE_STATE == LOW)
  {
    if (MOTOR_1_STATE == LOW)
    {
      Serial.write("@1C#");
      Serial.print("\n");
//      delay(500);
    }
  }
  ////////////////////////////////////////////////////////////////////
  if (DIR_COCKWISE_STATE == LOW)
  {
    if (MOTOR_2_STATE == LOW)
    {
      Serial.write("@2O#");
      Serial.print("\n");
//      delay(500);
    }
  }
  if (DIR_ANTICOCKWISE_STATE == LOW)
  {
    if (MOTOR_2_STATE == LOW)
    {
      Serial.write("@2C#");
      Serial.print("\n");
//      delay(500);
    }
  }
  ////////////////////////////////////////////////////////////////////
  if (DIR_COCKWISE_STATE == LOW)
  {
    if (MOTOR_3_STATE == LOW)
    {
      Serial.write("@3O#");
      Serial.print("\n");
//      delay(500);
    }
  }
  if (DIR_ANTICOCKWISE_STATE == LOW)
  {
    if (MOTOR_3_STATE == LOW)
    {
      Serial.write("@3C#");
      Serial.print("\n");
//      delay(500);
    }
  }
  ////////////////////////////////////////////////////////////////////
  if (DIR_COCKWISE_STATE == LOW)
  {
    if (MOTOR_4_STATE == LOW)
    {
      Serial.write("@4O#");
      Serial.print("\n");
//      delay(500);
    }
  }
  if (DIR_ANTICOCKWISE_STATE == LOW)
  {
    if (MOTOR_4_STATE == LOW)
    {
      Serial.write("@4C#");
      Serial.print("\n");
//      delay(500);
    }
  }
  ////////////////////////////////////////////////////////////////////
  if (DIR_COCKWISE_STATE == LOW)
  {
    if (MOTOR_5_STATE == LOW)
    {
      Serial.write("@5O#");
      Serial.print("\n");
//      delay(500);
    }
  }
  if (DIR_ANTICOCKWISE_STATE == LOW)
  {
    if (MOTOR_5_STATE == LOW)
    {
      Serial.write("@5C#");
      Serial.print("\n");
//      delay(500);
    }
  }
  ////////////////////////////////////////////////////////////////////
  if (DIR_COCKWISE_STATE == LOW)
  {
    if (MOTOR_6_STATE == LOW)
    {
      Serial.write("@6O#");
      Serial.print("\n");
//      delay(500);
    }
  }
  if (DIR_ANTICOCKWISE_STATE == LOW)
  {
    if (MOTOR_6_STATE == LOW)
    {
      Serial.write("@6C#");
      Serial.print("\n");
//      delay(500);
    }
  }
  ////////////////////////////////////////////////////////////////////


  
  ////////////////////////////////////////////////////////////////////


}
