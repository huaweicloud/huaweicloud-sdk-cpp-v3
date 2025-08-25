

#include "huaweicloud/cce/v3/model/ListAutopilotUpgradeClusterTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotUpgradeClusterTasksRequest::ListAutopilotUpgradeClusterTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAutopilotUpgradeClusterTasksRequest::~ListAutopilotUpgradeClusterTasksRequest() = default;

void ListAutopilotUpgradeClusterTasksRequest::validate()
{
}

web::json::value ListAutopilotUpgradeClusterTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAutopilotUpgradeClusterTasksRequest::fromJson(const web::json::value& val)
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


std::string ListAutopilotUpgradeClusterTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotUpgradeClusterTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotUpgradeClusterTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotUpgradeClusterTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


