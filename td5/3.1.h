class List{
 public:
  struct Element{
    double value;
    Element* prev;
    Element* next;
  };
  int NumElements();
  List::Element* Head() const;
  List::Element* Tail() const;
  void Remove(Element* element);
  Element* InsertNewElementAfter(double value, Element* position);
  Element* Find(double d);
  Element* InsertElementAfter(Element* n, Element* position);
  void InsertListAfter(const List* other, Element* position);
 private :
  Element* element;
};


