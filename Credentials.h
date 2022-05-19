#include <iostream>
#include <cstring>
using namespace std;

class Credentials public:uesr {
	protected:
		string userEmail;
		string userPassword;
	public:
		Credentials();
		void setEmail(string email);
    void setPassword(string pass);
		string getEmail();
		string getPassword();
	//	void displayPlaneDetails();		
};