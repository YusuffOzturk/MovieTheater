
#include "SMovieTheater.h"


int main ()
{
    Movie movie_objects[g_kArraySize];

    MovieTicketMaster * p_MovieTicketMaster = new MovieTicketMaster ("Akasya AVM","Acıbadem, Istanbul");
    p_MovieTicketMaster->Init(movie_objects, g_kArraySize);
    p_MovieTicketMaster->Run();

    delete p_MovieTicketMaster;
    return 0;
}
