

#include "huaweicloud/cce/v3/model/ListClusterMasterSnapshotTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListClusterMasterSnapshotTasksRequest::ListClusterMasterSnapshotTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListClusterMasterSnapshotTasksRequest::~ListClusterMasterSnapshotTasksRequest() = default;

void ListClusterMasterSnapshotTasksRequest::validate()
{
}

web::json::value ListClusterMasterSnapshotTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListClusterMasterSnapshotTasksRequest::fromJson(const web::json::value& val)
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


std::string ListClusterMasterSnapshotTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListClusterMasterSnapshotTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListClusterMasterSnapshotTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListClusterMasterSnapshotTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


