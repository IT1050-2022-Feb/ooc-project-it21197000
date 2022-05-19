#include "Credentials.h"
#include <iostream>
#include <cstring>
using namespace std;

Credentials::Credentials(){
	
}
void Credentials::setEmail(string email){
  userEmail=email;
}
void Credentials::setPassword(string pass){
	userPassword=pass;
}
string Credentials::getEmail(){
	return userEmail;
}
string Credentials::getPassword(){
	return userPassword;
}