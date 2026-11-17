#include "Font.h"
#include "Image.h"

using namespace Sexy;

_Font::_Font()
{	
	mAscent = 0;
	mAscentPadding = 0;
	mHeight = 0;
	mLineSpacingOffset = 0;
}

_Font::_Font(const _Font& theFont) :
	mAscent(theFont.mAscent),
	mAscentPadding(theFont.mAscentPadding),
	mHeight(theFont.mHeight),
	mLineSpacingOffset(theFont.mLineSpacingOffset)
{
}

_Font::~_Font()
{
}

int _Font::StringWidth(const SexyString&)
{
	return 0;
}


int _Font::CharWidth(char32_t theChar)
{
	SexyString aString(1, theChar);
	return StringWidth(aString);
}

int _Font::CharWidthKern(char32_t theChar, char32_t)
{
	return CharWidth(theChar);
}

void _Font::DrawString(Graphics*, int, int, const SexyString&, const Color&, const Rect&){}

