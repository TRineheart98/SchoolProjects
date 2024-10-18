
Console.WriteLine("Who is the coolest person in Harringtons advanced programming class?");
string input = Console.ReadLine();

if(IsTylerOrRineheart(input))
{
    Console.WriteLine("Thats right!");
}
else
{
    Console.WriteLine("No thats not quite correct but they are probably pretty cool aswell!");
}

static bool IsTylerOrRineheart(string name) =>
    name.ToUpper() is var upper && (upper == "TYLER" || upper == "RINEHEART");

