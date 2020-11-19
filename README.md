# CIS4930-2b
swag

here is a link to the repo for the code that I am testing - https://github.com/steven-schronk/C-Programming-Examples.git\

in this repo, there is a program called primes.c\
this is what i will be testing my assertions on.\


after asserting for primes-broken.c: smack --timing-annotations --unroll 10 primes.c\
SMACK program verifier version 2.6.0
/usr/local/share/smack/lib/smack.c(45,1): This assertion can fail
Execution trace:
    /usr/local/share/smack/lib/smack.c(528,3):	Thread=1  errno_global = 0
    /usr/local/share/smack/lib/smack.c(528,3):	Thread=1  
    /usr/local/share/smack/lib/smack.c(533,1):	Thread=1  
    primes.c(12,2):	Thread=1  
    primes.c(12,2):	Thread=1  
    primes.c(12,2):	Thread=1  smack:entry:main = -8258
    primes.c(12,2):	Thread=1  
    primes.c(12,2):	Thread=1  
    primes.c(12,2):	Thread=1  
    primes.c(12,2):	Thread=1  
    primes.c(13,2):	Thread=1  
    primes.c(15,2):	Thread=1  
    primes.c(0,0):	Thread=1  
    primes.c(15,16):	Thread=1  
    primes.c(15,14):	Thread=1  
    primes.c(15,2):	Thread=1  
    primes.c(17,6):	Thread=1  
    primes.c(17,6):	Thread=1  CALL isPrime
    primes.c(26,8):	Thread=1  
    primes.c(26,8):	Thread=1  isPrime:arg:n = 2
    primes.c(26,8):	Thread=1  
    primes.c(26,8):	Thread=1  n = 1
    primes.c(27,2):	Thread=1  
    primes.c(0,0):	Thread=1  
    primes.c(27,12):	Thread=1  
    primes.c(27,2):	Thread=1  
    primes.c(32,2):	Thread=1  
    primes.c(32,2):	Thread=1  CALL __VERIFIER_assert
    /usr/local/share/smack/lib/smack.c(247,29):	Thread=1  
    /usr/local/share/smack/lib/smack.c(247,29):	Thread=1  __VERIFIER_assert:arg:x = 0
    /usr/local/share/smack/lib/smack.c(247,29):	Thread=1  
    /usr/local/share/smack/lib/smack.c(45,3):	Thread=1  
    /usr/local/share/smack/lib/smack.c(45,3):	Thread=1  
    primes.c(32,2):	Thread=1  RETURN from __VERIFIER_assert
    primes.c(17,6):	Thread=1  RETURN from isPrime
    primes.c(17,6):	Thread=1  

SMACK found an error.

after asserting for primes-fixed.c: smack --timing-annotations --unroll 10 primes.c\
SMACK program verifier version 2.6.0\
SMACK found no errors with unroll bound 10.\
