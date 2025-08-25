

#include "huaweicloud/cce/v3/model/RetryAutopilotUpgradeClusterTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RetryAutopilotUpgradeClusterTaskRequest::RetryAutopilotUpgradeClusterTaskRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

RetryAutopilotUpgradeClusterTaskRequest::~RetryAutopilotUpgradeClusterTaskRequest() = default;

void RetryAutopilotUpgradeClusterTaskRequest::validate()
{
}

web::json::value RetryAutopilotUpgradeClusterTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool RetryAutopilotUpgradeClusterTaskRequest::fromJson(const web::json::value& val)
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


std::string RetryAutopilotUpgradeClusterTaskRequest::getClusterId() const
{
    return clusterId_;
}

void RetryAutopilotUpgradeClusterTaskRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RetryAutopilotUpgradeClusterTaskRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RetryAutopilotUpgradeClusterTaskRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


