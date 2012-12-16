/*
Interfacing ArduBoard with a Seven Segment Display (Common Anode)
By Explore Labs

Map taken from: http://www.cs.binghamton.edu/~steflik/cs423/7segment/sevenseg.html

                       Seven Segment Code
                  a     b    c    d    e    f    g
            0     0     0    0    0    0    0    0 
            1     1     0    0    1    1    1    1
            2     0     0    1    0    0    1    0
            3     0     0    0    0    1    1    0 
            4     1     0    0    1    1    0    0
            5     0     1    0    0    1    0    0 
            6     0     1    0    0    0    0    0
            7     0     0    0    1    1    1    1
            8     0     0    0    0    0    0    0  
            9     0     0    0    0    1    1    0
            A     0     0    0    1    0    0    0
            B     1     0    0    0    0    1    0 
            C     0     1    1    0    0    0    1 
            D     1     0    0    0    0    1    0
            E     0     1    1    0    0    0    0 
            F     0     1    1    1    0    0    0

December 15, 2012
*/

//  Arduino Pin Mapping
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9;  // decimal point (DP)

void setup()
{                    
  pinMode(a, OUTPUT);      //        a
  pinMode(b, OUTPUT);      //     ------
  pinMode(c, OUTPUT);      //    |      |
  pinMode(d, OUTPUT);      //    |f     |b
  pinMode(e, OUTPUT);      //    |______|
  pinMode(f, OUTPUT);      //    |   g  |
  pinMode(g, OUTPUT);      //    |e     |c
  pinMode(dp, OUTPUT);     //    |______|
  delay(100);              //        d      (DP)
  
  // Turn Off all the LEDs
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);  
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);  
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);  
  delay(100);
}

void loop()
{
  // Display Zero '0'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, LOW);    //    |f     |b
  digitalWrite(e, LOW);    //    |      |
  digitalWrite(f, LOW);    //    |      |
  digitalWrite(g, HIGH);   //    |e     |c
  digitalWrite(dp, HIGH);  //    |______|
  delay(500);              //        d
  
  // Display One '1'
  digitalWrite(a, HIGH);   //
  digitalWrite(b, LOW);    //
  digitalWrite(c, LOW);    //           |
  digitalWrite(d, HIGH);   //           |b
  digitalWrite(e, HIGH);   //           |
  digitalWrite(f, HIGH);   //           |
  digitalWrite(g, HIGH);   //           |c
  digitalWrite(dp, HIGH);  //           |
  delay(500);              //        
  
  // Display Two '2'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, HIGH);   //           |
  digitalWrite(d, LOW);    //           |b
  digitalWrite(e, LOW);    //     ______|
  digitalWrite(f, HIGH);   //    |   g  
  digitalWrite(g, LOW);    //    |e     
  digitalWrite(dp, HIGH);  //    |______
  delay(500);              //        d
  
  // Display Three '3'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //           |
  digitalWrite(d, LOW);    //           |b
  digitalWrite(e, HIGH);   //     ______|
  digitalWrite(f, HIGH);   //        g  |
  digitalWrite(g, LOW);    //           |c
  digitalWrite(dp, HIGH);  //     ______|
  delay(500);              //        d
  
  // Display Four '4'
  digitalWrite(a, HIGH);   //
  digitalWrite(b, LOW);    //
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, HIGH);   //    |f     |b
  digitalWrite(e, HIGH);   //    |______|
  digitalWrite(f, LOW);    //        g  |
  digitalWrite(g, LOW);    //           |c
  digitalWrite(dp, HIGH);  //           |
  delay(500);              //        
  
  // Display Five '5'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, HIGH);   //     ------
  digitalWrite(c, LOW);    //    |      
  digitalWrite(d, LOW);    //    |f     
  digitalWrite(e, HIGH);   //    |______
  digitalWrite(f, LOW);    //        g  |
  digitalWrite(g, LOW);    //           |c
  digitalWrite(dp, HIGH);  //     ______|
  delay(500);              //        d
  
  // Display Six '6'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, HIGH);   //     ------
  digitalWrite(c, LOW);    //    |
  digitalWrite(d, LOW);    //    |f
  digitalWrite(e, LOW);    //    |______
  digitalWrite(f, LOW);    //    |   g  |
  digitalWrite(g, LOW);    //    |e     |c
  digitalWrite(dp, HIGH);  //    |______|
  delay(500);              //        d
  
  // Display Seven '7'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //           |
  digitalWrite(d, HIGH);   //           |b
  digitalWrite(e, HIGH);   //           |
  digitalWrite(f, HIGH);   //           |
  digitalWrite(g, HIGH);   //           |c
  digitalWrite(dp, HIGH);  //           |
  delay(500);              //
  
  // Display Eight '8'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, LOW);    //    |f     |b
  digitalWrite(e, LOW);    //    |______|
  digitalWrite(f, LOW);    //    |   g  |
  digitalWrite(g, LOW);    //    |e     |c
  digitalWrite(dp, HIGH);  //    |______|
  delay(500);              //        d  
  
  // Display Nine '9'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, LOW);    //    |f     |b
  digitalWrite(e, HIGH);   //    |______|
  digitalWrite(f, LOW);    //        g  |
  digitalWrite(g, LOW);    //           |c
  digitalWrite(dp, HIGH);  //     ______|
  delay(500);              //        d  
  
  // Display 'A'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, HIGH);   //    |f     |b
  digitalWrite(e, LOW);    //    |______|
  digitalWrite(f, LOW);    //    |   g  |
  digitalWrite(g, LOW);    //    |e     |c
  digitalWrite(dp, HIGH);  //    |      |
  delay(500);              //
  
  // Display 'B'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, LOW);    //    |f     |b
  digitalWrite(e, LOW);    //    |______|
  digitalWrite(f, LOW);    //    |   g  |
  digitalWrite(g, LOW);    //    |e     |c
  digitalWrite(dp, HIGH);  //    |______|
  delay(500);              //        d  
  
  // Display 'C'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, HIGH);   //     ------
  digitalWrite(c, HIGH);   //    |      
  digitalWrite(d, LOW);    //    |f
  digitalWrite(e, LOW);    //    |
  digitalWrite(f, LOW);    //    |
  digitalWrite(g, HIGH);   //    |e
  digitalWrite(dp, HIGH);  //    |______
  delay(500);              //        d  
  
  // Display 'D'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, LOW);    //     ------
  digitalWrite(c, LOW);    //    |      |
  digitalWrite(d, LOW);    //    |f     |b
  digitalWrite(e, LOW);    //    |      |
  digitalWrite(f, LOW);    //    |      |
  digitalWrite(g, HIGH);   //    |e     |c
  digitalWrite(dp, HIGH);  //    |______|
  delay(500);              //        d  
  
  // Display 'E'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, HIGH);   //     ------
  digitalWrite(c, HIGH);   //    |
  digitalWrite(d, LOW);    //    |f
  digitalWrite(e, LOW);    //    |______
  digitalWrite(f, LOW);    //    |   g
  digitalWrite(g, LOW);    //    |e
  digitalWrite(dp, HIGH);  //    |______
  delay(500);              //        d  
  
  // Display 'F'
  digitalWrite(a, LOW);    //        a
  digitalWrite(b, HIGH);   //     ------
  digitalWrite(c, HIGH);   //    |      
  digitalWrite(d, HIGH);   //    |f     
  digitalWrite(e, LOW);    //    |______
  digitalWrite(f, LOW);    //    |   g
  digitalWrite(g, LOW);    //    |e     
  digitalWrite(dp, HIGH);  //    |
  delay(500);              //
}
  
