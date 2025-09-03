#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void Display()=0; //do-nothing function -->pure virtual function 
};
class CWHvideo : public CWH
{
    float videolenth;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolenth = vl;
    }
    void Display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings:  " << rating << "out of 5 stars " << endl;
        cout << "Lenth of this video is " << videolenth << "Minutes " << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void Display()
    {
        cout << "This is an amazing text tutorial  with title " << title << endl;
        cout << "Ratings of this text tutorial:  " << rating << "out of 5 stars " << endl;
        cout << "no of words in this text tutorial is: " << words << "Words " << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "shubham chauhan";
    vlen = 4.56;
    rating = 4.5;
    CWHvideo djvideo(title, rating, vlen);
    // djvido.Display();

    // for code with harry text
    title = "shubham chauhan textual";
    words = 456;
    rating = 3.5;
    CWHtext djtext(title, rating, words);
    // djtext.Display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->Display();
    tuts[0]->Display();

    return 0;
}

// rules of virtual function
// 1. they cannot br static
// 2. they are accessed by object pointers
// 3.virtual function can be a friend of other class
// 4. A virtual function in base class might not br used
// 5.if a virtual function is defined in a base class, there is no necessity of redefining it in the derived class 
