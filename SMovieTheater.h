
#include <iostream>
#include <string>

const int g_kArraySize = 8;				// number of movies that will be available at our theater


using namespace std;

class Movie
{
private:
	string movie_name;
	int tickets_available;
	double ticket_price;
public:
	Movie();
	Movie(string my_movie_name, int my_tickets_available, double my_ticket_price);
	~Movie();

	string get_movie_name();
	int get_tickets_available();
	double get_ticket_price();
	void set_movie_name(string new_movie_name);
	void set_tickets_available(int new_tickets_available);
	void set_ticket_price(double new_ticket_price);

	double PurchaseTicket(int new_tickets_available);
	void Display();
    Movie operator+(const Movie& m);
};


class MovieTicketMaster
{
private:
	Movie * p_MovieList;
	string theater_name;
	string theater_location;
public:
	MovieTicketMaster();
	MovieTicketMaster(string my_theater_name, string my_theater_location);
	~MovieTicketMaster();
	void Init(Movie * p_my_MovieList, int array_size);
	void Run();
	void DisplayMenu();
	void ViewMovies();
	Movie * SearchMovie();
	Movie * FindMovie(string find_movie_name);
	void PurchaseTicket();
};
