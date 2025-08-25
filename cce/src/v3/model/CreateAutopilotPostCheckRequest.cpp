

#include "huaweicloud/cce/v3/model/CreateAutopilotPostCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotPostCheckRequest::CreateAutopilotPostCheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAutopilotPostCheckRequest::~CreateAutopilotPostCheckRequest() = default;

void CreateAutopilotPostCheckRequest::validate()
{
}

web::json::value CreateAutopilotPostCheckRequest::toJson() const
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
bool CreateAutopilotPostCheckRequest::fromJson(const web::json::value& val)
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
            PostcheckClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotPostCheckRequest::getClusterId() const
{
    return clusterId_;
}

void CreateAutopilotPostCheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAutopilotPostCheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAutopilotPostCheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PostcheckClusterRequestBody CreateAutopilotPostCheckRequest::getBody() const
{
    return body_;
}

void CreateAutopilotPostCheckRequest::setBody(const PostcheckClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutopilotPostCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutopilotPostCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


