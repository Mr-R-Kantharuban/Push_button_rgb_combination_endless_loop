int red_light_pin= 2;
int green_light_pin = 3;
int blue_light_pin = 4;
int pb_pin = A1;
int x=0;
int y=0;
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  pinMode(pb_pin, INPUT);
  Serial.begin(9600);
  }
  void loop() {
  x=analogRead(A1);
  Serial.println(x);
  if(x>50)
  {
    y++;
  }
  if(y==1)
  {
    RGB_color(255, 0, 0); // Red
  delay(1000);
  }
  else {
    RGB_color(0, 0, 0); // Red
  delay(1000);
  }
  if(y==2)
  {
    RGB_color(0, 255, 0); // Green
  delay(1000);
  }
  else 
  {
    RGB_color(0, 0, 0); // Red
  delay(1000);
  }
  if(y==3||y==0)
  {
    RGB_color(0, 0, 255); // Blue
  delay(1000);
  y=0;
  }
  else{
     RGB_color(0, 0, 0); // Red
  delay(1000);
    
  }
  }
  void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
