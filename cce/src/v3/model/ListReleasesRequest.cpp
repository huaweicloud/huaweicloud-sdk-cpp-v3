

#include "huaweicloud/cce/v3/model/ListReleasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListReleasesRequest::ListReleasesRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    chartId_ = "";
    chartIdIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
}

ListReleasesRequest::~ListReleasesRequest() = default;

void ListReleasesRequest::validate()
{
}

web::json::value ListReleasesRequest::toJson() const
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
bool ListReleasesRequest::fromJson(const web::json::value& val)
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


std::string ListReleasesRequest::getClusterId() const
{
    return clusterId_;
}

void ListReleasesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListReleasesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListReleasesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListReleasesRequest::getChartId() const
{
    return chartId_;
}

void ListReleasesRequest::setChartId(const std::string& value)
{
    chartId_ = value;
    chartIdIsSet_ = true;
}

bool ListReleasesRequest::chartIdIsSet() const
{
    return chartIdIsSet_;
}

void ListReleasesRequest::unsetchartId()
{
    chartIdIsSet_ = false;
}

std::string ListReleasesRequest::getNamespace() const
{
    return namespace_;
}

void ListReleasesRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListReleasesRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListReleasesRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

}
}
}
}
}


