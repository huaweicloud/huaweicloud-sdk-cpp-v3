

#include "huaweicloud/iotda/v5/model/UpdateDomainConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDomainConfigurationRequest::UpdateDomainConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainConfigurationRequest::~UpdateDomainConfigurationRequest() = default;

void UpdateDomainConfigurationRequest::validate()
{
}

web::json::value UpdateDomainConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDomainConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            UpdateDomainConfigurationDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDomainConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDomainConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDomainConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDomainConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void UpdateDomainConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool UpdateDomainConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void UpdateDomainConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

UpdateDomainConfigurationDTO UpdateDomainConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateDomainConfigurationRequest::setBody(const UpdateDomainConfigurationDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


