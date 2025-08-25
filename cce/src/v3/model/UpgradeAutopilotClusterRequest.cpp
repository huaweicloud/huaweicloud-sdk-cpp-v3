

#include "huaweicloud/cce/v3/model/UpgradeAutopilotClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeAutopilotClusterRequest::UpgradeAutopilotClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeAutopilotClusterRequest::~UpgradeAutopilotClusterRequest() = default;

void UpgradeAutopilotClusterRequest::validate()
{
}

web::json::value UpgradeAutopilotClusterRequest::toJson() const
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
bool UpgradeAutopilotClusterRequest::fromJson(const web::json::value& val)
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
            UpgradeClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeAutopilotClusterRequest::getClusterId() const
{
    return clusterId_;
}

void UpgradeAutopilotClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpgradeAutopilotClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpgradeAutopilotClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

UpgradeClusterRequestBody UpgradeAutopilotClusterRequest::getBody() const
{
    return body_;
}

void UpgradeAutopilotClusterRequest::setBody(const UpgradeClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeAutopilotClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeAutopilotClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


