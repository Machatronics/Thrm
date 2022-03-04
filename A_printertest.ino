#include "Adafruit_Thermal.h"
#include "adalogo.h"
#include "adaqrcode.h"
#include "SoftwareSerial.h"
#define TX_PIN 6 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 5 // Arduino receive   GREEN WIRE   labeled TX on printer

SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial);     // Pass addr to printer constructor

void setup() {
  // This line is for compatibility with the Adafruit IotP project pack,
  // which uses pin 7 as a spare grounding point.  You only need this if
  // wired up the same way (w/3-pin header into pins 5/6/7):
  pinMode(7, OUTPUT); digitalWrite(7, LOW);

  // NOTE: SOME PRINTERS NEED 9600 BAUD instead of 19200, check test page.
  mySerial.begin(19200);  // Initialize SoftwareSerial
  Serial.begin(9600); // Use this instead if using hardware serial
  printer.begin();   // Init printer (same regardless of serial type)

Serial.write("Ready for  'a'");
}


void loop() {
   
 if(Serial.available())
  { char pres = 'a';
  if(pres == Serial.read())
  { Serial.write("a pressed");
    int b;
    b = random(1,36);
  switch (b)               // depending on real time, we perform an action
{
   case 1:
     { 
      printer.println(F("Given the choice of anyone in the world, whom would you want as a dinner guest?\n\n"));
    
     break;
     }
   case 2:
     {
      printer.println(F("Would you like to be famous? In what way?\n\n"));
    
     break;
     }
   case 3:
     {
      printer.println(F("Before making a telephone call, do you ever rehearse what you are going to say? Why?\n\n"));
     
     break;
     }
   case 4:
     {
      printer.println(F("What would constitute a 'perfect' day for you?\n\n"));
     
     break;
     }
   case 5:
     {
      printer.println(F("When did you last sing to yourself? To someone else?\n\n"));
     break;
     }
    case 6:
     {
      printer.println(F("If you were able to live to the age of 90 and retain either the mind or body of a 30-year-old for the last 60 years of your life, which would you want?\n\n"));
    
     break;
     }
     case 7:
     {
      printer.println(F("Do you have a secret hunch about how you will die?\n\n"));
   
     break;
     }
     case 8:
     {
      printer.println(F("Name three things you and your partner appear to have in common.\n\n"));
     
     break;
     }
     case 9:
     {
      printer.println(F("For what in your life do you feel most grateful?\n\n"));
    
     break;
     }
     case 10:
     {
      printer.println(F("If you could change anything about the way you were raised, what would it be?\n\n"));
  
     break;
     }
     case 11:
     {
      printer.println(F("Take four minutes and tell your partner your life story in as much detail as possible.\n\n"));
   
     break;
     }
     case 12:
     {
      printer.println(F("If you could wake up tomorrow having gained any one quality or ability, what would it be?\n\n"));
    
     break;
     }
     case 13:
     {
      printer.println(F("If a crystal ball could tell you the truth about yourself, your life, the future or anything else, what would you want to know?\n\n"));
   
     break;
     }
     case 14:
     {
      printer.println(F("Is there something that you've dreamed of doing for a long time? Why haven't you done it?\n\n"));
   
     break;
     }
     case 15:
     {
      printer.println(F("What is the greatest accomplishment of your life?\n\n"));
  
     break;
     }
     case 16:
     {
      printer.println(F("What do you value most in a friendship?\n\n"));
    
     break;
     }
     case 17:
     {
      printer.println(F("What is your most treasured memory?\n\n"));
  
     break;
     }
     case 18:
     {
      printer.println(F("What is your most terrible memory?\n\n"));
 
     break;
     }
     case 19:
     {
      printer.println(F("If you knew that in one year you would die suddenly, would you change anything about the way you are now living? Why?\n\n"));
     
     break;
     }
     case 20:
     {
      printer.println(F("What does friendship mean to you?\n\n"));
    
     break;
     }
     case 21:
     {
      printer.println(F("What roles do love and affection play in your life?\n\n"));
     
     break;
     }
     case 22:
     {
      printer.println(F("Alternate sharing something you consider a positive characteristic of your partner. Share a total of five items.\n\n"));
    
     break;
     }
     case 23:
     {
      printer.println(F("How close and warm is your family? Do you feel your childhood was happier than most other people's?\n\n"));
    
     break;
     }
     case 24:
     {
      printer.println(F("How do you feel about your relationship with your mother?\n\n"));
   
     break;
     }
     case 25:
     {
      printer.println(F("Make three true 'we' statements each. For instance, 'We are both in this room feeling ... '\n\n"));
  
     break;
     }
     case 26:
     {
      printer.println(F("Complete this sentence: 'I wish I had someone with whom I could share ... '\n\n"));
   
     break;
     }
     case 27:
     {
      printer.println(F("If you were going to become a close friend with your partner, please share what would be important for him or her to know.\n\n"));
   
     break;
     }
     case 28:
     {
      printer.println(F("Tell your partner what you like about them; be very honest this time, saying things that you might not say to someone you’ve just met.\n\n"));
    
     break;
     }
     case 29:
     {
      printer.println(F("Share with your partner an embarrassing moment in your life.\n\n"));
  
     break;
     }
     case 30:
     {
      printer.println(F("When did you last cry in front of another person? By yourself?\n\n"));
    
     break;
     }
     case 31:
     {
      printer.println(F("Tell your partner something that you like about them already.\n\n"));
   
     break;
     }
     case 32:
     {
      printer.println(F("What, if anything, is too serious to be joked about?\n\n"));
  
     break;
     }
     case 33:
     {
      printer.println(F("If you were to die this evening with no opportunity to communicate with anyone, what would you most regret not having told someone? Why haven’t you told them yet?\n\n"));
     
     break;
     }
     case 34:
     {
      printer.println(F("Your house, containing everything you own, catches fire. After saving your loved ones and pets, you have time to safely make a final dash to save any one item. What would it be? Why?\n\n"));
   
     break;
     }
     case 35:
     {
      printer.println(F("Of all the people in your family, whose death would you find most disturbing? Why?\n\n"));
    
     break;
     }
     case 36:
     {
      printer.println(F("Share a personal problem and ask your partner's advice on how he or she might handle it. Also, ask your partner to reflect back to you how you seem to be feeling about the problem you have chosen.\n\n"));
     
      break;
     }
     delay(50);
     }
}}
}
