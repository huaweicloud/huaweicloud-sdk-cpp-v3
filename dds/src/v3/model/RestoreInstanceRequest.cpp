

#include "huaweicloud/dds/v3/model/RestoreInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceRequest::RestoreInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreInstanceRequest::~RestoreInstanceRequest() = default;

void RestoreInstanceRequest::validate()
{
}

web::json::value RestoreInstanceRequest::toJson() const
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
bool RestoreInstanceRequest::fromJson(const web::json::value& val)
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
            RestoreInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RestoreInstanceRequestBody RestoreInstanceRequest::getBody() const
{
    return body_;
}

void RestoreInstanceRequest::setBody(const RestoreInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


