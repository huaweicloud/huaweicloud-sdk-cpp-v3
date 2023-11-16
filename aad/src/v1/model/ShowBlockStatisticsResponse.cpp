

#include "huaweicloud/aad/v1/model/ShowBlockStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowBlockStatisticsResponse::ShowBlockStatisticsResponse()
{
    totalUnblockingTimes_ = 0;
    totalUnblockingTimesIsSet_ = false;
    manualUnblockingTimes_ = 0;
    manualUnblockingTimesIsSet_ = false;
    automaticUnblockingTimes_ = 0;
    automaticUnblockingTimesIsSet_ = false;
    currentBlockedIpNumbers_ = 0;
    currentBlockedIpNumbersIsSet_ = false;
}

ShowBlockStatisticsResponse::~ShowBlockStatisticsResponse() = default;

void ShowBlockStatisticsResponse::validate()
{
}

web::json::value ShowBlockStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalUnblockingTimesIsSet_) {
        val[utility::conversions::to_string_t("total_unblocking_times")] = ModelBase::toJson(totalUnblockingTimes_);
    }
    if(manualUnblockingTimesIsSet_) {
        val[utility::conversions::to_string_t("manual_unblocking_times")] = ModelBase::toJson(manualUnblockingTimes_);
    }
    if(automaticUnblockingTimesIsSet_) {
        val[utility::conversions::to_string_t("automatic_unblocking_times")] = ModelBase::toJson(automaticUnblockingTimes_);
    }
    if(currentBlockedIpNumbersIsSet_) {
        val[utility::conversions::to_string_t("current_blocked_ip_numbers")] = ModelBase::toJson(currentBlockedIpNumbers_);
    }

    return val;
}
bool ShowBlockStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_unblocking_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_unblocking_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalUnblockingTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manual_unblocking_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manual_unblocking_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManualUnblockingTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("automatic_unblocking_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("automatic_unblocking_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutomaticUnblockingTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_blocked_ip_numbers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_blocked_ip_numbers"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentBlockedIpNumbers(refVal);
        }
    }
    return ok;
}


int32_t ShowBlockStatisticsResponse::getTotalUnblockingTimes() const
{
    return totalUnblockingTimes_;
}

void ShowBlockStatisticsResponse::setTotalUnblockingTimes(int32_t value)
{
    totalUnblockingTimes_ = value;
    totalUnblockingTimesIsSet_ = true;
}

bool ShowBlockStatisticsResponse::totalUnblockingTimesIsSet() const
{
    return totalUnblockingTimesIsSet_;
}

void ShowBlockStatisticsResponse::unsettotalUnblockingTimes()
{
    totalUnblockingTimesIsSet_ = false;
}

int32_t ShowBlockStatisticsResponse::getManualUnblockingTimes() const
{
    return manualUnblockingTimes_;
}

void ShowBlockStatisticsResponse::setManualUnblockingTimes(int32_t value)
{
    manualUnblockingTimes_ = value;
    manualUnblockingTimesIsSet_ = true;
}

bool ShowBlockStatisticsResponse::manualUnblockingTimesIsSet() const
{
    return manualUnblockingTimesIsSet_;
}

void ShowBlockStatisticsResponse::unsetmanualUnblockingTimes()
{
    manualUnblockingTimesIsSet_ = false;
}

int32_t ShowBlockStatisticsResponse::getAutomaticUnblockingTimes() const
{
    return automaticUnblockingTimes_;
}

void ShowBlockStatisticsResponse::setAutomaticUnblockingTimes(int32_t value)
{
    automaticUnblockingTimes_ = value;
    automaticUnblockingTimesIsSet_ = true;
}

bool ShowBlockStatisticsResponse::automaticUnblockingTimesIsSet() const
{
    return automaticUnblockingTimesIsSet_;
}

void ShowBlockStatisticsResponse::unsetautomaticUnblockingTimes()
{
    automaticUnblockingTimesIsSet_ = false;
}

int32_t ShowBlockStatisticsResponse::getCurrentBlockedIpNumbers() const
{
    return currentBlockedIpNumbers_;
}

void ShowBlockStatisticsResponse::setCurrentBlockedIpNumbers(int32_t value)
{
    currentBlockedIpNumbers_ = value;
    currentBlockedIpNumbersIsSet_ = true;
}

bool ShowBlockStatisticsResponse::currentBlockedIpNumbersIsSet() const
{
    return currentBlockedIpNumbersIsSet_;
}

void ShowBlockStatisticsResponse::unsetcurrentBlockedIpNumbers()
{
    currentBlockedIpNumbersIsSet_ = false;
}

}
}
}
}
}


