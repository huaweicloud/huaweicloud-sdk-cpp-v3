

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlConfigurationRequest::UpdateGaussMySqlConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlConfigurationRequest::~UpdateGaussMySqlConfigurationRequest() = default;

void UpdateGaussMySqlConfigurationRequest::validate()
{
}

web::json::value UpdateGaussMySqlConfigurationRequest::toJson() const
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

bool UpdateGaussMySqlConfigurationRequest::fromJson(const web::json::value& val)
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
            UpdateConfigurationParameterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateGaussMySqlConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void UpdateGaussMySqlConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool UpdateGaussMySqlConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void UpdateGaussMySqlConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

UpdateConfigurationParameterRequestBody UpdateGaussMySqlConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlConfigurationRequest::setBody(const UpdateConfigurationParameterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


