

#include "huaweicloud/cce/v3/model/ListNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListNodesRequest::ListNodesRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListNodesRequest::~ListNodesRequest() = default;

void ListNodesRequest::validate()
{
}

web::json::value ListNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListNodesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("errorStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListNodesRequest::getClusterId() const
{
    return clusterId_;
}

void ListNodesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListNodesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListNodesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListNodesRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ListNodesRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ListNodesRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ListNodesRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

int32_t ListNodesRequest::getLimit() const
{
    return limit_;
}

void ListNodesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNodesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNodesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListNodesRequest::getMarker() const
{
    return marker_;
}

void ListNodesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListNodesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListNodesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


