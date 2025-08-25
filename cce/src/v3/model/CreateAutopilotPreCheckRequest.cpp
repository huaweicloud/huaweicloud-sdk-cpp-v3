

#include "huaweicloud/cce/v3/model/CreateAutopilotPreCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotPreCheckRequest::CreateAutopilotPreCheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAutopilotPreCheckRequest::~CreateAutopilotPreCheckRequest() = default;

void CreateAutopilotPreCheckRequest::validate()
{
}

web::json::value CreateAutopilotPreCheckRequest::toJson() const
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
bool CreateAutopilotPreCheckRequest::fromJson(const web::json::value& val)
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
            PrecheckClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotPreCheckRequest::getClusterId() const
{
    return clusterId_;
}

void CreateAutopilotPreCheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAutopilotPreCheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAutopilotPreCheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PrecheckClusterRequestBody CreateAutopilotPreCheckRequest::getBody() const
{
    return body_;
}

void CreateAutopilotPreCheckRequest::setBody(const PrecheckClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutopilotPreCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutopilotPreCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


