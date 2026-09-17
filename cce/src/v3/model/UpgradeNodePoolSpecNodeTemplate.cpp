

#include "huaweicloud/cce/v3/model/UpgradeNodePoolSpecNodeTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeNodePoolSpecNodeTemplate::UpgradeNodePoolSpecNodeTemplate()
{
    lifeCycleIsSet_ = false;
    loginIsSet_ = false;
    volumeConfigIsSet_ = false;
}

UpgradeNodePoolSpecNodeTemplate::~UpgradeNodePoolSpecNodeTemplate() = default;

void UpgradeNodePoolSpecNodeTemplate::validate()
{
}

web::json::value UpgradeNodePoolSpecNodeTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lifeCycleIsSet_) {
        val[utility::conversions::to_string_t("lifeCycle")] = ModelBase::toJson(lifeCycle_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(volumeConfigIsSet_) {
        val[utility::conversions::to_string_t("volumeConfig")] = ModelBase::toJson(volumeConfig_);
    }

    return val;
}
bool UpgradeNodePoolSpecNodeTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lifeCycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lifeCycle"));
        if(!fieldValue.is_null())
        {
            NodeLifecycleConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLifeCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login"));
        if(!fieldValue.is_null())
        {
            Login refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeConfig"));
        if(!fieldValue.is_null())
        {
            VolumeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeConfig(refVal);
        }
    }
    return ok;
}


NodeLifecycleConfig UpgradeNodePoolSpecNodeTemplate::getLifeCycle() const
{
    return lifeCycle_;
}

void UpgradeNodePoolSpecNodeTemplate::setLifeCycle(const NodeLifecycleConfig& value)
{
    lifeCycle_ = value;
    lifeCycleIsSet_ = true;
}

bool UpgradeNodePoolSpecNodeTemplate::lifeCycleIsSet() const
{
    return lifeCycleIsSet_;
}

void UpgradeNodePoolSpecNodeTemplate::unsetlifeCycle()
{
    lifeCycleIsSet_ = false;
}

Login UpgradeNodePoolSpecNodeTemplate::getLogin() const
{
    return login_;
}

void UpgradeNodePoolSpecNodeTemplate::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool UpgradeNodePoolSpecNodeTemplate::loginIsSet() const
{
    return loginIsSet_;
}

void UpgradeNodePoolSpecNodeTemplate::unsetlogin()
{
    loginIsSet_ = false;
}

VolumeConfig UpgradeNodePoolSpecNodeTemplate::getVolumeConfig() const
{
    return volumeConfig_;
}

void UpgradeNodePoolSpecNodeTemplate::setVolumeConfig(const VolumeConfig& value)
{
    volumeConfig_ = value;
    volumeConfigIsSet_ = true;
}

bool UpgradeNodePoolSpecNodeTemplate::volumeConfigIsSet() const
{
    return volumeConfigIsSet_;
}

void UpgradeNodePoolSpecNodeTemplate::unsetvolumeConfig()
{
    volumeConfigIsSet_ = false;
}

}
}
}
}
}


