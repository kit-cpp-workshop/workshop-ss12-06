# Workshop 08. Juni 2012

## Inhalt

- forward declarations
- friends, friendship
- operator overloading


### forward declarations

Differenzierung declaration vs. definition.
Ist nötig, um in Deklarationen z.B. von member functions ringförmige Abhängigkeiten aufzulösen (z.B. A benötigt B und B benötigt A).


### friends, friendship

member access specifiers (public, protected, private) schützen die eigene Klasse. Mit friendship gibt man bestimmten anderen Klassen oder Funktionen Zugriff auf die eigenen geschützten members.


### operator overloading

Ist meist nur syntactical sugar (schönere Schreibweise), dient aber auch der Intuitivität, Generalität (templates!) und in einigen Fällen bietet es auch Mehrwert.
Mit operator overloading kann man für eigene Klassen Operatoren definieren, etwa:

    class MyClass { /* ... */ };
    MyClass a;
    MyClass b;
    MyClass result = a + b;


### Folien zum Vortrag

Die Vortragsfolien stehen als [PDF](URL) zum Download bereit. Außerdem liegt der LaTeX-Quellcode zu den Folien im Ordner `slides`.

###Screencast

Ein Screencast des Vortrags wird nach dem Workshop an dieser Stelle verlinkt.

## Aufgaben

Sendet, nachdem ihr alle Aufgaben abgearbeitet habt, einen Pull-Request an das Workshop-Repository. Stellt sicher, dass ihr vorher alle eure Änderungen in euren Fork übertragen habt. Nennt euren Workshop-Betreuer im Text des Pull-Requests, einer der Betreuer (bevorzugt der genannte) wird dann eure Lösungen durchsehen, kommentieren und nach Abschluss des Reviews den Pull-Request als abgelehnt markieren.


### Aufgabe 1: friends

Aufgabenbeschreibung


### Aufgabe 2: Schachprogramm

Das Schach-Programm sollte bis zum Workshop nächste Woche (15.6.) fertig sein.

### Bonusaufgabe: Project Euler

Falls du früher fertig bist oder einfach nur Lust auf mehr hast, schau dich mal bei [Project Euler](http://projecteuler.net/) um und such dir eine Aufgabe aus. Lade sie genau wie die beiden anderen Aufgaben hoch.
