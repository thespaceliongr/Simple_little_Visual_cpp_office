//include headers
#include "default.h"
#include "menu.h"


//function char locale
    void chars(){
        //locale setting All UTF-8
        char* cpSettings = setlocale(LC_ALL, "en_US.utf8");
    }

	//function start
    void start(){      
    
    //create default folder
    system("mkdir myfiles");
    
    
    //cout strings start
      cout<<"\n\n\n\n\n";
      cout<<"\t\t\t ||||||||||||||||||||||||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t || Stavros Vourliotis ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||      2017-2020     ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||\t\t       ||";
      cout<<"\n\t\t\t ||||||||||||||||||||||||\n\n";
    }
