# Définition des variables afin d'étre le plus réutilisable possibe

COMP = @g++
CPPFLAGS = -Wall -ansi -ggdb -std=c++11 -g $(INC)
PROBLEM = Problem_478B


#Autres constantes utiles commandes et message
ECHO = @echo
RM = @rm
MESSAGE = "Compilation terminée"
RUN = "Run de l'application"

# Définiton des régles de construction de l'éxecutable.

$(PROBLEM) : $(PROBLEM).cpp
	$(COMP) $(CPPFLAGS) $< -o $(PROBLEM)
	$(ECHO) $(MESSAGE)

run : $(PROBLEM)
	./$(PROBLEM) < testin.txt

clean : 
	RM -fr $(PROBLEM).dSYM $(PROBLEM)