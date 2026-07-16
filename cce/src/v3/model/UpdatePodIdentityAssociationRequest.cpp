

#include "huaweicloud/cce/v3/model/UpdatePodIdentityAssociationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdatePodIdentityAssociationRequest::UpdatePodIdentityAssociationRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    associationId_ = "";
    associationIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePodIdentityAssociationRequest::~UpdatePodIdentityAssociationRequest() = default;

void UpdatePodIdentityAssociationRequest::validate()
{
}

web::json::value UpdatePodIdentityAssociationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(associationIdIsSet_) {
        val[utility::conversions::to_string_t("association_id")] = ModelBase::toJson(associationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePodIdentityAssociationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("association_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("association_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PodIdentityAssociationUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePodIdentityAssociationRequest::getClusterId() const
{
    return clusterId_;
}

void UpdatePodIdentityAssociationRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdatePodIdentityAssociationRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdatePodIdentityAssociationRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdatePodIdentityAssociationRequest::getAssociationId() const
{
    return associationId_;
}

void UpdatePodIdentityAssociationRequest::setAssociationId(const std::string& value)
{
    associationId_ = value;
    associationIdIsSet_ = true;
}

bool UpdatePodIdentityAssociationRequest::associationIdIsSet() const
{
    return associationIdIsSet_;
}

void UpdatePodIdentityAssociationRequest::unsetassociationId()
{
    associationIdIsSet_ = false;
}

PodIdentityAssociationUpdate UpdatePodIdentityAssociationRequest::getBody() const
{
    return body_;
}

void UpdatePodIdentityAssociationRequest::setBody(const PodIdentityAssociationUpdate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePodIdentityAssociationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePodIdentityAssociationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


