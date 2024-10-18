using System;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

class TheFileReaderArraySplit
{
    static void Main()
    {
        try
        {
            string filePath = "textFile.txt";
            string[] readLines = File.ReadAllLines(filePath);
            string firstLine = readLines[0];

            var words = Regex.Split(firstLine, @"\W+|\s+");

            int wordsOverFive = words.Count(word => word.Length > 5);

            Console.WriteLine("Amount of words over 5 in length = " + wordsOverFive);
        }
        catch (FileNotFoundException ex)
        {
            Console.WriteLine($"Error: File not found. Details: {ex.Message}");
        }
    }
}