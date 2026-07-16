

#include "huaweicloud/cce/v3/model/AssumeAgencyForPodIdentityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AssumeAgencyForPodIdentityResponse::AssumeAgencyForPodIdentityResponse()
{
    assumedAgencyIsSet_ = false;
    audience_ = "";
    audienceIsSet_ = false;
    credentialsIsSet_ = false;
    podIdentityAssociationId_ = "";
    podIdentityAssociationIdIsSet_ = false;
    subjectIsSet_ = false;
}

AssumeAgencyForPodIdentityResponse::~AssumeAgencyForPodIdentityResponse() = default;

void AssumeAgencyForPodIdentityResponse::validate()
{
}

web::json::value AssumeAgencyForPodIdentityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assumedAgencyIsSet_) {
        val[utility::conversions::to_string_t("assumedAgency")] = ModelBase::toJson(assumedAgency_);
    }
    if(audienceIsSet_) {
        val[utility::conversions::to_string_t("audience")] = ModelBase::toJson(audience_);
    }
    if(credentialsIsSet_) {
        val[utility::conversions::to_string_t("credentials")] = ModelBase::toJson(credentials_);
    }
    if(podIdentityAssociationIdIsSet_) {
        val[utility::conversions::to_string_t("podIdentityAssociationId")] = ModelBase::toJson(podIdentityAssociationId_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }

    return val;
}
bool AssumeAgencyForPodIdentityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assumedAgency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assumedAgency"));
        if(!fieldValue.is_null())
        {
            AssumedAgency refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssumedAgency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audience"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audience"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudience(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("credentials"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("credentials"));
        if(!fieldValue.is_null())
        {
            Credentials refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCredentials(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("podIdentityAssociationId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("podIdentityAssociationId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodIdentityAssociationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            PodIdentitySubject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    return ok;
}


AssumedAgency AssumeAgencyForPodIdentityResponse::getAssumedAgency() const
{
    return assumedAgency_;
}

void AssumeAgencyForPodIdentityResponse::setAssumedAgency(const AssumedAgency& value)
{
    assumedAgency_ = value;
    assumedAgencyIsSet_ = true;
}

bool AssumeAgencyForPodIdentityResponse::assumedAgencyIsSet() const
{
    return assumedAgencyIsSet_;
}

void AssumeAgencyForPodIdentityResponse::unsetassumedAgency()
{
    assumedAgencyIsSet_ = false;
}

std::string AssumeAgencyForPodIdentityResponse::getAudience() const
{
    return audience_;
}

void AssumeAgencyForPodIdentityResponse::setAudience(const std::string& value)
{
    audience_ = value;
    audienceIsSet_ = true;
}

bool AssumeAgencyForPodIdentityResponse::audienceIsSet() const
{
    return audienceIsSet_;
}

void AssumeAgencyForPodIdentityResponse::unsetaudience()
{
    audienceIsSet_ = false;
}

Credentials AssumeAgencyForPodIdentityResponse::getCredentials() const
{
    return credentials_;
}

void AssumeAgencyForPodIdentityResponse::setCredentials(const Credentials& value)
{
    credentials_ = value;
    credentialsIsSet_ = true;
}

bool AssumeAgencyForPodIdentityResponse::credentialsIsSet() const
{
    return credentialsIsSet_;
}

void AssumeAgencyForPodIdentityResponse::unsetcredentials()
{
    credentialsIsSet_ = false;
}

std::string AssumeAgencyForPodIdentityResponse::getPodIdentityAssociationId() const
{
    return podIdentityAssociationId_;
}

void AssumeAgencyForPodIdentityResponse::setPodIdentityAssociationId(const std::string& value)
{
    podIdentityAssociationId_ = value;
    podIdentityAssociationIdIsSet_ = true;
}

bool AssumeAgencyForPodIdentityResponse::podIdentityAssociationIdIsSet() const
{
    return podIdentityAssociationIdIsSet_;
}

void AssumeAgencyForPodIdentityResponse::unsetpodIdentityAssociationId()
{
    podIdentityAssociationIdIsSet_ = false;
}

PodIdentitySubject AssumeAgencyForPodIdentityResponse::getSubject() const
{
    return subject_;
}

void AssumeAgencyForPodIdentityResponse::setSubject(const PodIdentitySubject& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool AssumeAgencyForPodIdentityResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void AssumeAgencyForPodIdentityResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

}
}
}
}
}


