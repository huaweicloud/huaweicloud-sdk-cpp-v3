

#include "huaweicloud/meeting/v1/model/ResDetailDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResDetailDTO::ResDetailDTO()
{
    sumCount_ = 0;
    sumCountIsSet_ = false;
    trialCount_ = 0;
    trialCountIsSet_ = false;
    expiredCount_ = 0;
    expiredCountIsSet_ = false;
    expiringCount_ = 0;
    expiringCountIsSet_ = false;
    usedCount_ = 0;
    usedCountIsSet_ = false;
}

ResDetailDTO::~ResDetailDTO() = default;

void ResDetailDTO::validate()
{
}

web::json::value ResDetailDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sumCountIsSet_) {
        val[utility::conversions::to_string_t("sumCount")] = ModelBase::toJson(sumCount_);
    }
    if(trialCountIsSet_) {
        val[utility::conversions::to_string_t("trialCount")] = ModelBase::toJson(trialCount_);
    }
    if(expiredCountIsSet_) {
        val[utility::conversions::to_string_t("expiredCount")] = ModelBase::toJson(expiredCount_);
    }
    if(expiringCountIsSet_) {
        val[utility::conversions::to_string_t("expiringCount")] = ModelBase::toJson(expiringCount_);
    }
    if(usedCountIsSet_) {
        val[utility::conversions::to_string_t("usedCount")] = ModelBase::toJson(usedCount_);
    }

    return val;
}
bool ResDetailDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sumCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sumCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSumCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trialCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trialCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrialCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiredCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiredCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiringCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiringCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiringCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedCount(refVal);
        }
    }
    return ok;
}


int32_t ResDetailDTO::getSumCount() const
{
    return sumCount_;
}

void ResDetailDTO::setSumCount(int32_t value)
{
    sumCount_ = value;
    sumCountIsSet_ = true;
}

bool ResDetailDTO::sumCountIsSet() const
{
    return sumCountIsSet_;
}

void ResDetailDTO::unsetsumCount()
{
    sumCountIsSet_ = false;
}

int32_t ResDetailDTO::getTrialCount() const
{
    return trialCount_;
}

void ResDetailDTO::setTrialCount(int32_t value)
{
    trialCount_ = value;
    trialCountIsSet_ = true;
}

bool ResDetailDTO::trialCountIsSet() const
{
    return trialCountIsSet_;
}

void ResDetailDTO::unsettrialCount()
{
    trialCountIsSet_ = false;
}

int32_t ResDetailDTO::getExpiredCount() const
{
    return expiredCount_;
}

void ResDetailDTO::setExpiredCount(int32_t value)
{
    expiredCount_ = value;
    expiredCountIsSet_ = true;
}

bool ResDetailDTO::expiredCountIsSet() const
{
    return expiredCountIsSet_;
}

void ResDetailDTO::unsetexpiredCount()
{
    expiredCountIsSet_ = false;
}

int32_t ResDetailDTO::getExpiringCount() const
{
    return expiringCount_;
}

void ResDetailDTO::setExpiringCount(int32_t value)
{
    expiringCount_ = value;
    expiringCountIsSet_ = true;
}

bool ResDetailDTO::expiringCountIsSet() const
{
    return expiringCountIsSet_;
}

void ResDetailDTO::unsetexpiringCount()
{
    expiringCountIsSet_ = false;
}

int32_t ResDetailDTO::getUsedCount() const
{
    return usedCount_;
}

void ResDetailDTO::setUsedCount(int32_t value)
{
    usedCount_ = value;
    usedCountIsSet_ = true;
}

bool ResDetailDTO::usedCountIsSet() const
{
    return usedCountIsSet_;
}

void ResDetailDTO::unsetusedCount()
{
    usedCountIsSet_ = false;
}

}
}
}
}
}


