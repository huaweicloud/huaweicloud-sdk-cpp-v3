

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateInstanceRequest::CreateInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInstanceRequest::~CreateInstanceRequest() = default;

void CreateInstanceRequest::validate()
{
}

web::json::value CreateInstanceRequest::toJson() const
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
bool CreateInstanceRequest::fromJson(const web::json::value& val)
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
            OpenGaussInstanceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

OpenGaussInstanceRequest CreateInstanceRequest::getBody() const
{
    return body_;
}

void CreateInstanceRequest::setBody(const OpenGaussInstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


