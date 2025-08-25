

#include "huaweicloud/cce/v3/model/UpgradeNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeNodePoolRequest::UpgradeNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeNodePoolRequest::~UpgradeNodePoolRequest() = default;

void UpgradeNodePoolRequest::validate()
{
}

web::json::value UpgradeNodePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(nodepoolIdIsSet_) {
        val[utility::conversions::to_string_t("nodepool_id")] = ModelBase::toJson(nodepoolId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeNodePoolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nodepool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeNodePool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void UpgradeNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpgradeNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpgradeNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpgradeNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void UpgradeNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool UpgradeNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void UpgradeNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

UpgradeNodePool UpgradeNodePoolRequest::getBody() const
{
    return body_;
}

void UpgradeNodePoolRequest::setBody(const UpgradeNodePool& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


