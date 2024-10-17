

#include "huaweicloud/dbss/v1/model/AuditSqlRequest_time.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSqlRequest_time::AuditSqlRequest_time()
{
    timeRange_ = "";
    timeRangeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

AuditSqlRequest_time::~AuditSqlRequest_time() = default;

void AuditSqlRequest_time::validate()
{
}

web::json::value AuditSqlRequest_time::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool AuditSqlRequest_time::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string AuditSqlRequest_time::getTimeRange() const
{
    return timeRange_;
}

void AuditSqlRequest_time::setTimeRange(const std::string& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool AuditSqlRequest_time::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void AuditSqlRequest_time::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

std::string AuditSqlRequest_time::getStartTime() const
{
    return startTime_;
}

void AuditSqlRequest_time::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AuditSqlRequest_time::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AuditSqlRequest_time::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string AuditSqlRequest_time::getEndTime() const
{
    return endTime_;
}

void AuditSqlRequest_time::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AuditSqlRequest_time::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AuditSqlRequest_time::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


