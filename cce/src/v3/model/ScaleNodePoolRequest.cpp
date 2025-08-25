

#include "huaweicloud/cce/v3/model/ScaleNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleNodePoolRequest::ScaleNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    bodyIsSet_ = false;
}

ScaleNodePoolRequest::~ScaleNodePoolRequest() = default;

void ScaleNodePoolRequest::validate()
{
}

web::json::value ScaleNodePoolRequest::toJson() const
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
bool ScaleNodePoolRequest::fromJson(const web::json::value& val)
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
            ScaleNodePoolRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ScaleNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void ScaleNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ScaleNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ScaleNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ScaleNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void ScaleNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool ScaleNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void ScaleNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

ScaleNodePoolRequestBody ScaleNodePoolRequest::getBody() const
{
    return body_;
}

void ScaleNodePoolRequest::setBody(const ScaleNodePoolRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ScaleNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ScaleNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


