

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchConfigurationRequest::SwitchConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchConfigurationRequest::~SwitchConfigurationRequest() = default;

void SwitchConfigurationRequest::validate()
{
}

web::json::value SwitchConfigurationRequest::toJson() const
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

bool SwitchConfigurationRequest::fromJson(const web::json::value& val)
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
            ApplyConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SwitchConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchConfigurationRequest::getConfigId() const
{
    return configId_;
}

void SwitchConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool SwitchConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void SwitchConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ApplyConfigurationRequestBody SwitchConfigurationRequest::getBody() const
{
    return body_;
}

void SwitchConfigurationRequest::setBody(const ApplyConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


