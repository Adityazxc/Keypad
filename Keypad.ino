//kontak lewat dm ig: "aditya.firmansyah59" jika ada yang kurang mengerti tanpa tanda kutip

#include <Keypad.h>//library keypad

const byte ROWS=4; //jumlah data yang di simpan adalah 4 karakter dalam 4 baris
const byte COLS=4; //jumlah data yang di simpan adalah 4 karakter dalam 4 kolom

char keys[ROWS][COLS]={ //untuk mendeklarasikan karakter
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

//menghubungkan port keypad ke port arduino
byte colPins[COLS] = {5, 4, 3, 2}; 
byte rowPins[ROWS]= {9,  8, 7, 6}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, COLS, ROWS); 


void setup() {
  Serial.begin(9600); // untuk mengatur "serial print" sebagai output ketika kita memasukkan karakter dalam keypad
  

}

void loop() {
   //untuk menampilkan data dari keypad
  char key = keypad.getKey();
  
  if(key){
    Serial.print(key);
    Serial.print(" ");
      }

}
