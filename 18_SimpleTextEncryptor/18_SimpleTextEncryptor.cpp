/*
* This program demonstrates a simple Caesar cipher for encrypting and decrypting text.
* It shifts each character in the text by a specific key to perform the encryption.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a line of text.
string ReadText(string Message)
{
    string Text;
    cout << Message << "\n";
    getline(cin, Text);
    return Text;
}

// Encrypts text using a Caesar cipher by shifting each character by an encryption key.
string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}

// Decrypts text by shifting each character back by the same encryption key.
string DecryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

int main()
{
    const short EncryptionKey = 2;
    string TextAfterEncryption, TextAfterDecryption;

    string Text = ReadText("Please enter text to encrypt:");

    // Encrypt the original text
    TextAfterEncryption = EncryptText(Text, EncryptionKey);

    // Decrypt the encrypted text to get the original text back
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0;
}