

#include "huaweicloud/gaussdb/v3/model/CheckResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckResourceRequest::CheckResourceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckResourceRequest::~CheckResourceRequest() = default;

void CheckResourceRequest::validate()
{
}

web::json::value CheckResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckResourceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckResourceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckResourceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckResourceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckResourceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CheckResourceRequestBody CheckResourceRequest::getBody() const
{
    return body_;
}

void CheckResourceRequest::setBody(const CheckResourceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


