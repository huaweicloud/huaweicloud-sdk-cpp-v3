

#include "huaweicloud/cce/v3/model/DeletePodIdentityAssociationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeletePodIdentityAssociationRequest::DeletePodIdentityAssociationRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    associationId_ = "";
    associationIdIsSet_ = false;
}

DeletePodIdentityAssociationRequest::~DeletePodIdentityAssociationRequest() = default;

void DeletePodIdentityAssociationRequest::validate()
{
}

web::json::value DeletePodIdentityAssociationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(associationIdIsSet_) {
        val[utility::conversions::to_string_t("association_id")] = ModelBase::toJson(associationId_);
    }

    return val;
}
bool DeletePodIdentityAssociationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeletePodIdentityAssociationRequest::getClusterId() const
{
    return clusterId_;
}

void DeletePodIdentityAssociationRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeletePodIdentityAssociationRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeletePodIdentityAssociationRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeletePodIdentityAssociationRequest::getAssociationId() const
{
    return associationId_;
}

void DeletePodIdentityAssociationRequest::setAssociationId(const std::string& value)
{
    associationId_ = value;
    associationIdIsSet_ = true;
}

bool DeletePodIdentityAssociationRequest::associationIdIsSet() const
{
    return associationIdIsSet_;
}

void DeletePodIdentityAssociationRequest::unsetassociationId()
{
    associationIdIsSet_ = false;
}

}
}
}
}
}


