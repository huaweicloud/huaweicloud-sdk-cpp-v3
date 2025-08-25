

#include "huaweicloud/cce/v3/model/AddNodesToNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodesToNodePoolRequest::AddNodesToNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddNodesToNodePoolRequest::~AddNodesToNodePoolRequest() = default;

void AddNodesToNodePoolRequest::validate()
{
}

web::json::value AddNodesToNodePoolRequest::toJson() const
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
bool AddNodesToNodePoolRequest::fromJson(const web::json::value& val)
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
            AddNodesToNodePoolList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddNodesToNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void AddNodesToNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AddNodesToNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AddNodesToNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string AddNodesToNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void AddNodesToNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool AddNodesToNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void AddNodesToNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

AddNodesToNodePoolList AddNodesToNodePoolRequest::getBody() const
{
    return body_;
}

void AddNodesToNodePoolRequest::setBody(const AddNodesToNodePoolList& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddNodesToNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddNodesToNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


