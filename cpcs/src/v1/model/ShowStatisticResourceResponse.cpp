

#include "huaweicloud/cpcs/v1/model/ShowStatisticResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticResourceResponse::ShowStatisticResourceResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    datapointsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ShowStatisticResourceResponse::~ShowStatisticResourceResponse() = default;

void ShowStatisticResourceResponse::validate()
{
}

web::json::value ShowStatisticResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(datapointsIsSet_) {
        val[utility::conversions::to_string_t("datapoints")] = ModelBase::toJson(datapoints_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowStatisticResourceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datapoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datapoints"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatisticResourceResponseBody_datapoints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatapoints(refVal);
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
    return ok;
}


std::string ShowStatisticResourceResponse::getMetricName() const
{
    return metricName_;
}

void ShowStatisticResourceResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowStatisticResourceResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowStatisticResourceResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowStatisticResourceResponseBody_datapoints>& ShowStatisticResourceResponse::getDatapoints()
{
    return datapoints_;
}

void ShowStatisticResourceResponse::setDatapoints(const std::vector<ShowStatisticResourceResponseBody_datapoints>& value)
{
    datapoints_ = value;
    datapointsIsSet_ = true;
}

bool ShowStatisticResourceResponse::datapointsIsSet() const
{
    return datapointsIsSet_;
}

void ShowStatisticResourceResponse::unsetdatapoints()
{
    datapointsIsSet_ = false;
}

int64_t ShowStatisticResourceResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowStatisticResourceResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowStatisticResourceResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowStatisticResourceResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


