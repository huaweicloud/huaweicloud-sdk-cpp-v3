

#include "huaweicloud/cce/v3/model/MigrateToNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateToNodePoolRequest::MigrateToNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateToNodePoolRequest::~MigrateToNodePoolRequest() = default;

void MigrateToNodePoolRequest::validate()
{
}

web::json::value MigrateToNodePoolRequest::toJson() const
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
bool MigrateToNodePoolRequest::fromJson(const web::json::value& val)
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
            MigrateNodesToNodePoolList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MigrateToNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void MigrateToNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool MigrateToNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void MigrateToNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string MigrateToNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void MigrateToNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool MigrateToNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void MigrateToNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

MigrateNodesToNodePoolList MigrateToNodePoolRequest::getBody() const
{
    return body_;
}

void MigrateToNodePoolRequest::setBody(const MigrateNodesToNodePoolList& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateToNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateToNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


