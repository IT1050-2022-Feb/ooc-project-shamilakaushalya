#include <iostream>

int main() {
  class Language{
    private:
        int language_id;
	int course_id;
        std ::string language_name;
        
    public:
        void getlanguage();
        void editlanguage();
        void managelanguage();
}

Language:language(){
}

Language::language(int langID,std ::string langname )
{
    lesson_id = langID;
    lesson_name= langname;
  
}

void Language::getlanguage(){   
}
void Language::editlanguage(){   
}
void Language::managelanguage(){   
}

Language::~language(){}
    
}