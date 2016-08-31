6.
Considere os grupos de uma ou mais diretivas seguidas pelos códigos que as utilizam
abaixo. Qual é o código resultante em cada caso? É um código válido? Assuma que as
variáveis foram declaradas.
a)
#define KPH 95  /* Km por hora */
dist = KPH * tempo; // valido
b)
#define METROS 4
#define POD METROS + METROS
plort = METROS * POD; // invalido POD (METROS + METROS)
c)
#define SEIS = 6;
num = SEIS; // valido
d)
#define NEW(x) x + 5
y = NEW(y); // valido
berg = NEW(berg) * lob; // invalido (x + 5)
est = NEW(berg) / NEW(y); // invalido (x + 5)
nilp = lob * NEW(-berg); // invalido (x + 5)
