#include "Crypto.h"
#include "Shablon.h"
#include "ToxerSyuner.h"
#include "RLE.h"

int main() {
	//Shablon
	string s1 = "abcd1 abc";
	Shablon obj1(s1);
	cout << "Shablon" << endl;
	cout << "Original string is: " << s1 << endl;
	cout << "Encrypted string is: " << obj1.vercanum() << endl;
	cout << "Decrypted string is: " << obj1.gaxtnagrum() << endl << endl;

	//Toxer/Syuner
	string s2 = "abc abc a";
	ToxerSyuner obj2(s2, 3);
	cout << "Toxer/Syuner" << endl;
	cout << "Original string is: " << s2 << endl;
	cout << "Encrypted string is: " << obj2.vercanum() << endl;
	cout << "Decrypted string is: " << obj2.gaxtnagrum() << endl << endl;

	//RLE
	string s3 = "aaaaaaaaaaabbbNNNNNN";
	RLE obj3(s3);
	cout << "RLE" << endl;
	cout << "Original string is: " << s3 << endl;
	cout << "Encrypted string is: " << obj3.vercanum() << endl;
	cout << "Decrypted string is: " << obj3.gaxtnagrum() << endl << endl;
}
