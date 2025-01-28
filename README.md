# XORStringFinder
Command line UTF-8 String XOR brute forcer

## Usage
The program can be used in the following manner:  
` ./xor-findString.exe --hex "78 75 7c 7c 7f 30 67 7f 62 7c 74" `
or...
` ./xor-findString.exe --string idmmn!vnsme `

## Applications
String dumps from binaries can be saved to a file and each line of it fed into this program for easy discovery of any 'hidden' strings. The program loops through xor keys 1-256, as any keys above 256 become repeats when acting on UTF-8 characters. When using basic XOR encryption in your programs, remember to add or subtract a constant value after your XOR for an added layer of complexity (`(value ^ xor_key) + const_val`), which will often stop programs such as this one.

## Example Output

```
./xor-findString.exe --string idmmn!vnsme
Starting search on input: idmmn!vnsme
Possible plaintext (key = 1): hello world
Possible plaintext (key = 2): kfool#tlqog
Possible plaintext (key = 3): jgnnm"umpnf
Possible plaintext (key = 6): obkkh'phukc
Possible plaintext (key = 7): ncjji&qitjb
Possible plaintext (key = 11): boffe*}exfn
Possible plaintext (key = 20): }pyyz5bzgyq
Possible plaintext (key = 28): uxqqr=jroqy
Possible plaintext (key = 29): typps<ksnpx
Possible plaintext (key = 30): wzssp?hpms{
Possible plaintext (key = 31): v{rrq>iqlrz
Possible plaintext (key = 64): )$--.a6.3-%
Possible plaintext (key = 66): +&//,c4,1/'
Possible plaintext (key = 67): *'..-b5-0.&
Possible plaintext (key = 68): - ))*e2*7)!
Possible plaintext (key = 69): ,!((+d3+6(
Possible plaintext (key = 70): /"++(g0(5+#
Possible plaintext (key = 71): .#**)f1)4*"
Possible plaintext (key = 72): !,%%&i>&;%-
Possible plaintext (key = 73):  -$$'h?':$,
Possible plaintext (key = 74): #.''$k<$9'/
Possible plaintext (key = 75): "/&&%j=%8&.
Possible plaintext (key = 76): %(!!"m:"?!)
Possible plaintext (key = 77): $)  #l;#> (
Possible plaintext (key = 78): '*## o8 =#+
Possible plaintext (key = 79): &+""!n9!<"*
Possible plaintext (key = 80): 94==>q&>#=5
Possible plaintext (key = 81): 85<<?p'?"<4
Possible plaintext (key = 82): ;6??<s$<!?7
Possible plaintext (key = 83): :7>>=r%= >6
Possible plaintext (key = 84): =099:u":'91
Possible plaintext (key = 85): <188;t#;&80
Possible plaintext (key = 86): ?2;;8w 8%;3
Possible plaintext (key = 87): >3::9v!9$:2
Possible plaintext (key = 88): 1<556y.6+5=
Possible plaintext (key = 89): 0=447x/7*4<
Possible plaintext (key = 90): 3>774{,4)7?
Possible plaintext (key = 91): 2?665z-5(6>
Possible plaintext (key = 92): 58112}*2/19
```
