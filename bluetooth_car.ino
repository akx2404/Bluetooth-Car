char Incoming_value ;
const int in1=5;
const int in2=6;
const int in3=9;
const int in4=10;

                
void setup() 
{
  Serial.begin(9600);         
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);     
  pinMode(9, OUTPUT);     
  pinMode(10, OUTPUT);          
}

void loop()
{
  while(Serial.available()> 0)  
  {
    Incoming_value = Serial.read();      
     
    if(Incoming_value == '0'){             
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      Serial.println("brakes");}
  
    else if(Incoming_value == '1') {      
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);  
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      Serial.println("forward");}

    else if(Incoming_value == '2')    {   
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW); 
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      Serial.println("left");}

    else if(Incoming_value == '3')    {   
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      Serial.println("right");}

      else if(Incoming_value == '4') {      
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);  
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      Serial.println("Reverse");}
  }                            
} 
