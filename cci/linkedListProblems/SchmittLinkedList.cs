namespace Schmitt.LinkedList
{
  public class Node
  {
    public Node? next;
    public Object? data;
  }

  public class LinkedList
  {
    public LinkedList()
    {
      head = new Node();
    }

    private Node head;

    public void printAllNodes()
    {
      Node? current = head;
      while (current != null)
      {
        Console.WriteLine(current.data);
        current = current.next;
      }
    }

    public void Add(Object data)
    {
      Node toAdd = new Node();
      toAdd.data = data;
      Node current = head;
      current.next = toAdd;
    }
  }
}


