

#include "huaweicloud/cce/v3/model/DeleteNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteNodeRequest::DeleteNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    nodepoolScaleDown_ = "";
    nodepoolScaleDownIsSet_ = false;
}

DeleteNodeRequest::~DeleteNodeRequest() = default;

void DeleteNodeRequest::validate()
{
}

web::json::value DeleteNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(nodepoolScaleDownIsSet_) {
        val[utility::conversions::to_string_t("nodepoolScaleDown")] = ModelBase::toJson(nodepoolScaleDown_);
    }

    return val;
}
bool DeleteNodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nodepoolScaleDown"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepoolScaleDown"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolScaleDown(refVal);
        }
    }
    return ok;
}


std::string DeleteNodeRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteNodeRequest::getNodeId() const
{
    return nodeId_;
}

void DeleteNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string DeleteNodeRequest::getErrorStatus() const
{
    return errorStatus_;
}

void DeleteNodeRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool DeleteNodeRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void DeleteNodeRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string DeleteNodeRequest::getNodepoolScaleDown() const
{
    return nodepoolScaleDown_;
}

void DeleteNodeRequest::setNodepoolScaleDown(const std::string& value)
{
    nodepoolScaleDown_ = value;
    nodepoolScaleDownIsSet_ = true;
}

bool DeleteNodeRequest::nodepoolScaleDownIsSet() const
{
    return nodepoolScaleDownIsSet_;
}

void DeleteNodeRequest::unsetnodepoolScaleDown()
{
    nodepoolScaleDownIsSet_ = false;
}

}
}
}
}
}


