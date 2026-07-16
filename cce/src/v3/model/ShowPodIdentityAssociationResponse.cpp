

#include "huaweicloud/cce/v3/model/ShowPodIdentityAssociationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowPodIdentityAssociationResponse::ShowPodIdentityAssociationResponse()
{
    uid_ = "";
    uidIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    serviceAccount_ = "";
    serviceAccountIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    tagsIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    modifiedAt_ = "";
    modifiedAtIsSet_ = false;
}

ShowPodIdentityAssociationResponse::~ShowPodIdentityAssociationResponse() = default;

void ShowPodIdentityAssociationResponse::validate()
{
}

web::json::value ShowPodIdentityAssociationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("clusterId")] = ModelBase::toJson(clusterId_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(serviceAccountIsSet_) {
        val[utility::conversions::to_string_t("serviceAccount")] = ModelBase::toJson(serviceAccount_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agencyName")] = ModelBase::toJson(agencyName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(createdAt_);
    }
    if(modifiedAtIsSet_) {
        val[utility::conversions::to_string_t("modifiedAt")] = ModelBase::toJson(modifiedAt_);
    }

    return val;
}
bool ShowPodIdentityAssociationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agencyName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agencyName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdAt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifiedAt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifiedAt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedAt(refVal);
        }
    }
    return ok;
}


std::string ShowPodIdentityAssociationResponse::getUid() const
{
    return uid_;
}

void ShowPodIdentityAssociationResponse::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::uidIsSet() const
{
    return uidIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetuid()
{
    uidIsSet_ = false;
}

std::string ShowPodIdentityAssociationResponse::getClusterId() const
{
    return clusterId_;
}

void ShowPodIdentityAssociationResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowPodIdentityAssociationResponse::getNamespace() const
{
    return namespace_;
}

void ShowPodIdentityAssociationResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ShowPodIdentityAssociationResponse::getServiceAccount() const
{
    return serviceAccount_;
}

void ShowPodIdentityAssociationResponse::setServiceAccount(const std::string& value)
{
    serviceAccount_ = value;
    serviceAccountIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::serviceAccountIsSet() const
{
    return serviceAccountIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetserviceAccount()
{
    serviceAccountIsSet_ = false;
}

std::string ShowPodIdentityAssociationResponse::getAgencyName() const
{
    return agencyName_;
}

void ShowPodIdentityAssociationResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::vector<ResourceTag>& ShowPodIdentityAssociationResponse::getTags()
{
    return tags_;
}

void ShowPodIdentityAssociationResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowPodIdentityAssociationResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ShowPodIdentityAssociationResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowPodIdentityAssociationResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowPodIdentityAssociationResponse::getModifiedAt() const
{
    return modifiedAt_;
}

void ShowPodIdentityAssociationResponse::setModifiedAt(const std::string& value)
{
    modifiedAt_ = value;
    modifiedAtIsSet_ = true;
}

bool ShowPodIdentityAssociationResponse::modifiedAtIsSet() const
{
    return modifiedAtIsSet_;
}

void ShowPodIdentityAssociationResponse::unsetmodifiedAt()
{
    modifiedAtIsSet_ = false;
}

}
}
}
}
}


