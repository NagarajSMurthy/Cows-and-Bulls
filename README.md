# Cows-and-Bulls



![cowsandbulls](https://user-images.githubusercontent.com/35525360/51375549-2d0f5000-1b2c-11e9-9ff7-f8e9eea381d7.PNG)


Cows and Bulls is a popular number guessing game that challenges our analytical abilities. Here is how it is played:
- The game involves a broker and a player. The broker chooses a random 3-digit number such that no two digits are the same and there are no zeroes in the number. For example, the random number could be 754 but 755 isn’t allowed because the digit 5 is repeated twice.
#### Let us assume for this example, that the broker chose the number 754.
- Once the random number is chosen, the player can begin the game. The player starts by making a random guess of a 3-digit number (with no repeating digits of course). And the broker records the guess and replies with how many cows or bulls or both exist in the number guessed. 

- A cow is said to exist when one or more of the digits in the guessed 3-digit number exists in the actual number set by the broker, but the position of the digit is incorrect. For example, if the guessed number is 127, the broker would reply ‘1 Cow’ meaning that the digit 7 exists in the actual number but its position is incorrect. If the player had guessed 527, the broker would reply ‘2 Cows’ because digits 5 and 7 are correctly guessed but their positions are incorrect. 

- A bull is said to exist when both the digit and its position are correctly guessed. For example, if the player had guessed 723, the broker would reply ‘1 Bull’ because the digit 7 is both correct and is in the right position. If the guess was 734, the broker would reply ‘2 Bulls’ because digits 7 and 4 are in the right positions.
Similarly, a combination of bulls and cows can also exist. For example, if the guess were to be 741, the broker would reply ‘1 Bull and 1 Cow’ (7 being the bull digit and 4 being the cow digit). If the guess were to be 745, the broker would reply ‘1 Bull, 2 Cows’. 

Also, if none of the digits are right, the broker will reply 'no cows, no bulls' . When the player guesses the correct three digit number (Three Bulls), he wins. 

In this program, the computer which generates the three digit random number is the broker. Go ahead and give it a try. Have fun.  
