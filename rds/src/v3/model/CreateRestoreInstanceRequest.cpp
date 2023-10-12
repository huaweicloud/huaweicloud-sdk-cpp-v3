

#include "huaweicloud/rds/v3/model/CreateRestoreInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateRestoreInstanceRequest::CreateRestoreInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRestoreInstanceRequest::~CreateRestoreInstanceRequest() = default;

void CreateRestoreInstanceRequest::validate()
{
}

web::json::value CreateRestoreInstanceRequest::toJson() const
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
bool CreateRestoreInstanceRequest::fromJson(const web::json::value& val)
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
            CreateRestoreInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRestoreInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateRestoreInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateRestoreInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateRestoreInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateRestoreInstanceRequestBody CreateRestoreInstanceRequest::getBody() const
{
    return body_;
}

void CreateRestoreInstanceRequest::setBody(const CreateRestoreInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRestoreInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRestoreInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


