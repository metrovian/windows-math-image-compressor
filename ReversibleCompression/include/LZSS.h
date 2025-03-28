#pragma once
#include "BMP.h"

class LZSS : public BMP
{
protected: /* data */
	uint64_t wsi = 4096;
	uint64_t bsi = 16;

public: /* constructor */
	LZSS(uint64_t _wsi = 4096, uint64_t _bsi = 16) : wsi(_wsi), bsi(_bsi) {};

public: /* compression */
	virtual bool decode(const std::string& _fname);
	virtual bool encode(const std::string& _fname);
};