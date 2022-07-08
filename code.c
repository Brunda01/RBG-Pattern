const int red = 11;
const int blue = 10;
const int green = 9;

void setup(){
  pinMode(red, OUTPUT); // Red
  pinMode(blue, OUTPUT); // Blue
  pinMode(green, OUTPUT); // Green
  pinMode(A0, INPUT); // Red
  pinMode(A1, INPUT); // Blue
  pinMode(A2, INPUT); // Green
  Serial.begin(9600);  
}

void loop() {
  int r_value = analogRead(A0);
  int b_value = analogRead(A1);
  int g_value = analogRead(A2);
  
  int m_r_value = map(r_value, 0, 1023, 0, 255); // mapping to get limited values
  int m_b_value = map(b_value, 0, 1023, 0, 255);
  int m_g_value = map(g_value, 0, 1023, 0, 255);
  
  
  analogWrite(red, m_r_value);
  analogWrite(blue, m_b_value);
  analogWrite(green, m_g_value);
  
  
  Serial.print(m_r_value);
  Serial.print(" ");
  Serial.print(m_b_value);
  Serial.print(" ");
  Serial.println(m_g_value);
  Serial.print(" ");
}
