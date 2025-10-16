

#include "huaweicloud/cpcs/v1/model/ShowResourceDetailAccessKeyResponseBody_ak_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceDetailAccessKeyResponseBody_ak_list::ShowResourceDetailAccessKeyResponseBody_ak_list()
{
    successRate_ = 0.0;
    successRateIsSet_ = false;
    failRate_ = 0.0;
    failRateIsSet_ = false;
    successCount_ = 0L;
    successCountIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    averageValue_ = 0.0;
    averageValueIsSet_ = false;
    totalValue_ = 0.0;
    totalValueIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    accessKeyName_ = "";
    accessKeyNameIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    lastAccessTime_ = 0L;
    lastAccessTimeIsSet_ = false;
}

ShowResourceDetailAccessKeyResponseBody_ak_list::~ShowResourceDetailAccessKeyResponseBody_ak_list() = default;

void ShowResourceDetailAccessKeyResponseBody_ak_list::validate()
{
}

web::json::value ShowResourceDetailAccessKeyResponseBody_ak_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successRateIsSet_) {
        val[utility::conversions::to_string_t("success_rate")] = ModelBase::toJson(successRate_);
    }
    if(failRateIsSet_) {
        val[utility::conversions::to_string_t("fail_rate")] = ModelBase::toJson(failRate_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(averageValueIsSet_) {
        val[utility::conversions::to_string_t("average_value")] = ModelBase::toJson(averageValue_);
    }
    if(totalValueIsSet_) {
        val[utility::conversions::to_string_t("total_value")] = ModelBase::toJson(totalValue_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("access_key_id")] = ModelBase::toJson(accessKeyId_);
    }
    if(accessKeyNameIsSet_) {
        val[utility::conversions::to_string_t("access_key_name")] = ModelBase::toJson(accessKeyName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastAccessTimeIsSet_) {
        val[utility::conversions::to_string_t("last_access_time")] = ModelBase::toJson(lastAccessTime_);
    }

    return val;
}
bool ShowResourceDetailAccessKeyResponseBody_ak_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverageValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_access_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_access_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastAccessTime(refVal);
        }
    }
    return ok;
}


double ShowResourceDetailAccessKeyResponseBody_ak_list::getSuccessRate() const
{
    return successRate_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setSuccessRate(double value)
{
    successRate_ = value;
    successRateIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::successRateIsSet() const
{
    return successRateIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetsuccessRate()
{
    successRateIsSet_ = false;
}

double ShowResourceDetailAccessKeyResponseBody_ak_list::getFailRate() const
{
    return failRate_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setFailRate(double value)
{
    failRate_ = value;
    failRateIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::failRateIsSet() const
{
    return failRateIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetfailRate()
{
    failRateIsSet_ = false;
}

int64_t ShowResourceDetailAccessKeyResponseBody_ak_list::getSuccessCount() const
{
    return successCount_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setSuccessCount(int64_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::successCountIsSet() const
{
    return successCountIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int64_t ShowResourceDetailAccessKeyResponseBody_ak_list::getTotalCount() const
{
    return totalCount_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsettotalCount()
{
    totalCountIsSet_ = false;
}

double ShowResourceDetailAccessKeyResponseBody_ak_list::getAverageValue() const
{
    return averageValue_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setAverageValue(double value)
{
    averageValue_ = value;
    averageValueIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::averageValueIsSet() const
{
    return averageValueIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetaverageValue()
{
    averageValueIsSet_ = false;
}

double ShowResourceDetailAccessKeyResponseBody_ak_list::getTotalValue() const
{
    return totalValue_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setTotalValue(double value)
{
    totalValue_ = value;
    totalValueIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::totalValueIsSet() const
{
    return totalValueIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsettotalValue()
{
    totalValueIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyResponseBody_ak_list::getAppId() const
{
    return appId_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyResponseBody_ak_list::getAppName() const
{
    return appName_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyResponseBody_ak_list::getAccessKeyId() const
{
    return accessKeyId_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string ShowResourceDetailAccessKeyResponseBody_ak_list::getAccessKeyName() const
{
    return accessKeyName_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setAccessKeyName(const std::string& value)
{
    accessKeyName_ = value;
    accessKeyNameIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::accessKeyNameIsSet() const
{
    return accessKeyNameIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetaccessKeyName()
{
    accessKeyNameIsSet_ = false;
}

int32_t ShowResourceDetailAccessKeyResponseBody_ak_list::getStatus() const
{
    return status_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::statusIsSet() const
{
    return statusIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ShowResourceDetailAccessKeyResponseBody_ak_list::getLastAccessTime() const
{
    return lastAccessTime_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::setLastAccessTime(int64_t value)
{
    lastAccessTime_ = value;
    lastAccessTimeIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponseBody_ak_list::lastAccessTimeIsSet() const
{
    return lastAccessTimeIsSet_;
}

void ShowResourceDetailAccessKeyResponseBody_ak_list::unsetlastAccessTime()
{
    lastAccessTimeIsSet_ = false;
}

}
}
}
}
}


