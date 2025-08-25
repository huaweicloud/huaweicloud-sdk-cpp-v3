

#include "huaweicloud/cce/v3/model/CreateClusterMasterSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateClusterMasterSnapshotRequest::CreateClusterMasterSnapshotRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

CreateClusterMasterSnapshotRequest::~CreateClusterMasterSnapshotRequest() = default;

void CreateClusterMasterSnapshotRequest::validate()
{
}

web::json::value CreateClusterMasterSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool CreateClusterMasterSnapshotRequest::fromJson(const web::json::value& val)
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


std::string CreateClusterMasterSnapshotRequest::getClusterId() const
{
    return clusterId_;
}

void CreateClusterMasterSnapshotRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateClusterMasterSnapshotRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateClusterMasterSnapshotRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


