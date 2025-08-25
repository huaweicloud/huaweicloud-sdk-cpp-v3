

#include "huaweicloud/cce/v3/model/ListUpgradeWorkFlowsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListUpgradeWorkFlowsRequest::ListUpgradeWorkFlowsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListUpgradeWorkFlowsRequest::~ListUpgradeWorkFlowsRequest() = default;

void ListUpgradeWorkFlowsRequest::validate()
{
}

web::json::value ListUpgradeWorkFlowsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListUpgradeWorkFlowsRequest::fromJson(const web::json::value& val)
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


std::string ListUpgradeWorkFlowsRequest::getClusterId() const
{
    return clusterId_;
}

void ListUpgradeWorkFlowsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListUpgradeWorkFlowsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListUpgradeWorkFlowsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


