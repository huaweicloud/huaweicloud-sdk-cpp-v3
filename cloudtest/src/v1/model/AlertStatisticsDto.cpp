

#include "huaweicloud/cloudtest/v1/model/AlertStatisticsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertStatisticsDto::AlertStatisticsDto()
{
    blockAlertCount_ = 0;
    blockAlertCountIsSet_ = false;
    exceptionAlertCount_ = 0;
    exceptionAlertCountIsSet_ = false;
    failAlertCount_ = 0;
    failAlertCountIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    statisticsTime_ = 0L;
    statisticsTimeIsSet_ = false;
    timeoutAlertCount_ = 0;
    timeoutAlertCountIsSet_ = false;
}

AlertStatisticsDto::~AlertStatisticsDto() = default;

void AlertStatisticsDto::validate()
{
}

web::json::value AlertStatisticsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockAlertCountIsSet_) {
        val[utility::conversions::to_string_t("block_alert_count")] = ModelBase::toJson(blockAlertCount_);
    }
    if(exceptionAlertCountIsSet_) {
        val[utility::conversions::to_string_t("exception_alert_count")] = ModelBase::toJson(exceptionAlertCount_);
    }
    if(failAlertCountIsSet_) {
        val[utility::conversions::to_string_t("fail_alert_count")] = ModelBase::toJson(failAlertCount_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(statisticsTimeIsSet_) {
        val[utility::conversions::to_string_t("statistics_time")] = ModelBase::toJson(statisticsTime_);
    }
    if(timeoutAlertCountIsSet_) {
        val[utility::conversions::to_string_t("timeout_alert_count")] = ModelBase::toJson(timeoutAlertCount_);
    }

    return val;
}
bool AlertStatisticsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("block_alert_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_alert_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockAlertCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exception_alert_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exception_alert_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExceptionAlertCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_alert_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_alert_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailAlertCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticsTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout_alert_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout_alert_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutAlertCount(refVal);
        }
    }
    return ok;
}


int32_t AlertStatisticsDto::getBlockAlertCount() const
{
    return blockAlertCount_;
}

void AlertStatisticsDto::setBlockAlertCount(int32_t value)
{
    blockAlertCount_ = value;
    blockAlertCountIsSet_ = true;
}

bool AlertStatisticsDto::blockAlertCountIsSet() const
{
    return blockAlertCountIsSet_;
}

void AlertStatisticsDto::unsetblockAlertCount()
{
    blockAlertCountIsSet_ = false;
}

int32_t AlertStatisticsDto::getExceptionAlertCount() const
{
    return exceptionAlertCount_;
}

void AlertStatisticsDto::setExceptionAlertCount(int32_t value)
{
    exceptionAlertCount_ = value;
    exceptionAlertCountIsSet_ = true;
}

bool AlertStatisticsDto::exceptionAlertCountIsSet() const
{
    return exceptionAlertCountIsSet_;
}

void AlertStatisticsDto::unsetexceptionAlertCount()
{
    exceptionAlertCountIsSet_ = false;
}

int32_t AlertStatisticsDto::getFailAlertCount() const
{
    return failAlertCount_;
}

void AlertStatisticsDto::setFailAlertCount(int32_t value)
{
    failAlertCount_ = value;
    failAlertCountIsSet_ = true;
}

bool AlertStatisticsDto::failAlertCountIsSet() const
{
    return failAlertCountIsSet_;
}

void AlertStatisticsDto::unsetfailAlertCount()
{
    failAlertCountIsSet_ = false;
}

std::string AlertStatisticsDto::getServiceId() const
{
    return serviceId_;
}

void AlertStatisticsDto::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AlertStatisticsDto::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AlertStatisticsDto::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

int64_t AlertStatisticsDto::getStatisticsTime() const
{
    return statisticsTime_;
}

void AlertStatisticsDto::setStatisticsTime(int64_t value)
{
    statisticsTime_ = value;
    statisticsTimeIsSet_ = true;
}

bool AlertStatisticsDto::statisticsTimeIsSet() const
{
    return statisticsTimeIsSet_;
}

void AlertStatisticsDto::unsetstatisticsTime()
{
    statisticsTimeIsSet_ = false;
}

int32_t AlertStatisticsDto::getTimeoutAlertCount() const
{
    return timeoutAlertCount_;
}

void AlertStatisticsDto::setTimeoutAlertCount(int32_t value)
{
    timeoutAlertCount_ = value;
    timeoutAlertCountIsSet_ = true;
}

bool AlertStatisticsDto::timeoutAlertCountIsSet() const
{
    return timeoutAlertCountIsSet_;
}

void AlertStatisticsDto::unsettimeoutAlertCount()
{
    timeoutAlertCountIsSet_ = false;
}

}
}
}
}
}


