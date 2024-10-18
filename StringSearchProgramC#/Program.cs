
string empty = "";
string harringtonsString = "Console.WriteLine(empty == \"\");              // True\r\nConsole.WriteLine(empty == string.Empty);    // True\r\nConsole.WriteLine(empty.Length == 0);        // True\r\n//Because strings are reference types, they can also be null:\r\nstring nullString = null;\r\nConsole.WriteLine(nullString == null);        // True\r\nConsole.WriteLine(nullString == \"\");          // False\r\nConsole.WriteLine(string.IsNullOrEmpty(nullString));\t// True\r\nConsole.WriteLine(nullString.Length == 0);             // \r\n";
string tylersString = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z - a b c d e f g h i j k l m n o p q r s t u v w x y z";

Console.WriteLine("The empty string contains: ");
SearchString(empty); //Function call to the empty string
Console.WriteLine("The harrington string contains: ");
SearchString(harringtonsString); //Function call to harringtonsString
Console.WriteLine("The tyler string contains: ");
SearchString(tylersString); // Function call to tylersString

void SearchString(string theString) //My function for counting how many letters are capitalized within the string.
{
    int upperCase = 0;
    for (int i = 0; i < theString.Length; i++) //Loop to go through the string.
    {
        if (char.IsUpper(theString[i])) upperCase++; //Counter to increment upperCase variable that tracks uppercase letters.
    }
    Console.WriteLine(upperCase + " Uppercase letters. \n"); //Output for function 
}