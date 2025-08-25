

#include "huaweicloud/cce/v3/model/UpdateNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateNodePoolRequest::UpdateNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNodePoolRequest::~UpdateNodePoolRequest() = default;

void UpdateNodePoolRequest::validate()
{
}

web::json::value UpdateNodePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(nodepoolIdIsSet_) {
        val[utility::conversions::to_string_t("nodepool_id")] = ModelBase::toJson(nodepoolId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNodePoolRequest::fromJson(const web::json::value& val)
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
            NodePoolUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void UpdateNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool UpdateNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void UpdateNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

std::string UpdateNodePoolRequest::getErrorStatus() const
{
    return errorStatus_;
}

void UpdateNodePoolRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool UpdateNodePoolRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void UpdateNodePoolRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

NodePoolUpdate UpdateNodePoolRequest::getBody() const
{
    return body_;
}

void UpdateNodePoolRequest::setBody(const NodePoolUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


