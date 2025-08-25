

#include "huaweicloud/cce/v3/model/ListAutopilotUpgradeWorkFlowsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotUpgradeWorkFlowsRequest::ListAutopilotUpgradeWorkFlowsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAutopilotUpgradeWorkFlowsRequest::~ListAutopilotUpgradeWorkFlowsRequest() = default;

void ListAutopilotUpgradeWorkFlowsRequest::validate()
{
}

web::json::value ListAutopilotUpgradeWorkFlowsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAutopilotUpgradeWorkFlowsRequest::fromJson(const web::json::value& val)
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


std::string ListAutopilotUpgradeWorkFlowsRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotUpgradeWorkFlowsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotUpgradeWorkFlowsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotUpgradeWorkFlowsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


