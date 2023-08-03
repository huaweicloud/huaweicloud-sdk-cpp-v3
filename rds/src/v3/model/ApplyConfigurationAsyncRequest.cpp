

#include "huaweicloud/rds/v3/model/ApplyConfigurationAsyncRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ApplyConfigurationAsyncRequest::ApplyConfigurationAsyncRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

ApplyConfigurationAsyncRequest::~ApplyConfigurationAsyncRequest() = default;

void ApplyConfigurationAsyncRequest::validate()
{
}

web::json::value ApplyConfigurationAsyncRequest::toJson() const
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

bool ApplyConfigurationAsyncRequest::fromJson(const web::json::value& val)
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

std::string ApplyConfigurationAsyncRequest::getXLanguage() const
{
    return xLanguage_;
}

void ApplyConfigurationAsyncRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ApplyConfigurationAsyncRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ApplyConfigurationAsyncRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ApplyConfigurationAsyncRequest::getConfigId() const
{
    return configId_;
}

void ApplyConfigurationAsyncRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ApplyConfigurationAsyncRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ApplyConfigurationAsyncRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

ApplyConfigurationRequest ApplyConfigurationAsyncRequest::getBody() const
{
    return body_;
}

void ApplyConfigurationAsyncRequest::setBody(const ApplyConfigurationRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApplyConfigurationAsyncRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApplyConfigurationAsyncRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


