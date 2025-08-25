

#include "huaweicloud/cce/v3/model/CreateAutopilotReleaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotReleaseRequest::CreateAutopilotReleaseRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAutopilotReleaseRequest::~CreateAutopilotReleaseRequest() = default;

void CreateAutopilotReleaseRequest::validate()
{
}

web::json::value CreateAutopilotReleaseRequest::toJson() const
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
bool CreateAutopilotReleaseRequest::fromJson(const web::json::value& val)
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
            CreateReleaseReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotReleaseRequest::getClusterId() const
{
    return clusterId_;
}

void CreateAutopilotReleaseRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAutopilotReleaseRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAutopilotReleaseRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

CreateReleaseReqBody CreateAutopilotReleaseRequest::getBody() const
{
    return body_;
}

void CreateAutopilotReleaseRequest::setBody(const CreateReleaseReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutopilotReleaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutopilotReleaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


