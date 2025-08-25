

#include "huaweicloud/cce/v3/model/ListAutopilotReleasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotReleasesRequest::ListAutopilotReleasesRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    chartId_ = "";
    chartIdIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
}

ListAutopilotReleasesRequest::~ListAutopilotReleasesRequest() = default;

void ListAutopilotReleasesRequest::validate()
{
}

web::json::value ListAutopilotReleasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(chartIdIsSet_) {
        val[utility::conversions::to_string_t("chart_id")] = ModelBase::toJson(chartId_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }

    return val;
}
bool ListAutopilotReleasesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chart_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotReleasesRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotReleasesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotReleasesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotReleasesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListAutopilotReleasesRequest::getChartId() const
{
    return chartId_;
}

void ListAutopilotReleasesRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool ListAutopilotReleasesRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void ListAutopilotReleasesRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

std::string ListAutopilotReleasesRequest::getNamespace() const
{
    return namespace_;
}

void ListAutopilotReleasesRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListAutopilotReleasesRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListAutopilotReleasesRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

}
}
}
}
}


