

#include "huaweicloud/cce/v3/model/ListAutopilotClusterMasterSnapshotTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotClusterMasterSnapshotTasksRequest::ListAutopilotClusterMasterSnapshotTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAutopilotClusterMasterSnapshotTasksRequest::~ListAutopilotClusterMasterSnapshotTasksRequest() = default;

void ListAutopilotClusterMasterSnapshotTasksRequest::validate()
{
}

web::json::value ListAutopilotClusterMasterSnapshotTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAutopilotClusterMasterSnapshotTasksRequest::fromJson(const web::json::value& val)
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


std::string ListAutopilotClusterMasterSnapshotTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotClusterMasterSnapshotTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotClusterMasterSnapshotTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotClusterMasterSnapshotTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


