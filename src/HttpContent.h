// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Aspose" file="ApiBase.cs">
//   Copyright (c) 2020 Aspose.Slides for Cloud
// </copyright>
// <summary>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

#ifndef _HttpContent_H_
#define _HttpContent_H_

#include "defines.h"
#include "IHttpBody.h"

#include <memory>

#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

class  HttpContent : public IHttpBody
{
public:
	ASPOSE_DLL_EXPORT HttpContent();
	ASPOSE_DLL_EXPORT virtual ~HttpContent();

	ASPOSE_DLL_EXPORT virtual utility::string_t getContentDisposition();
	ASPOSE_DLL_EXPORT virtual void setContentDisposition( const utility::string_t& value );

	ASPOSE_DLL_EXPORT virtual utility::string_t getName();
	ASPOSE_DLL_EXPORT virtual void setName( const utility::string_t& value );

	ASPOSE_DLL_EXPORT virtual utility::string_t getFileName();
	ASPOSE_DLL_EXPORT virtual void setFileName( const utility::string_t& value );

	ASPOSE_DLL_EXPORT virtual utility::string_t getContentType();
	ASPOSE_DLL_EXPORT virtual void setContentType( const utility::string_t& value );

	ASPOSE_DLL_EXPORT virtual std::shared_ptr<std::istream> getData();
	ASPOSE_DLL_EXPORT virtual void setData( std::shared_ptr<std::istream> value );

	ASPOSE_DLL_EXPORT virtual void writeTo( std::ostream& stream );

protected:
    // NOTE: no utility::string_t here because those strings can only contain ascii
    utility::string_t m_ContentDisposition;
    utility::string_t m_Name;
    utility::string_t m_FileName;
    utility::string_t m_ContentType;
    std::shared_ptr<std::istream> m_Data;
};

}
}

#endif /* _HttpContent_H_ */
