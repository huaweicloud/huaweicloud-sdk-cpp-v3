

#include "huaweicloud/rds/v3/model/GetRestoreTimeResponse_restore_time.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetRestoreTimeResponse_restore_time::GetRestoreTimeResponse_restore_time()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

GetRestoreTimeResponse_restore_time::~GetRestoreTimeResponse_restore_time() = default;

void GetRestoreTimeResponse_restore_time::validate()
{
}

web::json::value GetRestoreTimeResponse_restore_time::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool GetRestoreTimeResponse_restore_time::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

int64_t GetRestoreTimeResponse_restore_time::getStartTime() const
{
    return startTime_;
}

void GetRestoreTimeResponse_restore_time::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool GetRestoreTimeResponse_restore_time::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void GetRestoreTimeResponse_restore_time::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t GetRestoreTimeResponse_restore_time::getEndTime() const
{
    return endTime_;
}

void GetRestoreTimeResponse_restore_time::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool GetRestoreTimeResponse_restore_time::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void GetRestoreTimeResponse_restore_time::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


