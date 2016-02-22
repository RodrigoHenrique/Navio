#ifndef PORTO_H
#define PORTO_H
#include <string>
#include <vector>

using std::vector;
using std::string;

class Porto
{
public:
	Porto(const string &);
	Porto();
	~Porto();
	string getNomePorto() const;
	
private:
	string nomePorto;
	
};

#endif // PORTO_H
