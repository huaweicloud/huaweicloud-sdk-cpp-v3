

#include "huaweicloud/metastudio/v1/model/UpdateTenantServiceConfigsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateTenantServiceConfigsReq::UpdateTenantServiceConfigsReq()
{
    subAccountControlConfigIsSet_ = false;
    isAiMarkOn_ = false;
    isAiMarkOnIsSet_ = false;
}

UpdateTenantServiceConfigsReq::~UpdateTenantServiceConfigsReq() = default;

void UpdateTenantServiceConfigsReq::validate()
{
}

web::json::value UpdateTenantServiceConfigsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subAccountControlConfigIsSet_) {
        val[utility::conversions::to_string_t("sub_account_control_config")] = ModelBase::toJson(subAccountControlConfig_);
    }
    if(isAiMarkOnIsSet_) {
        val[utility::conversions::to_string_t("is_ai_mark_on")] = ModelBase::toJson(isAiMarkOn_);
    }

    return val;
}
bool UpdateTenantServiceConfigsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


SubAccountControlConfig UpdateTenantServiceConfigsReq::getSubAccountControlConfig() const
{
    return subAccountControlConfig_;
}

void UpdateTenantServiceConfigsReq::setSubAccountControlConfig(const SubAccountControlConfig& value)
{
    subAccountControlConfig_ = value;
    subAccountControlConfigIsSet_ = true;
}

bool UpdateTenantServiceConfigsReq::subAccountControlConfigIsSet() const
{
    return subAccountControlConfigIsSet_;
}

void UpdateTenantServiceConfigsReq::unsetsubAccountControlConfig()
{
    subAccountControlConfigIsSet_ = false;
}

bool UpdateTenantServiceConfigsReq::isIsAiMarkOn() const
{
    return isAiMarkOn_;
}

void UpdateTenantServiceConfigsReq::setIsAiMarkOn(bool value)
{
    isAiMarkOn_ = value;
    isAiMarkOnIsSet_ = true;
}

bool UpdateTenantServiceConfigsReq::isAiMarkOnIsSet() const
{
    return isAiMarkOnIsSet_;
}

void UpdateTenantServiceConfigsReq::unsetisAiMarkOn()
{
    isAiMarkOnIsSet_ = false;
}

}
}
}
}
}


