

#include "huaweicloud/dbss/v1/model/AffectedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AffectedResource::AffectedResource()
{
    affectedAttachedDomainId_ = "";
    affectedAttachedDomainIdIsSet_ = false;
    affectedAttachedProjectId_ = "";
    affectedAttachedProjectIdIsSet_ = false;
    affectedHeadIsSet_ = false;
    affectedPropertiesIsSet_ = false;
    affectedProtectedId_ = "";
    affectedProtectedIdIsSet_ = false;
    affectedSubtype_ = "";
    affectedSubtypeIsSet_ = false;
    affectedType_ = "";
    affectedTypeIsSet_ = false;
    affectedUrn_ = "";
    affectedUrnIsSet_ = false;
    affectedUrnext_ = "";
    affectedUrnextIsSet_ = false;
    affectedValue_ = "";
    affectedValueIsSet_ = false;
}

AffectedResource::~AffectedResource() = default;

void AffectedResource::validate()
{
}

web::json::value AffectedResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affectedAttachedDomainIdIsSet_) {
        val[utility::conversions::to_string_t("affected_attached_domain_id")] = ModelBase::toJson(affectedAttachedDomainId_);
    }
    if(affectedAttachedProjectIdIsSet_) {
        val[utility::conversions::to_string_t("affected_attached_project_id")] = ModelBase::toJson(affectedAttachedProjectId_);
    }
    if(affectedHeadIsSet_) {
        val[utility::conversions::to_string_t("affected_head")] = ModelBase::toJson(affectedHead_);
    }
    if(affectedPropertiesIsSet_) {
        val[utility::conversions::to_string_t("affected_properties")] = ModelBase::toJson(affectedProperties_);
    }
    if(affectedProtectedIdIsSet_) {
        val[utility::conversions::to_string_t("affected_protected_id")] = ModelBase::toJson(affectedProtectedId_);
    }
    if(affectedSubtypeIsSet_) {
        val[utility::conversions::to_string_t("affected_subtype")] = ModelBase::toJson(affectedSubtype_);
    }
    if(affectedTypeIsSet_) {
        val[utility::conversions::to_string_t("affected_type")] = ModelBase::toJson(affectedType_);
    }
    if(affectedUrnIsSet_) {
        val[utility::conversions::to_string_t("affected_urn")] = ModelBase::toJson(affectedUrn_);
    }
    if(affectedUrnextIsSet_) {
        val[utility::conversions::to_string_t("affected_urnext")] = ModelBase::toJson(affectedUrnext_);
    }
    if(affectedValueIsSet_) {
        val[utility::conversions::to_string_t("affected_value")] = ModelBase::toJson(affectedValue_);
    }

    return val;
}
bool AffectedResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affected_attached_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_attached_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedAttachedDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_attached_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_attached_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedAttachedProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_head"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_head"));
        if(!fieldValue.is_null())
        {
            DataResourceHead refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedHead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_properties"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_protected_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_protected_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedProtectedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_subtype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_subtype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedSubtype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_urnext"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_urnext"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedUrnext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedValue(refVal);
        }
    }
    return ok;
}


std::string AffectedResource::getAffectedAttachedDomainId() const
{
    return affectedAttachedDomainId_;
}

void AffectedResource::setAffectedAttachedDomainId(const std::string& value)
{
    affectedAttachedDomainId_ = value;
    affectedAttachedDomainIdIsSet_ = true;
}

bool AffectedResource::affectedAttachedDomainIdIsSet() const
{
    return affectedAttachedDomainIdIsSet_;
}

void AffectedResource::unsetaffectedAttachedDomainId()
{
    affectedAttachedDomainIdIsSet_ = false;
}

std::string AffectedResource::getAffectedAttachedProjectId() const
{
    return affectedAttachedProjectId_;
}

void AffectedResource::setAffectedAttachedProjectId(const std::string& value)
{
    affectedAttachedProjectId_ = value;
    affectedAttachedProjectIdIsSet_ = true;
}

