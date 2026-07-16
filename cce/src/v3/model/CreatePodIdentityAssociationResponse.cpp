

#include "huaweicloud/cce/v3/model/CreatePodIdentityAssociationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePodIdentityAssociationResponse::CreatePodIdentityAssociationResponse()
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

CreatePodIdentityAssociationResponse::~CreatePodIdentityAssociationResponse() = default;

void CreatePodIdentityAssociationResponse::validate()
{
}

web::json::value CreatePodIdentityAssociationResponse::toJson() const
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
bool CreatePodIdentityAssociationResponse::fromJson(const web::json::value& val)
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


std::string CreatePodIdentityAssociationResponse::getUid() const
{
    return uid_;
}

void CreatePodIdentityAssociationResponse::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::uidIsSet() const
{
    return uidIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetuid()
{
    uidIsSet_ = false;
}

std::string CreatePodIdentityAssociationResponse::getClusterId() const
{
    return clusterId_;
}

void CreatePodIdentityAssociationResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreatePodIdentityAssociationResponse::getNamespace() const
{
    return namespace_;
}

void CreatePodIdentityAssociationResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreatePodIdentityAssociationResponse::getServiceAccount() const
{
    return serviceAccount_;
}

void CreatePodIdentityAssociationResponse::setServiceAccount(const std::string& value)
{
    serviceAccount_ = value;
    serviceAccountIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::serviceAccountIsSet() const
{
    return serviceAccountIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetserviceAccount()
{
    serviceAccountIsSet_ = false;
}

std::string CreatePodIdentityAssociationResponse::getAgencyName() const
{
    return agencyName_;
}

void CreatePodIdentityAssociationResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::vector<ResourceTag>& CreatePodIdentityAssociationResponse::getTags()
{
    return tags_;
}

void CreatePodIdentityAssociationResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreatePodIdentityAssociationResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreatePodIdentityAssociationResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreatePodIdentityAssociationResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreatePodIdentityAssociationResponse::getModifiedAt() const
{
    return modifiedAt_;
}

void CreatePodIdentityAssociationResponse::setModifiedAt(const std::string& value)
{
    modifiedAt_ = value;
    modifiedAtIsSet_ = true;
}

bool CreatePodIdentityAssociationResponse::modifiedAtIsSet() const
{
    return modifiedAtIsSet_;
}

void CreatePodIdentityAssociationResponse::unsetmodifiedAt()
{
    modifiedAtIsSet_ = false;
}

}
}
}
}
}


