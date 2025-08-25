

#include "huaweicloud/cce/v3/model/BatchSyncNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchSyncNodesRequest::BatchSyncNodesRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

BatchSyncNodesRequest::~BatchSyncNodesRequest() = default;

void BatchSyncNodesRequest::validate()
{
}

web::json::value BatchSyncNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool BatchSyncNodesRequest::fromJson(const web::json::value& val)
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


std::string BatchSyncNodesRequest::getClusterId() const
{
    return clusterId_;
}

void BatchSyncNodesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchSyncNodesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchSyncNodesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


