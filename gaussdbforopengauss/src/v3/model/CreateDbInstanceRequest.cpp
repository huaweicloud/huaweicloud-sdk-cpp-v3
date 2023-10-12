

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDbInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDbInstanceRequest::CreateDbInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDbInstanceRequest::~CreateDbInstanceRequest() = default;

void CreateDbInstanceRequest::validate()
{
}

web::json::value CreateDbInstanceRequest::toJson() const
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
bool CreateDbInstanceRequest::fromJson(const web::json::value& val)
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
            OpenGaussInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDbInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDbInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDbInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDbInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

OpenGaussInstanceRequestBody CreateDbInstanceRequest::getBody() const
{
    return body_;
}

void CreateDbInstanceRequest::setBody(const OpenGaussInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


