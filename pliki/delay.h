#ifndef DELAY_H
#define	DELAY_H

#define SYSTEMCLOCK 8000000 /*SYSCLK zegar systemowy*/

   extern void __attribute__((used)) delayUs(unsigned int usec);
   extern void __attribute__((used)) delayMs(unsigned int usec);

#endif	/* DELAY_H */