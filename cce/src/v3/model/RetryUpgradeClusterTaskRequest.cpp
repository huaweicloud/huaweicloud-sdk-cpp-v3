

#include "huaweicloud/cce/v3/model/RetryUpgradeClusterTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RetryUpgradeClusterTaskRequest::RetryUpgradeClusterTaskRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

RetryUpgradeClusterTaskRequest::~RetryUpgradeClusterTaskRequest() = default;

void RetryUpgradeClusterTaskRequest::validate()
{
}

web::json::value RetryUpgradeClusterTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool RetryUpgradeClusterTaskRequest::fromJson(const web::json::value& val)
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


std::string RetryUpgradeClusterTaskRequest::getClusterId() const
{
    return clusterId_;
}

void RetryUpgradeClusterTaskRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RetryUpgradeClusterTaskRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RetryUpgradeClusterTaskRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


