

#include "huaweicloud/iotda/v5/model/DeleteDomainConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDomainConfigurationRequest::DeleteDomainConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

DeleteDomainConfigurationRequest::~DeleteDomainConfigurationRequest() = default;

void DeleteDomainConfigurationRequest::validate()
{
}

web::json::value DeleteDomainConfigurationRequest::toJson() const
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
bool DeleteDomainConfigurationRequest::fromJson(const web::json::value& val)
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


std::string DeleteDomainConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDomainConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDomainConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDomainConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDomainConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void DeleteDomainConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool DeleteDomainConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void DeleteDomainConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


