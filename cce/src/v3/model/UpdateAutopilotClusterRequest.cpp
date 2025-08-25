

#include "huaweicloud/cce/v3/model/UpdateAutopilotClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotClusterRequest::UpdateAutopilotClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutopilotClusterRequest::~UpdateAutopilotClusterRequest() = default;

void UpdateAutopilotClusterRequest::validate()
{
}

web::json::value UpdateAutopilotClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutopilotClusterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("errorStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterInformation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutopilotClusterRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateAutopilotClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAutopilotClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAutopilotClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateAutopilotClusterRequest::getErrorStatus() const
{
    return errorStatus_;
}

void UpdateAutopilotClusterRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool UpdateAutopilotClusterRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void UpdateAutopilotClusterRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

AutopilotClusterInformation UpdateAutopilotClusterRequest::getBody() const
{
    return body_;
}

void UpdateAutopilotClusterRequest::setBody(const AutopilotClusterInformation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutopilotClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutopilotClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


