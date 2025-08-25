

#include "huaweicloud/cce/v3/model/ShowAutopilotMaintenanceWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotMaintenanceWindowRequest::ShowAutopilotMaintenanceWindowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowAutopilotMaintenanceWindowRequest::~ShowAutopilotMaintenanceWindowRequest() = default;

void ShowAutopilotMaintenanceWindowRequest::validate()
{
}

web::json::value ShowAutopilotMaintenanceWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowAutopilotMaintenanceWindowRequest::fromJson(const web::json::value& val)
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


std::string ShowAutopilotMaintenanceWindowRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotMaintenanceWindowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotMaintenanceWindowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotMaintenanceWindowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


