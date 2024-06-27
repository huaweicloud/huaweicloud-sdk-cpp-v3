

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBUpgradeInstancesVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBUpgradeInstancesVersionRequest::GaussDBUpgradeInstancesVersionRequest()
{
    instanceIdsIsSet_ = false;
    upgradeType_ = "";
    upgradeTypeIsSet_ = false;
    upgradeAction_ = "";
    upgradeActionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

GaussDBUpgradeInstancesVersionRequest::~GaussDBUpgradeInstancesVersionRequest() = default;

void GaussDBUpgradeInstancesVersionRequest::validate()
{
}

web::json::value GaussDBUpgradeInstancesVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(upgradeTypeIsSet_) {
        val[utility::conversions::to_string_t("upgrade_type")] = ModelBase::toJson(upgradeType_);
    }
    if(upgradeActionIsSet_) {
        val[utility::conversions::to_string_t("upgrade_action")] = ModelBase::toJson(upgradeAction_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }

    return val;
}
bool GaussDBUpgradeInstancesVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& GaussDBUpgradeInstancesVersionRequest::getInstanceIds()
{
    return instanceIds_;
}

void GaussDBUpgradeInstancesVersionRequest::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool GaussDBUpgradeInstancesVersionRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void GaussDBUpgradeInstancesVersionRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string GaussDBUpgradeInstancesVersionRequest::getUpgradeType() const
{
    return upgradeType_;
}

void GaussDBUpgradeInstancesVersionRequest::setUpgradeType(const std::string& value)
{
    upgradeType_ = value;
    upgradeTypeIsSet_ = true;
}

bool GaussDBUpgradeInstancesVersionRequest::upgradeTypeIsSet() const
{
    return upgradeTypeIsSet_;
}

void GaussDBUpgradeInstancesVersionRequest::unsetupgradeType()
{
    upgradeTypeIsSet_ = false;
}

std::string GaussDBUpgradeInstancesVersionRequest::getUpgradeAction() const
{
    return upgradeAction_;
}

void GaussDBUpgradeInstancesVersionRequest::setUpgradeAction(const std::string& value)
{
    upgradeAction_ = value;
    upgradeActionIsSet_ = true;
}

bool GaussDBUpgradeInstancesVersionRequest::upgradeActionIsSet() const
{
    return upgradeActionIsSet_;
}

void GaussDBUpgradeInstancesVersionRequest::unsetupgradeAction()
{
    upgradeActionIsSet_ = false;
}

std::string GaussDBUpgradeInstancesVersionRequest::getTargetVersion() const
{
    return targetVersion_;
}

void GaussDBUpgradeInstancesVersionRequest::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool GaussDBUpgradeInstancesVersionRequest::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void GaussDBUpgradeInstancesVersionRequest::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


