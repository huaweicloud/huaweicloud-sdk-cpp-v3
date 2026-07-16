

#include "huaweicloud/cce/v3/model/ShowPodIdentityAssociationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowPodIdentityAssociationRequest::ShowPodIdentityAssociationRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    associationId_ = "";
    associationIdIsSet_ = false;
}

ShowPodIdentityAssociationRequest::~ShowPodIdentityAssociationRequest() = default;

void ShowPodIdentityAssociationRequest::validate()
{
}

web::json::value ShowPodIdentityAssociationRequest::toJson() const
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
bool ShowPodIdentityAssociationRequest::fromJson(const web::json::value& val)
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


std::string ShowPodIdentityAssociationRequest::getClusterId() const
{
    return clusterId_;
}

void ShowPodIdentityAssociationRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowPodIdentityAssociationRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowPodIdentityAssociationRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowPodIdentityAssociationRequest::getAssociationId() const
{
    return associationId_;
}

void ShowPodIdentityAssociationRequest::setAssociationId(const std::string& value)
{
    associationId_ = value;
    associationIdIsSet_ = true;
}

bool ShowPodIdentityAssociationRequest::associationIdIsSet() const
{
    return associationIdIsSet_;
}

void ShowPodIdentityAssociationRequest::unsetassociationId()
{
    associationIdIsSet_ = false;
}

}
}
}
}
}


