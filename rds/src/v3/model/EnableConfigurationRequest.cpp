

#include "huaweicloud/rds/v3/model/EnableConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EnableConfigurationRequest::EnableConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

EnableConfigurationRequest::~EnableConfigurationRequest() = default;

void EnableConfigurationRequest::validate()
{
}

web::json::value EnableConfigurationRequest::toJson() const
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
bool EnableConfigurationRequest::fromJson(const web::json::value& val)
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
            ApplyConfigurationRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string EnableConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void EnableConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool EnableConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void EnableConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string EnableConfigurationRequest::getConfigId() const
{
    return configId_;
}

void EnableConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool EnableConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void EnableConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ApplyConfigurationRequest EnableConfigurationRequest::getBody() const
{
    return body_;
}

void EnableConfigurationRequest::setBody(const ApplyConfigurationRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


