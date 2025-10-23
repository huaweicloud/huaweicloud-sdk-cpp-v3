

#include "huaweicloud/rds/v3/model/CheckWeakpwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CheckWeakpwdRequest::CheckWeakpwdRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckWeakpwdRequest::~CheckWeakpwdRequest() = default;

void CheckWeakpwdRequest::validate()
{
}

web::json::value CheckWeakpwdRequest::toJson() const
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
bool CheckWeakpwdRequest::fromJson(const web::json::value& val)
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
            CheckWeakPasswordRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckWeakpwdRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckWeakpwdRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckWeakpwdRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckWeakpwdRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CheckWeakPasswordRequest CheckWeakpwdRequest::getBody() const
{
    return body_;
}

void CheckWeakpwdRequest::setBody(const CheckWeakPasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckWeakpwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckWeakpwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


