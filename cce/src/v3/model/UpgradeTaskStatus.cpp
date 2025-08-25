

#include "huaweicloud/cce/v3/model/UpgradeTaskStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeTaskStatus::UpgradeTaskStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    completionTime_ = "";
    completionTimeIsSet_ = false;
}

UpgradeTaskStatus::~UpgradeTaskStatus() = default;

void UpgradeTaskStatus::validate()
{
}

web::json::value UpgradeTaskStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(completionTimeIsSet_) {
        val[utility::conversions::to_string_t("completionTime")] = ModelBase::toJson(completionTime_);
    }

    return val;
}
bool UpgradeTaskStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completionTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completionTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletionTime(refVal);
        }
    }
    return ok;
}


std::string UpgradeTaskStatus::getPhase() const
{
    return phase_;
}

void UpgradeTaskStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool UpgradeTaskStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void UpgradeTaskStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string UpgradeTaskStatus::getProgress() const
{
    return progress_;
}

void UpgradeTaskStatus::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool UpgradeTaskStatus::progressIsSet() const
{
    return progressIsSet_;
}

void UpgradeTaskStatus::unsetprogress()
{
    progressIsSet_ = false;
}

std::string UpgradeTaskStatus::getCompletionTime() const
{
    return completionTime_;
}

void UpgradeTaskStatus::setCompletionTime(const std::string& value)
{
    completionTime_ = value;
    completionTimeIsSet_ = true;
}

bool UpgradeTaskStatus::completionTimeIsSet() const
{
    return completionTimeIsSet_;
}

void UpgradeTaskStatus::unsetcompletionTime()
{
    completionTimeIsSet_ = false;
}

}
}
}
}
}


