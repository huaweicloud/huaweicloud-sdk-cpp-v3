

#include "huaweicloud/cce/v3/model/UpdateAutopilotMaintenanceWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotMaintenanceWindowRequest::UpdateAutopilotMaintenanceWindowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutopilotMaintenanceWindowRequest::~UpdateAutopilotMaintenanceWindowRequest() = default;

void UpdateAutopilotMaintenanceWindowRequest::validate()
{
}

web::json::value UpdateAutopilotMaintenanceWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutopilotMaintenanceWindowRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MaintenanceWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutopilotMaintenanceWindowRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateAutopilotMaintenanceWindowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAutopilotMaintenanceWindowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAutopilotMaintenanceWindowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

MaintenanceWindow UpdateAutopilotMaintenanceWindowRequest::getBody() const
{
    return body_;
}

void UpdateAutopilotMaintenanceWindowRequest::setBody(const MaintenanceWindow& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutopilotMaintenanceWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutopilotMaintenanceWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


