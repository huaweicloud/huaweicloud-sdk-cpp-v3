

#include "huaweicloud/gaussdb/v3/model/CopyInstanceConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CopyInstanceConfigurationsRequest::CopyInstanceConfigurationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyInstanceConfigurationsRequest::~CopyInstanceConfigurationsRequest() = default;

void CopyInstanceConfigurationsRequest::validate()
{
}

web::json::value CopyInstanceConfigurationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CopyInstanceConfigurationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
            CopyInstanceConfigurationsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyInstanceConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CopyInstanceConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CopyInstanceConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CopyInstanceConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CopyInstanceConfigurationsRequest::getInstanceId() const
{
    return instanceId_;
}

void CopyInstanceConfigurationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CopyInstanceConfigurationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CopyInstanceConfigurationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CopyInstanceConfigurationsRequest::getConfigurationId() const
{
    return configurationId_;
}

void CopyInstanceConfigurationsRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CopyInstanceConfigurationsRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CopyInstanceConfigurationsRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

CopyInstanceConfigurationsRequestBody CopyInstanceConfigurationsRequest::getBody() const
{
    return body_;
}

void CopyInstanceConfigurationsRequest::setBody(const CopyInstanceConfigurationsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyInstanceConfigurationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyInstanceConfigurationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


