

#include "huaweicloud/cce/v3/model/DeleteNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteNodePoolRequest::DeleteNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
}

DeleteNodePoolRequest::~DeleteNodePoolRequest() = default;

void DeleteNodePoolRequest::validate()
{
}

web::json::value DeleteNodePoolRequest::toJson() const
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

    return val;
}
bool DeleteNodePoolRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void DeleteNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool DeleteNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void DeleteNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

std::string DeleteNodePoolRequest::getErrorStatus() const
{
    return errorStatus_;
}

void DeleteNodePoolRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool DeleteNodePoolRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void DeleteNodePoolRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

}
}
}
}
}


