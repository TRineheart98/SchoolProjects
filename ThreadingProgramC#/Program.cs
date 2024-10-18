
int threadCount = 0;

Thread t = new Thread(() => Write("Hello, this is Tyler Rineheart!"));
t.Start();
t.Join();  

Thread t2 = new Thread(() => Write("Hello, this is NSU!"));
t2.Start();
t2.Join();

Console.WriteLine(); 
Console.WriteLine("Total number of threads used: " + threadCount);

void Write(string message)
{
    try
    {
        threadCount++;
        Console.WriteLine($"Thread {Thread.CurrentThread.ManagedThreadId}: {message}");
    }
    catch (Exception ex)
    {
        Console.WriteLine($"Error in thread {Thread.CurrentThread.ManagedThreadId}: {ex.Message}");
    }
}