

#include "huaweicloud/cpcs/v1/model/ShowVmMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowVmMonitorResponse::ShowVmMonitorResponse()
{
    datapointsIsSet_ = false;
    metricName_ = "";
    metricNameIsSet_ = false;
    max_ = 0.0;
    maxIsSet_ = false;
    average_ = 0.0;
    averageIsSet_ = false;
}

ShowVmMonitorResponse::~ShowVmMonitorResponse() = default;

void ShowVmMonitorResponse::validate()
{
}

web::json::value ShowVmMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datapointsIsSet_) {
        val[utility::conversions::to_string_t("datapoints")] = ModelBase::toJson(datapoints_);
    }
    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(averageIsSet_) {
        val[utility::conversions::to_string_t("average")] = ModelBase::toJson(average_);
    }

    return val;
}
bool ShowVmMonitorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datapoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datapoints"));
        if(!fieldValue.is_null())
        {
            std::vector<Datapoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatapoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverage(refVal);
        }
    }
    return ok;
}


std::vector<Datapoint>& ShowVmMonitorResponse::getDatapoints()
{
    return datapoints_;
}

void ShowVmMonitorResponse::setDatapoints(const std::vector<Datapoint>& value)
{
    datapoints_ = value;
    datapointsIsSet_ = true;
}

bool ShowVmMonitorResponse::datapointsIsSet() const
{
    return datapointsIsSet_;
}

void ShowVmMonitorResponse::unsetdatapoints()
{
    datapointsIsSet_ = false;
}

std::string ShowVmMonitorResponse::getMetricName() const
{
    return metricName_;
}

void ShowVmMonitorResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowVmMonitorResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowVmMonitorResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

double ShowVmMonitorResponse::getMax() const
{
    return max_;
}

void ShowVmMonitorResponse::setMax(double value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool ShowVmMonitorResponse::maxIsSet() const
{
    return maxIsSet_;
}

void ShowVmMonitorResponse::unsetmax()
{
    maxIsSet_ = false;
}

double ShowVmMonitorResponse::getAverage() const
{
    return average_;
}

void ShowVmMonitorResponse::setAverage(double value)
{
    average_ = value;
    averageIsSet_ = true;
}

bool ShowVmMonitorResponse::averageIsSet() const
{
    return averageIsSet_;
}

void ShowVmMonitorResponse::unsetaverage()
{
    averageIsSet_ = false;
}

}
}
}
}
}


