

struct  _RCC
{
	int CR;
	int CFGR;
	int CIR;
	int APB2RSTR;
	int APB1RSTR;
	int AHBENR;
	int APB2ENR;
	int APB1ENR;
	int BDCR;
	int CSR;
};
#define RCC ((volatile struct _RCC *)0x40021000)


struct  _GPIOA
{
	int CRL;
	int CRH;
	int IDR;
	int ODR;
	int BSRR;
};
#define GPIOA ((volatile struct _GPIOA *)0x40010800)

struct _USART
{
	int SR;
	int DR;
	int BRR;
	int CR1;
	int CR2;
	int CR3;
};
#define USART1 ((volatile struct _USART *)0x40013800)
