

#include "huaweicloud/iotda/v5/model/ShowDomainConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDomainConfigurationRequest::ShowDomainConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

ShowDomainConfigurationRequest::~ShowDomainConfigurationRequest() = default;

void ShowDomainConfigurationRequest::validate()
{
}

web::json::value ShowDomainConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool ShowDomainConfigurationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDomainConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDomainConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDomainConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDomainConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDomainConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void ShowDomainConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool ShowDomainConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void ShowDomainConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


