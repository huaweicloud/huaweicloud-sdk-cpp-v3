

#include "huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ValidateWeakPasswordRequest::ValidateWeakPasswordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ValidateWeakPasswordRequest::~ValidateWeakPasswordRequest() = default;

void ValidateWeakPasswordRequest::validate()
{
}

web::json::value ValidateWeakPasswordRequest::toJson() const
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
bool ValidateWeakPasswordRequest::fromJson(const web::json::value& val)
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
            WeakPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ValidateWeakPasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ValidateWeakPasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ValidateWeakPasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ValidateWeakPasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

WeakPasswordRequestBody ValidateWeakPasswordRequest::getBody() const
{
    return body_;
}

void ValidateWeakPasswordRequest::setBody(const WeakPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateWeakPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateWeakPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


