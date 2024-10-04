public class Program
{
  static void Main(string[] args)
  {
    var linkedList = new Schmitt.LinkedList.LinkedList();
    for (int i = 0; i < 20; i++)
    {
      linkedList.Add(i);
    }

    linkedList.printAllNodes();
  }
}
