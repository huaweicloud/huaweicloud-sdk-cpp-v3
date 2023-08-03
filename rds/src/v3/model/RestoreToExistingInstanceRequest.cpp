

#include "huaweicloud/rds/v3/model/RestoreToExistingInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreToExistingInstanceRequest::RestoreToExistingInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreToExistingInstanceRequest::~RestoreToExistingInstanceRequest() = default;

void RestoreToExistingInstanceRequest::validate()
{
}

web::json::value RestoreToExistingInstanceRequest::toJson() const
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

bool RestoreToExistingInstanceRequest::fromJson(const web::json::value& val)
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
            RestoreToExistingInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RestoreToExistingInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreToExistingInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreToExistingInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreToExistingInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RestoreToExistingInstanceRequestBody RestoreToExistingInstanceRequest::getBody() const
{
    return body_;
}

void RestoreToExistingInstanceRequest::setBody(const RestoreToExistingInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreToExistingInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreToExistingInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


