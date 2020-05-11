#ifndef _REAL_IMAGE_H_
#define _REAL_IMAGE_H_

#include <string>
#include <iostream>
#include "image.h"

class RealImage: public Image {
private:
	std::string m_filename;

	void loadImageFromDisk()
	{
		std::cout << "Loading " + m_filename << std::endl;
		
	}
	
public:
	RealImage(const std::string &filename):m_filename(filename)
	{
		loadImageFromDisk();
	}

	
	void DisplayImage() override
	{
		std::cout << "Displaying " + m_filename << std::endl;
	}
};

#endif // _REAL_IMAGE_H_
