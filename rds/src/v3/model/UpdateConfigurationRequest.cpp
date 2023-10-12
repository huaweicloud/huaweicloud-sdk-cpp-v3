

#include "huaweicloud/rds/v3/model/UpdateConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateConfigurationRequest::UpdateConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateConfigurationRequest::~UpdateConfigurationRequest() = default;

void UpdateConfigurationRequest::validate()
{
}

web::json::value UpdateConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ConfigurationForUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateConfigurationRequest::getConfigId() const
{
    return configId_;
}

void UpdateConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool UpdateConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void UpdateConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ConfigurationForUpdate UpdateConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateConfigurationRequest::setBody(const ConfigurationForUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


