

#include "huaweicloud/cce/v3/model/UpdateAutopilotClusterEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotClusterEipRequest::UpdateAutopilotClusterEipRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutopilotClusterEipRequest::~UpdateAutopilotClusterEipRequest() = default;

void UpdateAutopilotClusterEipRequest::validate()
{
}

web::json::value UpdateAutopilotClusterEipRequest::toJson() const
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
bool UpdateAutopilotClusterEipRequest::fromJson(const web::json::value& val)
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
            MasterEIPRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutopilotClusterEipRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateAutopilotClusterEipRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAutopilotClusterEipRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAutopilotClusterEipRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

MasterEIPRequest UpdateAutopilotClusterEipRequest::getBody() const
{
    return body_;
}

void UpdateAutopilotClusterEipRequest::setBody(const MasterEIPRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutopilotClusterEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutopilotClusterEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


