

#include "huaweicloud/cce/v3/model/UpgradeInfoStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeInfoStatus::UpgradeInfoStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    completionTime_ = "";
    completionTimeIsSet_ = false;
}

UpgradeInfoStatus::~UpgradeInfoStatus() = default;

void UpgradeInfoStatus::validate()
{
}

web::json::value UpgradeInfoStatus::toJson() const
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
bool UpgradeInfoStatus::fromJson(const web::json::value& val)
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


std::string UpgradeInfoStatus::getPhase() const
{
    return phase_;
}

void UpgradeInfoStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool UpgradeInfoStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void UpgradeInfoStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string UpgradeInfoStatus::getProgress() const
{
    return progress_;
}

void UpgradeInfoStatus::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool UpgradeInfoStatus::progressIsSet() const
{
    return progressIsSet_;
}

void UpgradeInfoStatus::unsetprogress()
{
    progressIsSet_ = false;
}

std::string UpgradeInfoStatus::getCompletionTime() const
{
    return completionTime_;
}

void UpgradeInfoStatus::setCompletionTime(const std::string& value)
{
    completionTime_ = value;
    completionTimeIsSet_ = true;
}

bool UpgradeInfoStatus::completionTimeIsSet() const
{
    return completionTimeIsSet_;
}

void UpgradeInfoStatus::unsetcompletionTime()
{
    completionTimeIsSet_ = false;
}

}
}
}
}
}


