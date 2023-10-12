

#include "huaweicloud/gaussdb/v3/model/RestoreOldInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestoreOldInstanceRequest::RestoreOldInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreOldInstanceRequest::~RestoreOldInstanceRequest() = default;

void RestoreOldInstanceRequest::validate()
{
}

web::json::value RestoreOldInstanceRequest::toJson() const
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
bool RestoreOldInstanceRequest::fromJson(const web::json::value& val)
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
            RestoreRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreOldInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreOldInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreOldInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreOldInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RestoreRequest RestoreOldInstanceRequest::getBody() const
{
    return body_;
}

void RestoreOldInstanceRequest::setBody(const RestoreRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreOldInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreOldInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


