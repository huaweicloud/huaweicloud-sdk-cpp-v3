

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussBackupStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussBackupStrategy::OpenGaussBackupStrategy()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

OpenGaussBackupStrategy::~OpenGaussBackupStrategy() = default;

void OpenGaussBackupStrategy::validate()
{
}

web::json::value OpenGaussBackupStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool OpenGaussBackupStrategy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    return ok;
}


std::string OpenGaussBackupStrategy::getStartTime() const
{
    return startTime_;
}

void OpenGaussBackupStrategy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenGaussBackupStrategy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenGaussBackupStrategy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenGaussBackupStrategy::getKeepDays() const
{
    return keepDays_;
}

void OpenGaussBackupStrategy::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool OpenGaussBackupStrategy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void OpenGaussBackupStrategy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


