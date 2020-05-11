#ifndef _PROXY_IMAGE_H_
#define _PROXY_IMAGE_H_

#include <string>
#include <iostream>
#include "real_image.h"

class ProxyImage: public Image {
private:
	std::string m_filename;
	Image* m_image;
	
public:
	ProxyImage(const std::string &filename)
		:m_filename(filename)
		,m_image(nullptr)
	{
		
	}

	
	void DisplayImage() override
	{
		if(m_image == nullptr) {
			m_image = new RealImage(m_filename);
		}
		m_image->DisplayImage();
	}

};

#endif // _PROXY_IMAGE_H_
