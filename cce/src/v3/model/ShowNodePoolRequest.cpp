

#include "huaweicloud/cce/v3/model/ShowNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodePoolRequest::ShowNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
}

ShowNodePoolRequest::~ShowNodePoolRequest() = default;

void ShowNodePoolRequest::validate()
{
}

web::json::value ShowNodePoolRequest::toJson() const
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
bool ShowNodePoolRequest::fromJson(const web::json::value& val)
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


std::string ShowNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void ShowNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowNodePoolRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void ShowNodePoolRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool ShowNodePoolRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void ShowNodePoolRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

std::string ShowNodePoolRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ShowNodePoolRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ShowNodePoolRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ShowNodePoolRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

}
}
}
}
}


