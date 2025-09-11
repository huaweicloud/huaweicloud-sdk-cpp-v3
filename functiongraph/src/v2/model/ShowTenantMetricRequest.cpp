

#include "huaweicloud/functiongraph/v2/model/ShowTenantMetricRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowTenantMetricRequest::ShowTenantMetricRequest()
{
    period_ = "";
    periodIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    metricType_ = "";
    metricTypeIsSet_ = false;
}

ShowTenantMetricRequest::~ShowTenantMetricRequest() = default;

void ShowTenantMetricRequest::validate()
{
}

web::json::value ShowTenantMetricRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(metricTypeIsSet_) {
        val[utility::conversions::to_string_t("metric_type")] = ModelBase::toJson(metricType_);
    }

    return val;
}
bool ShowTenantMetricRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metric_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricType(refVal);
        }
    }
    return ok;
}


std::string ShowTenantMetricRequest::getPeriod() const
{
    return period_;
}

void ShowTenantMetricRequest::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowTenantMetricRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowTenantMetricRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowTenantMetricRequest::getStartTime() const
{
    return startTime_;
}

void ShowTenantMetricRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowTenantMetricRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowTenantMetricRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowTenantMetricRequest::getEndTime() const
{
    return endTime_;
}

void ShowTenantMetricRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowTenantMetricRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowTenantMetricRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowTenantMetricRequest::getMetricType() const
{
    return metricType_;
}

void ShowTenantMetricRequest::setMetricType(const std::string& value)
{
    metricType_ = value;
    metricTypeIsSet_ = true;
}

bool ShowTenantMetricRequest::metricTypeIsSet() const
{
    return metricTypeIsSet_;
}

void ShowTenantMetricRequest::unsetmetricType()
{
    metricTypeIsSet_ = false;
}

}
}
}
}
}


