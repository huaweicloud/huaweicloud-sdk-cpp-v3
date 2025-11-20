

#include "huaweicloud/metastudio/v1/model/TenantServiceConfigsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TenantServiceConfigsInfo::TenantServiceConfigsInfo()
{
    serviceSharedConfigIsSet_ = false;
    tenantLogConfigIsSet_ = false;
    subAccountControlConfigIsSet_ = false;
    isAiMarkOn_ = false;
    isAiMarkOnIsSet_ = false;
}

TenantServiceConfigsInfo::~TenantServiceConfigsInfo() = default;

void TenantServiceConfigsInfo::validate()
{
}

web::json::value TenantServiceConfigsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceSharedConfigIsSet_) {
        val[utility::conversions::to_string_t("service_shared_config")] = ModelBase::toJson(serviceSharedConfig_);
    }
    if(tenantLogConfigIsSet_) {
        val[utility::conversions::to_string_t("tenant_log_config")] = ModelBase::toJson(tenantLogConfig_);
    }
    if(subAccountControlConfigIsSet_) {
        val[utility::conversions::to_string_t("sub_account_control_config")] = ModelBase::toJson(subAccountControlConfig_);
    }
    if(isAiMarkOnIsSet_) {
        val[utility::conversions::to_string_t("is_ai_mark_on")] = ModelBase::toJson(isAiMarkOn_);
    }

    return val;
}
bool TenantServiceConfigsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_shared_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_shared_config"));
        if(!fieldValue.is_null())
        {
            ServiceSharedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSharedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_log_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_log_config"));
        if(!fieldValue.is_null())
        {
            TenantLogConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantLogConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_account_control_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_account_control_config"));
        if(!fieldValue.is_null())
        {
            SubAccountControlConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubAccountControlConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ai_mark_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ai_mark_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAiMarkOn(refVal);
        }
    }
    return ok;
}


ServiceSharedConfig TenantServiceConfigsInfo::getServiceSharedConfig() const
{
    return serviceSharedConfig_;
}

void TenantServiceConfigsInfo::setServiceSharedConfig(const ServiceSharedConfig& value)
{
    serviceSharedConfig_ = value;
    serviceSharedConfigIsSet_ = true;
}

bool TenantServiceConfigsInfo::serviceSharedConfigIsSet() const
{
    return serviceSharedConfigIsSet_;
}

void TenantServiceConfigsInfo::unsetserviceSharedConfig()
{
    serviceSharedConfigIsSet_ = false;
}

TenantLogConfig TenantServiceConfigsInfo::getTenantLogConfig() const
{
    return tenantLogConfig_;
}

void TenantServiceConfigsInfo::setTenantLogConfig(const TenantLogConfig& value)
{
    tenantLogConfig_ = value;
    tenantLogConfigIsSet_ = true;
}

bool TenantServiceConfigsInfo::tenantLogConfigIsSet() const
{
    return tenantLogConfigIsSet_;
}

void TenantServiceConfigsInfo::unsettenantLogConfig()
{
    tenantLogConfigIsSet_ = false;
}

SubAccountControlConfig TenantServiceConfigsInfo::getSubAccountControlConfig() const
{
    return subAccountControlConfig_;
}

void TenantServiceConfigsInfo::setSubAccountControlConfig(const SubAccountControlConfig& value)
{
    subAccountControlConfig_ = value;
    subAccountControlConfigIsSet_ = true;
}

bool TenantServiceConfigsInfo::subAccountControlConfigIsSet() const
{
    return subAccountControlConfigIsSet_;
}

void TenantServiceConfigsInfo::unsetsubAccountControlConfig()
{
    subAccountControlConfigIsSet_ = false;
}

bool TenantServiceConfigsInfo::isIsAiMarkOn() const
{
    return isAiMarkOn_;
}

void TenantServiceConfigsInfo::setIsAiMarkOn(bool value)
{
    isAiMarkOn_ = value;
    isAiMarkOnIsSet_ = true;
}

bool TenantServiceConfigsInfo::isAiMarkOnIsSet() const
{
    return isAiMarkOnIsSet_;
}

void TenantServiceConfigsInfo::unsetisAiMarkOn()
{
    isAiMarkOnIsSet_ = false;
}

}
}
}
}
}


