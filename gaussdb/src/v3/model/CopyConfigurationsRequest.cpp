

#include "huaweicloud/gaussdb/v3/model/CopyConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CopyConfigurationsRequest::CopyConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyConfigurationsRequest::~CopyConfigurationsRequest() = default;

void CopyConfigurationsRequest::validate()
{
}

web::json::value CopyConfigurationsRequest::toJson() const
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
bool CopyConfigurationsRequest::fromJson(const web::json::value& val)
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
            CopyConfigurationsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CopyConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CopyConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CopyConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CopyConfigurationsRequest::getConfigurationId() const
{
    return configurationId_;
}

void CopyConfigurationsRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CopyConfigurationsRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CopyConfigurationsRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

CopyConfigurationsRequestBody CopyConfigurationsRequest::getBody() const
{
    return body_;
}

void CopyConfigurationsRequest::setBody(const CopyConfigurationsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyConfigurationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyConfigurationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


