

#include "huaweicloud/cce/v3/model/UpdateClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterRequest::UpdateClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClusterRequest::~UpdateClusterRequest() = default;

void UpdateClusterRequest::validate()
{
}

web::json::value UpdateClusterRequest::toJson() const
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
bool UpdateClusterRequest::fromJson(const web::json::value& val)
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
            ClusterInformation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClusterRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateClusterRequest::getErrorStatus() const
{
    return errorStatus_;
}

void UpdateClusterRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool UpdateClusterRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void UpdateClusterRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

ClusterInformation UpdateClusterRequest::getBody() const
{
    return body_;
}

void UpdateClusterRequest::setBody(const ClusterInformation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


