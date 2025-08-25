

#include "huaweicloud/cce/v3/model/UpgradeClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeClusterRequest::UpgradeClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeClusterRequest::~UpgradeClusterRequest() = default;

void UpgradeClusterRequest::validate()
{
}

web::json::value UpgradeClusterRequest::toJson() const
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
bool UpgradeClusterRequest::fromJson(const web::json::value& val)
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


std::string UpgradeClusterRequest::getClusterId() const
{
    return clusterId_;
}

void UpgradeClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpgradeClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpgradeClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

UpgradeClusterRequestBody UpgradeClusterRequest::getBody() const
{
    return body_;
}

void UpgradeClusterRequest::setBody(const UpgradeClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


