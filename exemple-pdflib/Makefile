.PHONY: clean distclean

SOURCES = exemple.cpp pdflib.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Utiliser la variable CXX_LDFLAGS pour d�finir
# le r�pertoire contenant libpdf.*
# Exemple : CXX_LDFLAGS = -L/home/dupont/local/lib
CXX_LDFLAGS =

all: exemple

exemple: $(OBJECTS)
	g++ $(CXX_LDFLAGS) -o exemple $(OBJECTS) -lpdf 



# R�gles de nettoyage
clean:
	-rm $(OBJECTS) *~

distclean: clean
	-rm exemple exemple.pdf
