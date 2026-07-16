

#include "huaweicloud/cce/v3/model/PodIdentityAssociation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PodIdentityAssociation::PodIdentityAssociation()
{
    namespace_ = "";
    namespaceIsSet_ = false;
    serviceAccount_ = "";
    serviceAccountIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    tagsIsSet_ = false;
}

PodIdentityAssociation::~PodIdentityAssociation() = default;

void PodIdentityAssociation::validate()
{
}

web::json::value PodIdentityAssociation::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool PodIdentityAssociation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string PodIdentityAssociation::getNamespace() const
{
    return namespace_;
}

void PodIdentityAssociation::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool PodIdentityAssociation::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void PodIdentityAssociation::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string PodIdentityAssociation::getServiceAccount() const
{
    return serviceAccount_;
}

void PodIdentityAssociation::setServiceAccount(const std::string& value)
{
    serviceAccount_ = value;
    serviceAccountIsSet_ = true;
}

bool PodIdentityAssociation::serviceAccountIsSet() const
{
    return serviceAccountIsSet_;
}

void PodIdentityAssociation::unsetserviceAccount()
{
    serviceAccountIsSet_ = false;
}

std::string PodIdentityAssociation::getAgencyName() const
{
    return agencyName_;
}

void PodIdentityAssociation::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool PodIdentityAssociation::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void PodIdentityAssociation::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::vector<ResourceTag>& PodIdentityAssociation::getTags()
{
    return tags_;
}

void PodIdentityAssociation::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PodIdentityAssociation::tagsIsSet() const
{
    return tagsIsSet_;
}

void PodIdentityAssociation::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


