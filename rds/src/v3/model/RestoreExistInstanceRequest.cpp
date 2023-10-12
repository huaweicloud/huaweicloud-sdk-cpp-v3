

#include "huaweicloud/rds/v3/model/RestoreExistInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreExistInstanceRequest::RestoreExistInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreExistInstanceRequest::~RestoreExistInstanceRequest() = default;

void RestoreExistInstanceRequest::validate()
{
}

web::json::value RestoreExistInstanceRequest::toJson() const
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
bool RestoreExistInstanceRequest::fromJson(const web::json::value& val)
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
            RestoreExistingInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreExistInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestoreExistInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestoreExistInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestoreExistInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RestoreExistingInstanceRequestBody RestoreExistInstanceRequest::getBody() const
{
    return body_;
}

void RestoreExistInstanceRequest::setBody(const RestoreExistingInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreExistInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreExistInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


