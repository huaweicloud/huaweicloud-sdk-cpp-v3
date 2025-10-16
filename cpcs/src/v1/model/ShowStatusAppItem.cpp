

#include "huaweicloud/cpcs/v1/model/ShowStatusAppItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusAppItem::ShowStatusAppItem()
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
    status_ = "";
    statusIsSet_ = false;
}

ShowStatusAppItem::~ShowStatusAppItem() = default;

void ShowStatusAppItem::validate()
{
}

web::json::value ShowStatusAppItem::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowStatusAppItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


double ShowStatusAppItem::getSuccessRate() const
{
    return successRate_;
}

void ShowStatusAppItem::setSuccessRate(double value)
{
    successRate_ = value;
    successRateIsSet_ = true;
}

bool ShowStatusAppItem::successRateIsSet() const
{
    return successRateIsSet_;
}

void ShowStatusAppItem::unsetsuccessRate()
{
    successRateIsSet_ = false;
}

double ShowStatusAppItem::getFailRate() const
{
    return failRate_;
}

void ShowStatusAppItem::setFailRate(double value)
{
    failRate_ = value;
    failRateIsSet_ = true;
}

bool ShowStatusAppItem::failRateIsSet() const
{
    return failRateIsSet_;
}

void ShowStatusAppItem::unsetfailRate()
{
    failRateIsSet_ = false;
}

int64_t ShowStatusAppItem::getSuccessCount() const
{
    return successCount_;
}

void ShowStatusAppItem::setSuccessCount(int64_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool ShowStatusAppItem::successCountIsSet() const
{
    return successCountIsSet_;
}

void ShowStatusAppItem::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int64_t ShowStatusAppItem::getTotalCount() const
{
    return totalCount_;
}

void ShowStatusAppItem::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowStatusAppItem::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowStatusAppItem::unsettotalCount()
{
    totalCountIsSet_ = false;
}

double ShowStatusAppItem::getAverageValue() const
{
    return averageValue_;
}

void ShowStatusAppItem::setAverageValue(double value)
{
    averageValue_ = value;
    averageValueIsSet_ = true;
}

bool ShowStatusAppItem::averageValueIsSet() const
{
    return averageValueIsSet_;
}

void ShowStatusAppItem::unsetaverageValue()
{
    averageValueIsSet_ = false;
}

double ShowStatusAppItem::getTotalValue() const
{
    return totalValue_;
}

void ShowStatusAppItem::setTotalValue(double value)
{
    totalValue_ = value;
    totalValueIsSet_ = true;
}

bool ShowStatusAppItem::totalValueIsSet() const
{
    return totalValueIsSet_;
}

void ShowStatusAppItem::unsettotalValue()
{
    totalValueIsSet_ = false;
}

std::string ShowStatusAppItem::getAppId() const
{
    return appId_;
}

void ShowStatusAppItem::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowStatusAppItem::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowStatusAppItem::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowStatusAppItem::getAppName() const
{
    return appName_;
}

void ShowStatusAppItem::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowStatusAppItem::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowStatusAppItem::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowStatusAppItem::getStatus() const
{
    return status_;
}

void ShowStatusAppItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowStatusAppItem::statusIsSet() const
{
    return statusIsSet_;
}

void ShowStatusAppItem::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


