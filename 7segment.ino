#define PIN_LED D13
#define LATCH_DIO 4
#define CLK_DIO 7
#define DATA_DIO 8

const byte SEGMENT_MAP[]={0xC0, 0xF9, 0xA4, 0xB0, 0x99,0x92, 0x82, 0xF8, 0X80, 0X90};
const byte SEGMENT_SELECT[]= {0xF1, 0xF2, 0xF4, 0xF8};


void setup() {

  
 pinMode(LATCH_DIO, OUTPUT);
 pinMode(CLK_DIO, OUTPUT);
 pinMode(DATA_DIO, OUTPUT);
 pinMode(PIN_LED, OUTPUT);

}

void loop() {
 
  digitalWrite(LATCH_DIO,LOW);
  shiftOut(DATA_DIO, CLK_DIO, MSBFIRST, SEGMENT_MAP[1]);
  delay(10);
  shiftOut(DATA_DIO, CLK_DIO, MSBFIRST, SEGMENT_SELECT[1]);
  digitalWrite(LATCH_DIO, HIGH);

}
