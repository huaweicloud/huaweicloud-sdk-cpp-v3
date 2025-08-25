

#include "huaweicloud/cce/v3/model/CreateAutopilotMaintenanceWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotMaintenanceWindowRequest::CreateAutopilotMaintenanceWindowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAutopilotMaintenanceWindowRequest::~CreateAutopilotMaintenanceWindowRequest() = default;

void CreateAutopilotMaintenanceWindowRequest::validate()
{
}

web::json::value CreateAutopilotMaintenanceWindowRequest::toJson() const
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
bool CreateAutopilotMaintenanceWindowRequest::fromJson(const web::json::value& val)
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


std::string CreateAutopilotMaintenanceWindowRequest::getClusterId() const
{
    return clusterId_;
}

void CreateAutopilotMaintenanceWindowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAutopilotMaintenanceWindowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAutopilotMaintenanceWindowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

MaintenanceWindow CreateAutopilotMaintenanceWindowRequest::getBody() const
{
    return body_;
}

void CreateAutopilotMaintenanceWindowRequest::setBody(const MaintenanceWindow& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutopilotMaintenanceWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutopilotMaintenanceWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


