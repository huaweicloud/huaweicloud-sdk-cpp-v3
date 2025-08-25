

#include "huaweicloud/cce/v3/model/ListAutopilotPreCheckTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotPreCheckTasksRequest::ListAutopilotPreCheckTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ListAutopilotPreCheckTasksRequest::~ListAutopilotPreCheckTasksRequest() = default;

void ListAutopilotPreCheckTasksRequest::validate()
{
}

web::json::value ListAutopilotPreCheckTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ListAutopilotPreCheckTasksRequest::fromJson(const web::json::value& val)
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


std::string ListAutopilotPreCheckTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotPreCheckTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotPreCheckTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotPreCheckTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


