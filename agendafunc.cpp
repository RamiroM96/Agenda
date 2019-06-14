#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <list>
//using namespace std;


class Contact
{
	private:
		std::string m_name;
		std::string m_number;
	public:
		/*Contact (std::string, int);*/
        Contact ();
        void setName(std::string name);
        void setNumber(std::string number);
        std::string getName();
        std::string getNumber();

};

Contact::Contact ()
{  std::cout <<"contact constructor"<< std::endl;
}

void Contact::setName(std::string name)
{
    m_name=name;
}

void Contact::setNumber(std::string number)
{
    m_number=number;
}

std::string Contact::getName ()
{
	return m_name;
}

std::string Contact::getNumber ()
{
	return m_number;
}


class Phonebook
{
	private:
		std::list<Contact*> contacts;
	public:
		Phonebook();
		void addContact(Contact* contact);
		void listContacts();
};

Phonebook :: Phonebook()
{

	std::cout << "<<---------------------<- PHONEBOOK ->--------------------->>"<< std::endl;
}

void Phonebook::addContact(Contact* contact)
{
    contacts.push_back(contact);
}

void Phonebook::listContacts()
{
        for(Contact* contact:contacts)
        {
        std::cout << "Nombre:  " << contact->getName() << std::endl;
        std::cout << "Telefono:  " << contact->getNumber() << std::endl;
        }
}

int main()
{
    Contact* contact = new Contact();
    contact -> setName ("diego");
    contact -> setNumber("23432423");
    Phonebook* phonebook = new Phonebook();
    phonebook->addContact(contact);
    phonebook->listContacts();
    delete contact;
    delete phonebook;
    return 0;
}
