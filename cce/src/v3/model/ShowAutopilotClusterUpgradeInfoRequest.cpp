

#include "huaweicloud/cce/v3/model/ShowAutopilotClusterUpgradeInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotClusterUpgradeInfoRequest::ShowAutopilotClusterUpgradeInfoRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowAutopilotClusterUpgradeInfoRequest::~ShowAutopilotClusterUpgradeInfoRequest() = default;

void ShowAutopilotClusterUpgradeInfoRequest::validate()
{
}

web::json::value ShowAutopilotClusterUpgradeInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowAutopilotClusterUpgradeInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowAutopilotClusterUpgradeInfoRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotClusterUpgradeInfoRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotClusterUpgradeInfoRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotClusterUpgradeInfoRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


