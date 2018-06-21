class MyBook : Book
{   protected:
    int price;
    public:
    MyBook(string Title, string Author, int Price):Book(Title,Author){
      //  title=Title;
      //  author=Author;
        //this->
        price=Price;
    }
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
