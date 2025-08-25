

#include "huaweicloud/cce/v3/model/ListUpgradeClusterTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListUpgradeClusterTasksRequest::ListUpgradeClusterTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListUpgradeClusterTasksRequest::~ListUpgradeClusterTasksRequest() = default;

void ListUpgradeClusterTasksRequest::validate()
{
}

web::json::value ListUpgradeClusterTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListUpgradeClusterTasksRequest::fromJson(const web::json::value& val)
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


std::string ListUpgradeClusterTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListUpgradeClusterTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListUpgradeClusterTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListUpgradeClusterTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


