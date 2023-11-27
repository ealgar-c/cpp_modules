#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

void	ft_error(std::string error)
{
	std::cout << "error: " << error << std::endl;
}

void	mod_str(std::string &str, std::string to_search, std::string replace)
{
	int	j = -1;

	while ((j = str.find(to_search, j + 1)) != -1)
		str.erase(j, to_search.length()).insert(j, replace);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		errno = 22;
		return (perror("Bad number of arguments"), 1);
	}
	std::ifstream infile;
	infile.open(argv[1]);
	if (infile.fail())
		return (perror(argv[1]), 1);
	std::string outfilename;
	outfilename.append(argv[1]).append(".replace");
	std::ofstream outfile;
	outfile.open(outfilename);
	std::string str;
	std::string to_search(argv[2]);
	std::string replace(argv[3]);
	while (infile.good())
	{
		std::getline(infile, str);
		mod_str(str, to_search, replace);
		outfile << str << std::endl;
	}
	infile.close();
	outfile.close();
	
}
