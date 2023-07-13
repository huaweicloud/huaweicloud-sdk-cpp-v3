

#include "huaweicloud/drs/v5/model/ProgressCompleteInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ProgressCompleteInfo::ProgressCompleteInfo()
{
    completed_ = "";
    completedIsSet_ = false;
    remainingTime_ = "";
    remainingTimeIsSet_ = false;
}

ProgressCompleteInfo::~ProgressCompleteInfo() = default;

void ProgressCompleteInfo::validate()
{
}

web::json::value ProgressCompleteInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(completedIsSet_) {
        val[utility::conversions::to_string_t("completed")] = ModelBase::toJson(completed_);
    }
    if(remainingTimeIsSet_) {
        val[utility::conversions::to_string_t("remaining_time")] = ModelBase::toJson(remainingTime_);
    }

    return val;
}

bool ProgressCompleteInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("completed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingTime(refVal);
        }
    }
    return ok;
}

std::string ProgressCompleteInfo::getCompleted() const
{
    return completed_;
}

void ProgressCompleteInfo::setCompleted(const std::string& value)
{
    completed_ = value;
    completedIsSet_ = true;
}

bool ProgressCompleteInfo::completedIsSet() const
{
    return completedIsSet_;
}

void ProgressCompleteInfo::unsetcompleted()
{
    completedIsSet_ = false;
}

std::string ProgressCompleteInfo::getRemainingTime() const
{
    return remainingTime_;
}

void ProgressCompleteInfo::setRemainingTime(const std::string& value)
{
    remainingTime_ = value;
    remainingTimeIsSet_ = true;
}

bool ProgressCompleteInfo::remainingTimeIsSet() const
{
    return remainingTimeIsSet_;
}

void ProgressCompleteInfo::unsetremainingTime()
{
    remainingTimeIsSet_ = false;
}

}
}
}
}
}