bool AffectedResource::affectedAttachedProjectIdIsSet() const
{
    return affectedAttachedProjectIdIsSet_;
}

void AffectedResource::unsetaffectedAttachedProjectId()
{
    affectedAttachedProjectIdIsSet_ = false;
}

DataResourceHead AffectedResource::getAffectedHead() const
{
    return affectedHead_;
}

void AffectedResource::setAffectedHead(const DataResourceHead& value)
{
    affectedHead_ = value;
    affectedHeadIsSet_ = true;
}

bool AffectedResource::affectedHeadIsSet() const
{
    return affectedHeadIsSet_;
}

void AffectedResource::unsetaffectedHead()
{
    affectedHeadIsSet_ = false;
}

Object AffectedResource::getAffectedProperties() const
{
    return affectedProperties_;
}

void AffectedResource::setAffectedProperties(const Object& value)
{
    affectedProperties_ = value;
    affectedPropertiesIsSet_ = true;
}

bool AffectedResource::affectedPropertiesIsSet() const
{
    return affectedPropertiesIsSet_;
}

void AffectedResource::unsetaffectedProperties()
{
    affectedPropertiesIsSet_ = false;
}

std::string AffectedResource::getAffectedProtectedId() const
{
    return affectedProtectedId_;
}

void AffectedResource::setAffectedProtectedId(const std::string& value)
{
    affectedProtectedId_ = value;
    affectedProtectedIdIsSet_ = true;
}

bool AffectedResource::affectedProtectedIdIsSet() const
{
    return affectedProtectedIdIsSet_;
}

void AffectedResource::unsetaffectedProtectedId()
{
    affectedProtectedIdIsSet_ = false;
}

std::string AffectedResource::getAffectedSubtype() const
{
    return affectedSubtype_;
}

void AffectedResource::setAffectedSubtype(const std::string& value)
{
    affectedSubtype_ = value;
    affectedSubtypeIsSet_ = true;
}

bool AffectedResource::affectedSubtypeIsSet() const
{
    return affectedSubtypeIsSet_;
}

void AffectedResource::unsetaffectedSubtype()
{
    affectedSubtypeIsSet_ = false;
}

std::string AffectedResource::getAffectedType() const
{
    return affectedType_;
}

void AffectedResource::setAffectedType(const std::string& value)
{
    affectedType_ = value;
    affectedTypeIsSet_ = true;
}

bool AffectedResource::affectedTypeIsSet() const
{
    return affectedTypeIsSet_;
}

void AffectedResource::unsetaffectedType()
{
    affectedTypeIsSet_ = false;
}

std::string AffectedResource::getAffectedUrn() const
{
    return affectedUrn_;
}

void AffectedResource::setAffectedUrn(const std::string& value)
{
    affectedUrn_ = value;
    affectedUrnIsSet_ = true;
}

bool AffectedResource::affectedUrnIsSet() const
{
    return affectedUrnIsSet_;
}

void AffectedResource::unsetaffectedUrn()
{
    affectedUrnIsSet_ = false;
}

std::string AffectedResource::getAffectedUrnext() const
{
    return affectedUrnext_;
}

void AffectedResource::setAffectedUrnext(const std::string& value)
{
    affectedUrnext_ = value;
    affectedUrnextIsSet_ = true;
}

bool AffectedResource::affectedUrnextIsSet() const
{
    return affectedUrnextIsSet_;
}

void AffectedResource::unsetaffectedUrnext()
{
    affectedUrnextIsSet_ = false;
}

std::string AffectedResource::getAffectedValue() const
{
    return affectedValue_;
}

void AffectedResource::setAffectedValue(const std::string& value)
{
    affectedValue_ = value;
    affectedValueIsSet_ = true;
}

bool AffectedResource::affectedValueIsSet() const
{
    return affectedValueIsSet_;
}

void AffectedResource::unsetaffectedValue()
{
    affectedValueIsSet_ = false;
}

}
}
}
}
}


