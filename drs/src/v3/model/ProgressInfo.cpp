

#include "huaweicloud/drs/v3/model/ProgressInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ProgressInfo::ProgressInfo()
{
    completed_ = "";
    completedIsSet_ = false;
    remainingTime_ = "";
    remainingTimeIsSet_ = false;
}

ProgressInfo::~ProgressInfo() = default;

void ProgressInfo::validate()
{
}

web::json::value ProgressInfo::toJson() const
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
bool ProgressInfo::fromJson(const web::json::value& val)
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


std::string ProgressInfo::getCompleted() const
{
    return completed_;
}

void ProgressInfo::setCompleted(const std::string& value)
{
    completed_ = value;
    completedIsSet_ = true;
}

bool ProgressInfo::completedIsSet() const
{
    return completedIsSet_;
}

void ProgressInfo::unsetcompleted()
{
    completedIsSet_ = false;
}

std::string ProgressInfo::getRemainingTime() const
{
    return remainingTime_;
}

void ProgressInfo::setRemainingTime(const std::string& value)
{
    remainingTime_ = value;
    remainingTimeIsSet_ = true;
}

bool ProgressInfo::remainingTimeIsSet() const
{
    return remainingTimeIsSet_;
}

void ProgressInfo::unsetremainingTime()
{
    remainingTimeIsSet_ = false;
}

}
}
}
}
}


