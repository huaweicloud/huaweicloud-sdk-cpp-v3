

#include "huaweicloud/kms/v2/model/ReplicateKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ReplicateKeyResponse::ReplicateKeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

ReplicateKeyResponse::~ReplicateKeyResponse() = default;

void ReplicateKeyResponse::validate()
{
}

web::json::value ReplicateKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool ReplicateKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    return ok;
}


std::string ReplicateKeyResponse::getKeyId() const
{
    return keyId_;
}

void ReplicateKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ReplicateKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ReplicateKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ReplicateKeyResponse::getDomainId() const
{
    return domainId_;
}

void ReplicateKeyResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ReplicateKeyResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ReplicateKeyResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ReplicateKeyResponse::getRegion() const
{
    return region_;
}

void ReplicateKeyResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ReplicateKeyResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ReplicateKeyResponse::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


