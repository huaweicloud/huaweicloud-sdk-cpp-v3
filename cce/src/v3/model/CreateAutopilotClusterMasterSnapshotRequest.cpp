

#include "huaweicloud/cce/v3/model/CreateAutopilotClusterMasterSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotClusterMasterSnapshotRequest::CreateAutopilotClusterMasterSnapshotRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

CreateAutopilotClusterMasterSnapshotRequest::~CreateAutopilotClusterMasterSnapshotRequest() = default;

void CreateAutopilotClusterMasterSnapshotRequest::validate()
{
}

web::json::value CreateAutopilotClusterMasterSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool CreateAutopilotClusterMasterSnapshotRequest::fromJson(const web::json::value& val)
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


std::string CreateAutopilotClusterMasterSnapshotRequest::getClusterId() const
{
    return clusterId_;
}

void CreateAutopilotClusterMasterSnapshotRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAutopilotClusterMasterSnapshotRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAutopilotClusterMasterSnapshotRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


