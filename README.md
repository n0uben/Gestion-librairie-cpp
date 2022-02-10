# TP C++ : Gestion de livraisons d'une librairie

Projet réalisé dans le cadre du DUT Informatique, à l’université de Lorraine
___

On souhaite écrire une application pour la gestion des livraisons de documents d'une librairie.
Tous les documents sont définis par :
- un titre : le titre du document qui est une chaîne de caractères
Les documents sont de deux types : les livres et les dictionnaires. A chaque livre est associé :
- un auteur : une chaîne de caractères.
Les dictionnaires sont des documents qui ont en plus un attribut supplémentaire :
- une langue : est une chaîne de caractères, "anglais", "allemand", "espagnol".

Les livres à leur tour, peuvent être des romans ou des manuels scolaires. Les romans ont éventuellement un prix littéraire (un entier 0,1,2, . . . ) et les manuels scolaires ont un niveau scolaire (un entier). Tous les objets en question ici (livres, dictionnaires, romans, manuel) doivent être manipulés en tant que documents.

Les frais de livraison sont établis de la manière suivante : 
- frais fixes d'un montant de 2 Euros pour tous les documents
- des frais particulier de 10 euros pour les dictionnaires.
- des frais de transport calculés de la manière suivante : distance ∗ prixunitaire. On suppose que le prix unitaire est égal à 0.05 par kilométre.

## 1. Définissez les classes nécessaires pour cette application. 
**Chacune de ces classes comporte :**<br>
(a) un constructeur qui permet d'initialiser toutes les variables d'instances<br>
(b) les accesseurs (getters), les modifieurs (setters)<br>
(c) la méthode afficher() qui affiche les attributs de chaque classe.<br>
(d) une méthode fraisLivraison() qui renvoie le coût des frais de livraison.<br>

## 2. Définissez la classe StockDocuments 
**Cette classe a pour but de gérer une collection de documents et qui comporte :**<br>
(a) un constructeur pour créer une collection vide de documents<br>
(b) une fonction permettant d'ajouter un document à la collection<br>
(c) une méthode afficher() qui affiche tous les documents du stock<br>
(d) une méthode fraisLivraison() qui renvoie le coût des frais de livraison du stock<br>

Dans cette question, on peut utiliser le type Vector de C++ pour stocker une collection.

## Afin de tester les classes qui précédent

**Définissez un programme qui permet d'afficher un bon de livraison pour les documents suivants :**
```
{
    ------------------------------------------------------
    Manuel: Titre :Dissertation et methodes, numen:234, Auteur:Rochefort et Dalie,Niveau:2
    Dictionnaire:Titre:Larousse anglais, numen:456, Langue:anglais
    Roman : Titre:Les contemplations, numen:765, Auteur:Victor Hugo, nbprix:8
    ------------------------------------------------------
    Frais Livraison pour une distance de 20km est : 19 Euros

}

```
