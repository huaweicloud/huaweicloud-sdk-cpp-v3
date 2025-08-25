

#include "huaweicloud/cce/v3/model/SnapshotStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotStatus::SnapshotStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    completionTime_ = "";
    completionTimeIsSet_ = false;
}

SnapshotStatus::~SnapshotStatus() = default;

void SnapshotStatus::validate()
{
}

web::json::value SnapshotStatus::toJson() const
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
bool SnapshotStatus::fromJson(const web::json::value& val)
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


std::string SnapshotStatus::getPhase() const
{
    return phase_;
}

void SnapshotStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool SnapshotStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void SnapshotStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string SnapshotStatus::getProgress() const
{
    return progress_;
}

void SnapshotStatus::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool SnapshotStatus::progressIsSet() const
{
    return progressIsSet_;
}

void SnapshotStatus::unsetprogress()
{
    progressIsSet_ = false;
}

std::string SnapshotStatus::getCompletionTime() const
{
    return completionTime_;
}

void SnapshotStatus::setCompletionTime(const std::string& value)
{
    completionTime_ = value;
    completionTimeIsSet_ = true;
}

bool SnapshotStatus::completionTimeIsSet() const
{
    return completionTimeIsSet_;
}

void SnapshotStatus::unsetcompletionTime()
{
    completionTimeIsSet_ = false;
}

}
}
}
}
}


