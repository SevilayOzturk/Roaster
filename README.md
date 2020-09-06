# Roaster

This program will store roster of most popular videos with kittens. For each kitten we will store: name, color and cuteness score. A roster can include at most 10 kittens.
(1) Prompt the user to input five kittens info: A kitten's name, it's color and score. Store kitten names in one string array, colors in another string array and score in the third int array. Output these arrays (i.e., output the roster).

Ex:
Enter kitten 1's name:
Willow
Enter kitten 1's color:
white
Enter kitten 1's cuteness score:
10
Enter kitten 2's name:
Addie
Enter kitten 2's color:
grey
Enter kitten 2's cuteness score:
42
Enter kitten 3's name:
Pixie
Enter kitten 3's color:
black
Enter kitten 3's cuteness score:
99
Enter kitten 4's name:
Ella
Enter kitten 4's color:
white
Enter kitten 4's cuteness score:
76
Enter kitten 5's name:
Lola
Enter kitten 5's color:
blue
Enter kitten 5's cuteness score:
12
ROSTER
Kitten 1 -- Name: Willow, Color: white, Score: 10
Kitten 2 -- Name: Addie, Color: grey, Score: 42
...
(2) Implement a menu of options for a user to modify the roster. Each option is represented by a single character. The program initially outputs the menu, and outputs the menu after a user chooses an option. The program ends when the user chooses the option to Quit.

Ex:
MENU
a - Add kitten
d - Remove kitten
u - Update kitten color and cuteness score
r - Output kittens above a rating
o - Output roster
q - Quit
Choose an option:
(3) Implement the "Output roster" menu option.

Ex:
ROSTER
Kitten 1 -- Name: Willow, Color: white, Score: 10
Kitten 2 -- Name: Addie, Color: grey, Score: 42
...
(4) Implement the "Add kitten" menu option. If the user chooses this option and the roster is full, print the following error message:
Impossible to add new kitten: roster is full.
If the roster is not full, prompt the user for a new kitten's name, color and score, and append the values to the two arrays.

Ex:
Enter a new kitten's name:
Alladin
Enter the kittens's color:
white
Enter the kittens's cuteness score:
82
(5) Implement the "Remove kitten" menu option. If the user chooses the option when the roster is empty, immediately print the message:
Can not delete from empty roster.
If the roster is not empty, prompt the user for a kitten's name. Remove the kitten from the roster (delete the responding color and cuteness score), paying attention not to leave unused spaces in the two arrays.

Ex:
Enter a kitten's name:
None
If the given name is not found, inform the user:
Error! Kitten None not found.
(6) Implement the "Update kitten color and cuteness score" menu option. Prompt the user for a kitten's name Prompt again for a new color and score for the kitten, and then look up and change that kitten's data.

Ex:
Enter a kitten name:
Alladin
Enter a new color for the kitten:
brown
Enter a new cuteness score for the kitten:
98
In this case, if the given name is not found, no further action is taken (note that the format of the program requires the user to enter color and score either way).
(7) Implement the "Output kittens above a rating" menu option. Prompt the user for a rating. Print the position, name, color and cuteness score for all kittens with score equal or above the entered value.

Ex:
Enter a rating:
50
ABOVE 50
Kitten 3 -- Name: Pixie, Color: black, Score: 99
Kitten 4 -- Name: Ella, Color: white, Score: 76
Kitten 6 -- Name: Alladin, Color: brown, Score: 98
...
If no kittens are found above a given rating, the program will simply produce an empty list.
