

#include "huaweicloud/cce/v3/model/RevokeKubernetesClusterCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RevokeKubernetesClusterCertRequest::RevokeKubernetesClusterCertRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

RevokeKubernetesClusterCertRequest::~RevokeKubernetesClusterCertRequest() = default;

void RevokeKubernetesClusterCertRequest::validate()
{
}

web::json::value RevokeKubernetesClusterCertRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RevokeKubernetesClusterCertRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CertRevokeConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RevokeKubernetesClusterCertRequest::getClusterId() const
{
    return clusterId_;
}

void RevokeKubernetesClusterCertRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RevokeKubernetesClusterCertRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RevokeKubernetesClusterCertRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

CertRevokeConfigRequestBody RevokeKubernetesClusterCertRequest::getBody() const
{
    return body_;
}

void RevokeKubernetesClusterCertRequest::setBody(const CertRevokeConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RevokeKubernetesClusterCertRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RevokeKubernetesClusterCertRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


