

#include "huaweicloud/cce/v3/model/ShowAutopilotClusterEndpointsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotClusterEndpointsRequest::ShowAutopilotClusterEndpointsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowAutopilotClusterEndpointsRequest::~ShowAutopilotClusterEndpointsRequest() = default;

void ShowAutopilotClusterEndpointsRequest::validate()
{
}

web::json::value ShowAutopilotClusterEndpointsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowAutopilotClusterEndpointsRequest::fromJson(const web::json::value& val)
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


std::string ShowAutopilotClusterEndpointsRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotClusterEndpointsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotClusterEndpointsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotClusterEndpointsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


