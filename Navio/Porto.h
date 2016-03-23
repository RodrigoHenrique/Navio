#ifndef PORTO_H
#define PORTO_H
#include <string>
#include <vector>
#include <iostream>

using std::ostream;
using std::vector;
using std::string;

class Porto
{
	friend ostream &operator<<(ostream &,const Porto &);
	
public:
	Porto(const string &);
	Porto(const Porto &);
	Porto();
	~Porto();
	
	bool operator==(const Porto &) const;
    bool operator!=(const Porto &) const;
	//const Porto &operator=(const Porto &); Esse também dá erro.
	
	string getNomePorto() const;
	
private:
	string nomePorto;
	
	
};

#endif // PORTO_H