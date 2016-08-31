Corrija a definição no item d) da questão anterior para torná-la mais confiável.

// ex 6
d)
#define NEW(x) x + 5
y = NEW(y); // valido
berg = NEW(berg) * lob; // invalido (x + 5)
est = NEW(berg) / NEW(y); // invalido (x + 5)
nilp = lob * NEW(-berg); // invalido (x + 5)
//

// Correção
#define NEW(x) ((x) + 5)

