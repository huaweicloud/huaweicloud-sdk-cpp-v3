

#include "huaweicloud/cce/v3/model/ShowClusterEndpointsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterEndpointsRequest::ShowClusterEndpointsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterEndpointsRequest::~ShowClusterEndpointsRequest() = default;

void ShowClusterEndpointsRequest::validate()
{
}

web::json::value ShowClusterEndpointsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowClusterEndpointsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowClusterEndpointsRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterEndpointsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterEndpointsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterEndpointsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


