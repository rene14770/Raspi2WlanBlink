#include <wiringPi.h>

// LED-PIN - wiringPi-PIN 0 ist BCM_GPIO 17.
// Wir m�ssen bei der Initialisierung mit wiringPiSetupSys die BCM-Nummerierung verwenden.
// Wenn Sie eine andere PIN-Nummer w�hlen, verwenden Sie die BCM-Nummerierung, und
// aktualisieren Sie die Eigenschaftenseiten � Buildereignisse � Remote-Postbuildereignisbefehl 
// der den GPIO-Export f�r die Einrichtung f�r wiringPiSetupSys verwendet.
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  // Ein
		delay(500); // ms
		digitalWrite(LED, LOW);	  // Aus
		delay(500);
	}
	return 0;
}