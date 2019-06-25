int Arr[10][7] = {  { 1,1,1,1,1,1,0 },
                          { 0,1,1,0,0,0,0 },   
                          { 1,1,0,1,1,0,1 },   
                          { 1,1,1,1,0,0,1 },   
                          { 0,1,1,0,0,1,1 },   
                          { 1,0,1,1,0,1,1 },   
                          { 1,0,1,1,1,1,1 },   
                          { 1,1,1,0,0,0,0 },   
                          { 1,1,1,1,1,1,1 },   
                          { 1,1,1,0,0,1,1 }};   
                          

void setup() {
  Serial.begin(9600);
for(int a=22;a<=49;a++)
{pinMode(a,OUTPUT);
  }
Disp1(0);
Disp2(0);
Disp3(0);
Disp4(0);
  


}
void Disp1(int i)
{
  
 digitalWrite(22,Arr[i][0]);
 digitalWrite(23,Arr[i][1]);
 digitalWrite(24,Arr[i][2]);
 digitalWrite(25,Arr[i][3]);
 digitalWrite(26,Arr[i][4]);
 digitalWrite(27,Arr[i][5]);
 digitalWrite(28,Arr[i][6]);

  }



  void Disp2(int i)
{

 digitalWrite(29,Arr[i][0]);
 digitalWrite(30,Arr[i][1]);
 digitalWrite(31,Arr[i][2]);
 digitalWrite(32,Arr[i][3]);
 digitalWrite(33,Arr[i][4]);
 digitalWrite(34,Arr[i][5]);
 digitalWrite(35,Arr[i][6]);
 
  }



  void Disp3(int i)
{
 
 digitalWrite(36,Arr[i][0]);
 digitalWrite(37,Arr[i][1]);
 digitalWrite(38,Arr[i][2]);
 digitalWrite(39,Arr[i][3]);
 digitalWrite(40,Arr[i][4]);
 digitalWrite(41,Arr[i][5]);
 digitalWrite(42,Arr[i][6]);
 

  }



  void Disp4(int i)
{

 digitalWrite(43,Arr[i][0]);
 digitalWrite(44,Arr[i][1]);
 digitalWrite(45,Arr[i][2]);
 digitalWrite(46,Arr[i][3]);
 digitalWrite(47,Arr[i][4]);
 digitalWrite(48,Arr[i][5]);
 digitalWrite(49,Arr[i][6]);
 delay(10);

  }

void loop() {

  for(int a=0;a<=2;a++)
  {for(int b=0;b<=9;b++){
    for(int c=0;c<=5;c++){
      for(int d=0;d<=9;d++)
        {     
        Disp4(d);Disp3(c);Disp2(b);Disp1(a);
        if(a==2 && b==4)
        {a=b=c=0;}
        }
        
    }
    
  }
   
       
  }
 

}
