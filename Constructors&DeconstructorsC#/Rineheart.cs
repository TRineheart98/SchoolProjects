
using System.Runtime.Serialization;

var r = new Rineheart("Tyler", "Rineheart", 25); //Make a call to the constructor
r.Print();
Console.WriteLine(); //Spacing

var rine = new Rineheart("FirstName", "LastName", 0); //Calling deconstructor
(string firstName, string lastName, int age) = rine; //Deconstructing
Console.WriteLine(firstName + " " + lastName + " " + age); //Output the deconstruction
Console.WriteLine(); //Spacing

r.BankBalance = 1000; //Setting property value
Console.WriteLine("Bank Balance = " + r.BankBalance); //Outputting Property
Console.WriteLine(); //Spacing

var r2 = new Rineheart("Fenley", "Rineheart", 2);// Instance of class
r2.Print();
Console.WriteLine(); //Spacing

var r3 = new Rineheart<string>("Tyler", "Rineheart"); //Generics class

public class Rineheart //Define my class
{
    public readonly string FirstName, LastName; //Read only for Deconstructor
    public readonly int Age; //Read only for Deconstructor
    public Rineheart(string firstName, string lastName, int age) //Define the constructor
    {
        FirstName = firstName;
        LastName = lastName;
        Age = age;
    }

    public void Deconstruct(out string firstName, out string lastName, out int age) //Deconstructor defined
    {
        firstName = FirstName;
        lastName = LastName;
        age = Age;
    }

    decimal bankBalance; //Private backing field for property
    public decimal BankBalance //Public property for bankBalance
    {
        get {return bankBalance;} set {bankBalance = value;}
    }
      
    public void Print() => Console.WriteLine(FirstName + " " + LastName + " " + Age); //Output for class
}

public class Rineheart<T> //Generics class
{
    public Rineheart(string firstName, string lastName)
    {
        Console.WriteLine(firstName + " " + lastName); //This makes the generics class automatically print
    }

}


