# XORStringFinder
Command line UTF-8 String XOR brute forcer

## Usage
The program can be used in the following manner:  
` ./xor-findString.exe --hex "78 75 7c 7c 7f 30 67 7f 62 7c 74" `
or...
` ./xor-findString.exe --string idmmn!vnsme `

## Applications
String dumps from binaries can be saved to a file and each line of it fed into this program for easy discovery of any 'hidden' strings. The program loops through xor keys 1-256, as any keys above 256 become repeats when acting on UTF-8 characters. When using basic XOR encryption in your programs, remember to add or subtract a constant value after your XOR for an added layer of complexity (`(value ^ xor_key) + const_val`), which will often stop programs such as this one.
