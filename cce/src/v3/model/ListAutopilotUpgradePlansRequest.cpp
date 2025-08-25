

#include "huaweicloud/cce/v3/model/ListAutopilotUpgradePlansRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotUpgradePlansRequest::ListAutopilotUpgradePlansRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAutopilotUpgradePlansRequest::~ListAutopilotUpgradePlansRequest() = default;

void ListAutopilotUpgradePlansRequest::validate()
{
}

web::json::value ListAutopilotUpgradePlansRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAutopilotUpgradePlansRequest::fromJson(const web::json::value& val)
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


std::string ListAutopilotUpgradePlansRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotUpgradePlansRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotUpgradePlansRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotUpgradePlansRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


