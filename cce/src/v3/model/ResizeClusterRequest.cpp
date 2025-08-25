

#include "huaweicloud/cce/v3/model/ResizeClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResizeClusterRequest::ResizeClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeClusterRequest::~ResizeClusterRequest() = default;

void ResizeClusterRequest::validate()
{
}

web::json::value ResizeClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResizeClusterRequest::fromJson(const web::json::value& val)
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
            ResizeClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeClusterRequest::getClusterId() const
{
    return clusterId_;
}

void ResizeClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ResizeClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ResizeClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ResizeClusterRequest::getErrorStatus() const
{
    return errorStatus_;
}

void ResizeClusterRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool ResizeClusterRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void ResizeClusterRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

ResizeClusterRequestBody ResizeClusterRequest::getBody() const
{
    return body_;
}

void ResizeClusterRequest::setBody(const ResizeClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


