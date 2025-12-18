

#include "huaweicloud/meeting/v1/model/ShowOrgResResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowOrgResResponse::ShowOrgResResponse()
{
    usedRecStorage_ = 0.0;
    usedRecStorageIsSet_ = false;
    usedAccountsCount_ = 0;
    usedAccountsCountIsSet_ = false;
    usedLiveCount_ = 0;
    usedLiveCountIsSet_ = false;
    confCount_ = 0;
    confCountIsSet_ = false;
    confLength_ = 0L;
    confLengthIsSet_ = false;
    activeAttendeeCount_ = 0;
    activeAttendeeCountIsSet_ = false;
    totalAttendeeCount_ = 0;
    totalAttendeeCountIsSet_ = false;
}

ShowOrgResResponse::~ShowOrgResResponse() = default;

void ShowOrgResResponse::validate()
{
}

web::json::value ShowOrgResResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedRecStorageIsSet_) {
        val[utility::conversions::to_string_t("usedRecStorage")] = ModelBase::toJson(usedRecStorage_);
    }
    if(usedAccountsCountIsSet_) {
        val[utility::conversions::to_string_t("usedAccountsCount")] = ModelBase::toJson(usedAccountsCount_);
    }
    if(usedLiveCountIsSet_) {
        val[utility::conversions::to_string_t("usedLiveCount")] = ModelBase::toJson(usedLiveCount_);
    }
    if(confCountIsSet_) {
        val[utility::conversions::to_string_t("confCount")] = ModelBase::toJson(confCount_);
    }
    if(confLengthIsSet_) {
        val[utility::conversions::to_string_t("confLength")] = ModelBase::toJson(confLength_);
    }
    if(activeAttendeeCountIsSet_) {
        val[utility::conversions::to_string_t("activeAttendeeCount")] = ModelBase::toJson(activeAttendeeCount_);
    }
    if(totalAttendeeCountIsSet_) {
        val[utility::conversions::to_string_t("totalAttendeeCount")] = ModelBase::toJson(totalAttendeeCount_);
    }

    return val;
}
bool ShowOrgResResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("usedRecStorage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedRecStorage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedRecStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedAccountsCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedAccountsCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedAccountsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedLiveCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedLiveCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedLiveCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confLength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confLength"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activeAttendeeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeAttendeeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveAttendeeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalAttendeeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalAttendeeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAttendeeCount(refVal);
        }
    }
    return ok;
}


double ShowOrgResResponse::getUsedRecStorage() const
{
    return usedRecStorage_;
}

void ShowOrgResResponse::setUsedRecStorage(double value)
{
    usedRecStorage_ = value;
    usedRecStorageIsSet_ = true;
}

bool ShowOrgResResponse::usedRecStorageIsSet() const
{
    return usedRecStorageIsSet_;
}

void ShowOrgResResponse::unsetusedRecStorage()
{
    usedRecStorageIsSet_ = false;
}

int32_t ShowOrgResResponse::getUsedAccountsCount() const
{
    return usedAccountsCount_;
}

void ShowOrgResResponse::setUsedAccountsCount(int32_t value)
{
    usedAccountsCount_ = value;
    usedAccountsCountIsSet_ = true;
}

bool ShowOrgResResponse::usedAccountsCountIsSet() const
{
    return usedAccountsCountIsSet_;
}

void ShowOrgResResponse::unsetusedAccountsCount()
{
    usedAccountsCountIsSet_ = false;
}

int32_t ShowOrgResResponse::getUsedLiveCount() const
{
    return usedLiveCount_;
}

void ShowOrgResResponse::setUsedLiveCount(int32_t value)
{
    usedLiveCount_ = value;
    usedLiveCountIsSet_ = true;
}

bool ShowOrgResResponse::usedLiveCountIsSet() const
{
    return usedLiveCountIsSet_;
}

void ShowOrgResResponse::unsetusedLiveCount()
{
    usedLiveCountIsSet_ = false;
}

int32_t ShowOrgResResponse::getConfCount() const
{
    return confCount_;
}

void ShowOrgResResponse::setConfCount(int32_t value)
{
    confCount_ = value;
    confCountIsSet_ = true;
}

bool ShowOrgResResponse::confCountIsSet() const
{
    return confCountIsSet_;
}

void ShowOrgResResponse::unsetconfCount()
{
    confCountIsSet_ = false;
}

int64_t ShowOrgResResponse::getConfLength() const
{
    return confLength_;
}

void ShowOrgResResponse::setConfLength(int64_t value)
{
    confLength_ = value;
    confLengthIsSet_ = true;
}

bool ShowOrgResResponse::confLengthIsSet() const
{
    return confLengthIsSet_;
}

void ShowOrgResResponse::unsetconfLength()
{
    confLengthIsSet_ = false;
}

int32_t ShowOrgResResponse::getActiveAttendeeCount() const
{
    return activeAttendeeCount_;
}

void ShowOrgResResponse::setActiveAttendeeCount(int32_t value)
{
    activeAttendeeCount_ = value;
    activeAttendeeCountIsSet_ = true;
}

bool ShowOrgResResponse::activeAttendeeCountIsSet() const
{
    return activeAttendeeCountIsSet_;
}

void ShowOrgResResponse::unsetactiveAttendeeCount()
{
    activeAttendeeCountIsSet_ = false;
}

int32_t ShowOrgResResponse::getTotalAttendeeCount() const
{
    return totalAttendeeCount_;
}

void ShowOrgResResponse::setTotalAttendeeCount(int32_t value)
{
    totalAttendeeCount_ = value;
    totalAttendeeCountIsSet_ = true;
}

bool ShowOrgResResponse::totalAttendeeCountIsSet() const
{
    return totalAttendeeCountIsSet_;
}

void ShowOrgResResponse::unsettotalAttendeeCount()
{
    totalAttendeeCountIsSet_ = false;
}

}
}
}
}
}


