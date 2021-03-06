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

#ifndef _ApiException_H_
#define _ApiException_H_

#include "defines.h"

#include <cpprest/details/basic_types.h>
#include <cpprest/http_msg.h>

namespace asposeslidescloud {
namespace api {

class  ApiException
    : public web::http::http_exception
{
public:
	ASPOSE_DLL_EXPORT ApiException(int errorCode, const utility::string_t& message, std::shared_ptr<std::istream> content = nullptr);
	ASPOSE_DLL_EXPORT ApiException(
		int errorCode,
		const utility::string_t& message,
		std::map<utility::string_t,
		utility::string_t>& headers,
		std::shared_ptr<std::istream> content = nullptr);
	ASPOSE_DLL_EXPORT virtual ~ApiException();

	ASPOSE_DLL_EXPORT std::map<utility::string_t, utility::string_t>& getHeaders();
	ASPOSE_DLL_EXPORT std::shared_ptr<std::istream> getContent() const;

protected:
    std::shared_ptr<std::istream> m_Content;
    std::map<utility::string_t, utility::string_t> m_Headers;
};

}
}

#endif /* _ApiBase_H_ */
