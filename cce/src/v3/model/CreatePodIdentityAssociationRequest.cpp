

#include "huaweicloud/cce/v3/model/CreatePodIdentityAssociationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePodIdentityAssociationRequest::CreatePodIdentityAssociationRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePodIdentityAssociationRequest::~CreatePodIdentityAssociationRequest() = default;

void CreatePodIdentityAssociationRequest::validate()
{
}

web::json::value CreatePodIdentityAssociationRequest::toJson() const
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
bool CreatePodIdentityAssociationRequest::fromJson(const web::json::value& val)
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
            PodIdentityAssociation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePodIdentityAssociationRequest::getClusterId() const
{
    return clusterId_;
}

void CreatePodIdentityAssociationRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreatePodIdentityAssociationRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreatePodIdentityAssociationRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PodIdentityAssociation CreatePodIdentityAssociationRequest::getBody() const
{
    return body_;
}

void CreatePodIdentityAssociationRequest::setBody(const PodIdentityAssociation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePodIdentityAssociationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePodIdentityAssociationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


