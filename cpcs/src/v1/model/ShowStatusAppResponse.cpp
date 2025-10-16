

#include "huaweicloud/cpcs/v1/model/ShowStatusAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusAppResponse::ShowStatusAppResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    appListIsSet_ = false;
    totalAccessCount_ = 0L;
    totalAccessCountIsSet_ = false;
    successAccessCount_ = 0L;
    successAccessCountIsSet_ = false;
}

ShowStatusAppResponse::~ShowStatusAppResponse() = default;

void ShowStatusAppResponse::validate()
{
}

web::json::value ShowStatusAppResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(appListIsSet_) {
        val[utility::conversions::to_string_t("app_list")] = ModelBase::toJson(appList_);
    }
    if(totalAccessCountIsSet_) {
        val[utility::conversions::to_string_t("total_access_count")] = ModelBase::toJson(totalAccessCount_);
    }
    if(successAccessCountIsSet_) {
        val[utility::conversions::to_string_t("success_access_count")] = ModelBase::toJson(successAccessCount_);
    }

    return val;
}
bool ShowStatusAppResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusAppItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_access_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_access_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_access_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_access_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessAccessCount(refVal);
        }
    }
    return ok;
}


std::string ShowStatusAppResponse::getMetricName() const
{
    return metricName_;
}

void ShowStatusAppResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowStatusAppResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowStatusAppResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowStatusAppItem>& ShowStatusAppResponse::getAppList()
{
    return appList_;
}

void ShowStatusAppResponse::setAppList(const std::vector<ShowStatusAppItem>& value)
{
    appList_ = value;
    appListIsSet_ = true;
}

bool ShowStatusAppResponse::appListIsSet() const
{
    return appListIsSet_;
}

void ShowStatusAppResponse::unsetappList()
{
    appListIsSet_ = false;
}

int64_t ShowStatusAppResponse::getTotalAccessCount() const
{
    return totalAccessCount_;
}

void ShowStatusAppResponse::setTotalAccessCount(int64_t value)
{
    totalAccessCount_ = value;
    totalAccessCountIsSet_ = true;
}

bool ShowStatusAppResponse::totalAccessCountIsSet() const
{
    return totalAccessCountIsSet_;
}

void ShowStatusAppResponse::unsettotalAccessCount()
{
    totalAccessCountIsSet_ = false;
}

int64_t ShowStatusAppResponse::getSuccessAccessCount() const
{
    return successAccessCount_;
}

void ShowStatusAppResponse::setSuccessAccessCount(int64_t value)
{
    successAccessCount_ = value;
    successAccessCountIsSet_ = true;
}

bool ShowStatusAppResponse::successAccessCountIsSet() const
{
    return successAccessCountIsSet_;
}

void ShowStatusAppResponse::unsetsuccessAccessCount()
{
    successAccessCountIsSet_ = false;
}

}
}
}
}
}


