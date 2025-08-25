

#include "huaweicloud/cce/v3/model/UpdateNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateNodeRequest::UpdateNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNodeRequest::~UpdateNodeRequest() = default;

void UpdateNodeRequest::validate()
{
}

web::json::value UpdateNodeRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ClusterNodeInformation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNodeRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateNodeRequest::getNodeId() const
{
    return nodeId_;
}

void UpdateNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool UpdateNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void UpdateNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string UpdateNodeRequest::getErrorStatus() const
{
    return errorStatus_;
}

void UpdateNodeRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool UpdateNodeRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void UpdateNodeRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

ClusterNodeInformation UpdateNodeRequest::getBody() const
{
    return body_;
}

void UpdateNodeRequest::setBody(const ClusterNodeInformation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


