Corrija a defini��o no item d) da quest�o anterior para torn�-la mais confi�vel.

// ex 6
d)
#define NEW(x) x + 5
y = NEW(y); // valido
berg = NEW(berg) * lob; // invalido (x + 5)
est = NEW(berg) / NEW(y); // invalido (x + 5)
nilp = lob * NEW(-berg); // invalido (x + 5)
//

// Corre��o
#define NEW(x) ((x) + 5)

