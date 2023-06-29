int led[]={2,3,4,5,6};

void setup()
{
  for(int i=0;i<5;i++)
  {
    pinMode(led[i],OUTPUT); 
  }
  
}

void loop()
{
  liga_desliga(1);
  liga_desliga(0); 
  
  piscar_leds(1,0);
  piscar_leds(2,1);
  piscar_leds(3,2);
  piscar_leds(4,3);
  piscar_leds(5,4);
}

void liga_desliga(int x)
{
  for(int i=0;i<5;i++)
  {
    digitalWrite(led[i],x);
    delay(300);
  }
}

void piscar_leds(int vs, int ql)
{
  for (int i=0;i<vs;i++)
  {
    digitalWrite(led[ql],1);
    delay(400);
    digitalWrite(led[ql],0);
    delay(400);
  }
}
  
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  