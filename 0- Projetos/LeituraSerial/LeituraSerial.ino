int i;
char entrada[20];

void setup() {
Serial.begin(9600);
Serial.println("Recebi : ");
}
void loop() {
if (Serial.available() > 0) {
i = Serial.readBytes(entrada,i);
entrada[i] = Serial.read();
for (int x=0;x<=i;x++){Serial.println(entrada[x]);}
}
}
