

#include "huaweicloud/rds/v3/model/CreateConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateConfigurationRequest::CreateConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateConfigurationRequest::~CreateConfigurationRequest() = default;

void CreateConfigurationRequest::validate()
{
}

web::json::value CreateConfigurationRequest::toJson() const
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

bool CreateConfigurationRequest::fromJson(const web::json::value& val)
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
            ConfigurationForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ConfigurationForCreation CreateConfigurationRequest::getBody() const
{
    return body_;
}

void CreateConfigurationRequest::setBody(const ConfigurationForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


