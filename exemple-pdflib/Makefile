.PHONY: clean distclean

SOURCES = exemple.cpp pdflib.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Utiliser la variable CXX_LDFLAGS pour définir
# le répertoire contenant libpdf.*
# Exemple : CXX_LDFLAGS = -L/home/dupont/local/lib
CXX_LDFLAGS =

all: exemple

exemple: $(OBJECTS)
	g++ $(CXX_LDFLAGS) -o exemple $(OBJECTS) -lpdf 



# Règles de nettoyage
clean:
	-rm $(OBJECTS) *~

distclean: clean
	-rm exemple exemple.pdf
