

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateScheduleTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateScheduleTaskRequestBody::CreateScheduleTaskRequestBody()
{
    instanceIdsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    upgradeType_ = "";
    upgradeTypeIsSet_ = false;
    upgradeAction_ = "";
    upgradeActionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

CreateScheduleTaskRequestBody::~CreateScheduleTaskRequestBody() = default;

void CreateScheduleTaskRequestBody::validate()
{
}

web::json::value CreateScheduleTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
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
bool CreateScheduleTaskRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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


std::vector<std::string>& CreateScheduleTaskRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void CreateScheduleTaskRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool CreateScheduleTaskRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void CreateScheduleTaskRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string CreateScheduleTaskRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateScheduleTaskRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateScheduleTaskRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateScheduleTaskRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateScheduleTaskRequestBody::getUpgradeType() const
{
    return upgradeType_;
}

void CreateScheduleTaskRequestBody::setUpgradeType(const std::string& value)
{
    upgradeType_ = value;
    upgradeTypeIsSet_ = true;
}

bool CreateScheduleTaskRequestBody::upgradeTypeIsSet() const
{
    return upgradeTypeIsSet_;
}

void CreateScheduleTaskRequestBody::unsetupgradeType()
{
    upgradeTypeIsSet_ = false;
}

std::string CreateScheduleTaskRequestBody::getUpgradeAction() const
{
    return upgradeAction_;
}

void CreateScheduleTaskRequestBody::setUpgradeAction(const std::string& value)
{
    upgradeAction_ = value;
    upgradeActionIsSet_ = true;
}

bool CreateScheduleTaskRequestBody::upgradeActionIsSet() const
{
    return upgradeActionIsSet_;
}

void CreateScheduleTaskRequestBody::unsetupgradeAction()
{
    upgradeActionIsSet_ = false;
}

std::string CreateScheduleTaskRequestBody::getTargetVersion() const
{
    return targetVersion_;
}

void CreateScheduleTaskRequestBody::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool CreateScheduleTaskRequestBody::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void CreateScheduleTaskRequestBody::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


