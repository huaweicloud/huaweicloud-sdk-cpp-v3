

#include "huaweicloud/cpcs/v1/model/ShowStatusClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusClusterResponse::ShowStatusClusterResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    clusterListIsSet_ = false;
}

ShowStatusClusterResponse::~ShowStatusClusterResponse() = default;

void ShowStatusClusterResponse::validate()
{
}

web::json::value ShowStatusClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(clusterListIsSet_) {
        val[utility::conversions::to_string_t("cluster_list")] = ModelBase::toJson(clusterList_);
    }

    return val;
}
bool ShowStatusClusterResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cluster_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStatusClusterItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterList(refVal);
        }
    }
    return ok;
}


std::string ShowStatusClusterResponse::getMetricName() const
{
    return metricName_;
}

void ShowStatusClusterResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowStatusClusterResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowStatusClusterResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowStatusClusterItem>& ShowStatusClusterResponse::getClusterList()
{
    return clusterList_;
}

void ShowStatusClusterResponse::setClusterList(const std::vector<ShowStatusClusterItem>& value)
{
    clusterList_ = value;
    clusterListIsSet_ = true;
}

bool ShowStatusClusterResponse::clusterListIsSet() const
{
    return clusterListIsSet_;
}

void ShowStatusClusterResponse::unsetclusterList()
{
    clusterListIsSet_ = false;
}

}
}
}
}
}


