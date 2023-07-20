

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlConfigurationRequest::SwitchGaussMySqlConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchGaussMySqlConfigurationRequest::~SwitchGaussMySqlConfigurationRequest() = default;

void SwitchGaussMySqlConfigurationRequest::validate()
{
}

web::json::value SwitchGaussMySqlConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool SwitchGaussMySqlConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
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

std::string SwitchGaussMySqlConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchGaussMySqlConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchGaussMySqlConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchGaussMySqlConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchGaussMySqlConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void SwitchGaussMySqlConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool SwitchGaussMySqlConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void SwitchGaussMySqlConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

ApplyConfigurationRequestBody SwitchGaussMySqlConfigurationRequest::getBody() const
{
    return body_;
}

void SwitchGaussMySqlConfigurationRequest::setBody(const ApplyConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchGaussMySqlConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchGaussMySqlConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


