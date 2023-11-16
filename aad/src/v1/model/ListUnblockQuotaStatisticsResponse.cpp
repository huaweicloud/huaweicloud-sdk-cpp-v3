

#include "huaweicloud/aad/v1/model/ListUnblockQuotaStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListUnblockQuotaStatisticsResponse::ListUnblockQuotaStatisticsResponse()
{
    type_ = "";
    typeIsSet_ = false;
    totalUnblockingQuota_ = 0;
    totalUnblockingQuotaIsSet_ = false;
    remainingUnblockingQuota_ = 0;
    remainingUnblockingQuotaIsSet_ = false;
    unblockingQuotaToday_ = 0;
    unblockingQuotaTodayIsSet_ = false;
    remainingUnblockingQuotaToday_ = 0;
    remainingUnblockingQuotaTodayIsSet_ = false;
}

ListUnblockQuotaStatisticsResponse::~ListUnblockQuotaStatisticsResponse() = default;

void ListUnblockQuotaStatisticsResponse::validate()
{
}

web::json::value ListUnblockQuotaStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(totalUnblockingQuotaIsSet_) {
        val[utility::conversions::to_string_t("total_unblocking_quota")] = ModelBase::toJson(totalUnblockingQuota_);
    }
    if(remainingUnblockingQuotaIsSet_) {
        val[utility::conversions::to_string_t("remaining_unblocking_quota")] = ModelBase::toJson(remainingUnblockingQuota_);
    }
    if(unblockingQuotaTodayIsSet_) {
        val[utility::conversions::to_string_t("unblocking_quota_today")] = ModelBase::toJson(unblockingQuotaToday_);
    }
    if(remainingUnblockingQuotaTodayIsSet_) {
        val[utility::conversions::to_string_t("remaining_unblocking_quota_today")] = ModelBase::toJson(remainingUnblockingQuotaToday_);
    }

    return val;
}
bool ListUnblockQuotaStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_unblocking_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_unblocking_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalUnblockingQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_unblocking_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_unblocking_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingUnblockingQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unblocking_quota_today"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unblocking_quota_today"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnblockingQuotaToday(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_unblocking_quota_today"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_unblocking_quota_today"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingUnblockingQuotaToday(refVal);
        }
    }
    return ok;
}


std::string ListUnblockQuotaStatisticsResponse::getType() const
{
    return type_;
}

void ListUnblockQuotaStatisticsResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListUnblockQuotaStatisticsResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ListUnblockQuotaStatisticsResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListUnblockQuotaStatisticsResponse::getTotalUnblockingQuota() const
{
    return totalUnblockingQuota_;
}

void ListUnblockQuotaStatisticsResponse::setTotalUnblockingQuota(int32_t value)
{
    totalUnblockingQuota_ = value;
    totalUnblockingQuotaIsSet_ = true;
}

bool ListUnblockQuotaStatisticsResponse::totalUnblockingQuotaIsSet() const
{
    return totalUnblockingQuotaIsSet_;
}

void ListUnblockQuotaStatisticsResponse::unsettotalUnblockingQuota()
{
    totalUnblockingQuotaIsSet_ = false;
}

int32_t ListUnblockQuotaStatisticsResponse::getRemainingUnblockingQuota() const
{
    return remainingUnblockingQuota_;
}

void ListUnblockQuotaStatisticsResponse::setRemainingUnblockingQuota(int32_t value)
{
    remainingUnblockingQuota_ = value;
    remainingUnblockingQuotaIsSet_ = true;
}

bool ListUnblockQuotaStatisticsResponse::remainingUnblockingQuotaIsSet() const
{
    return remainingUnblockingQuotaIsSet_;
}

void ListUnblockQuotaStatisticsResponse::unsetremainingUnblockingQuota()
{
    remainingUnblockingQuotaIsSet_ = false;
}

int32_t ListUnblockQuotaStatisticsResponse::getUnblockingQuotaToday() const
{
    return unblockingQuotaToday_;
}

void ListUnblockQuotaStatisticsResponse::setUnblockingQuotaToday(int32_t value)
{
    unblockingQuotaToday_ = value;
    unblockingQuotaTodayIsSet_ = true;
}

bool ListUnblockQuotaStatisticsResponse::unblockingQuotaTodayIsSet() const
{
    return unblockingQuotaTodayIsSet_;
}

void ListUnblockQuotaStatisticsResponse::unsetunblockingQuotaToday()
{
    unblockingQuotaTodayIsSet_ = false;
}

int32_t ListUnblockQuotaStatisticsResponse::getRemainingUnblockingQuotaToday() const
{
    return remainingUnblockingQuotaToday_;
}

void ListUnblockQuotaStatisticsResponse::setRemainingUnblockingQuotaToday(int32_t value)
{
    remainingUnblockingQuotaToday_ = value;
    remainingUnblockingQuotaTodayIsSet_ = true;
}

bool ListUnblockQuotaStatisticsResponse::remainingUnblockingQuotaTodayIsSet() const
{
    return remainingUnblockingQuotaTodayIsSet_;
}

void ListUnblockQuotaStatisticsResponse::unsetremainingUnblockingQuotaToday()
{
    remainingUnblockingQuotaTodayIsSet_ = false;
}

}
}
}
}
}


