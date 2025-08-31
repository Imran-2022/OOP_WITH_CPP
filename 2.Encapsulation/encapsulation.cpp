#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    int marks; // hidden from outside

public:
    void setMarks(int m)
    {
        if (m >= 0 && m <= 100) // validation
            marks = m;
    }
    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student st;
    st.setMarks(30);
    cout<<st.getMarks()<<endl;
    return 0;
}