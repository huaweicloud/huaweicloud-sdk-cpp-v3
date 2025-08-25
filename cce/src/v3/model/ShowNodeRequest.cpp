

#include "huaweicloud/cce/v3/model/ShowNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodeRequest::ShowNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
}

ShowNodeRequest::~ShowNodeRequest() = default;

void ShowNodeRequest::validate()
{
}

web::json::value ShowNodeRequest::toJson() const
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

    return val;
}
bool ShowNodeRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowNodeRequest::getClusterId() const
{
    return clusterId_;
}

void ShowNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowNodeRequest::getNodeId() const
{
    return nodeId_;
}

void ShowNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowNodeRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ShowNodeRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ShowNodeRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ShowNodeRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

}
}
}
}
}


