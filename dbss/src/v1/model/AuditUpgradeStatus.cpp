

#include "huaweicloud/dbss/v1/model/AuditUpgradeStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditUpgradeStatus::AuditUpgradeStatus()
{
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    stepsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    upgradeVersion_ = "";
    upgradeVersionIsSet_ = false;
}

AuditUpgradeStatus::~AuditUpgradeStatus() = default;

void AuditUpgradeStatus::validate()
{
}

web::json::value AuditUpgradeStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(upgradeVersionIsSet_) {
        val[utility::conversions::to_string_t("upgrade_version")] = ModelBase::toJson(upgradeVersion_);
    }

    return val;
}
bool AuditUpgradeStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditUpgradeStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeVersion(refVal);
        }
    }
    return ok;
}


std::string AuditUpgradeStatus::getCurrentVersion() const
{
    return currentVersion_;
}

void AuditUpgradeStatus::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool AuditUpgradeStatus::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void AuditUpgradeStatus::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

std::string AuditUpgradeStatus::getInstanceId() const
{
    return instanceId_;
}

void AuditUpgradeStatus::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AuditUpgradeStatus::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AuditUpgradeStatus::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t AuditUpgradeStatus::getStatus() const
{
    return status_;
}

void AuditUpgradeStatus::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AuditUpgradeStatus::statusIsSet() const
{
    return statusIsSet_;
}

void AuditUpgradeStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<AuditUpgradeStep>& AuditUpgradeStatus::getSteps()
{
    return steps_;
}

void AuditUpgradeStatus::setSteps(const std::vector<AuditUpgradeStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool AuditUpgradeStatus::stepsIsSet() const
{
    return stepsIsSet_;
}

void AuditUpgradeStatus::unsetsteps()
{
    stepsIsSet_ = false;
}

int32_t AuditUpgradeStatus::getTotal() const
{
    return total_;
}

void AuditUpgradeStatus::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AuditUpgradeStatus::totalIsSet() const
{
    return totalIsSet_;
}

void AuditUpgradeStatus::unsettotal()
{
    totalIsSet_ = false;
}

std::string AuditUpgradeStatus::getUpgradeVersion() const
{
    return upgradeVersion_;
}

void AuditUpgradeStatus::setUpgradeVersion(const std::string& value)
{
    upgradeVersion_ = value;
    upgradeVersionIsSet_ = true;
}

bool AuditUpgradeStatus::upgradeVersionIsSet() const
{
    return upgradeVersionIsSet_;
}

void AuditUpgradeStatus::unsetupgradeVersion()
{
    upgradeVersionIsSet_ = false;
}

}
}
}
}
}


