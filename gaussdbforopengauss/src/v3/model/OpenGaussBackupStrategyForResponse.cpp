

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussBackupStrategyForResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussBackupStrategyForResponse::OpenGaussBackupStrategyForResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

OpenGaussBackupStrategyForResponse::~OpenGaussBackupStrategyForResponse() = default;

void OpenGaussBackupStrategyForResponse::validate()
{
}

web::json::value OpenGaussBackupStrategyForResponse::toJson() const
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

bool OpenGaussBackupStrategyForResponse::fromJson(const web::json::value& val)
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

std::string OpenGaussBackupStrategyForResponse::getStartTime() const
{
    return startTime_;
}

void OpenGaussBackupStrategyForResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenGaussBackupStrategyForResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenGaussBackupStrategyForResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenGaussBackupStrategyForResponse::getKeepDays() const
{
    return keepDays_;
}

void OpenGaussBackupStrategyForResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool OpenGaussBackupStrategyForResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void OpenGaussBackupStrategyForResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


