

#include "huaweicloud/cce/v3/model/DeleteAutopilotMaintenanceWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotMaintenanceWindowRequest::DeleteAutopilotMaintenanceWindowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

DeleteAutopilotMaintenanceWindowRequest::~DeleteAutopilotMaintenanceWindowRequest() = default;

void DeleteAutopilotMaintenanceWindowRequest::validate()
{
}

web::json::value DeleteAutopilotMaintenanceWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool DeleteAutopilotMaintenanceWindowRequest::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotMaintenanceWindowRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteAutopilotMaintenanceWindowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteAutopilotMaintenanceWindowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteAutopilotMaintenanceWindowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


