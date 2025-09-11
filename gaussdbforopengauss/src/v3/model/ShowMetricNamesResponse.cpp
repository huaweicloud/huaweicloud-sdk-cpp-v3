

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowMetricNamesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowMetricNamesResponse::ShowMetricNamesResponse()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    metricNamesIsSet_ = false;
}

ShowMetricNamesResponse::~ShowMetricNamesResponse() = default;

void ShowMetricNamesResponse::validate()
{
}

web::json::value ShowMetricNamesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(metricNamesIsSet_) {
        val[utility::conversions::to_string_t("metric_names")] = ModelBase::toJson(metricNames_);
    }

    return val;
}
bool ShowMetricNamesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_names"));
        if(!fieldValue.is_null())
        {
            std::vector<MetricNameResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricNames(refVal);
        }
    }
    return ok;
}


std::string ShowMetricNamesResponse::getGroupName() const
{
    return groupName_;
}

void ShowMetricNamesResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowMetricNamesResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowMetricNamesResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<MetricNameResult>& ShowMetricNamesResponse::getMetricNames()
{
    return metricNames_;
}

void ShowMetricNamesResponse::setMetricNames(const std::vector<MetricNameResult>& value)
{
    metricNames_ = value;
    metricNamesIsSet_ = true;
}

bool ShowMetricNamesResponse::metricNamesIsSet() const
{
    return metricNamesIsSet_;
}

void ShowMetricNamesResponse::unsetmetricNames()
{
    metricNamesIsSet_ = false;
}

}
}
}
}
}


