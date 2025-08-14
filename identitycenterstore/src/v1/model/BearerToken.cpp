

#include "huaweicloud/identitycenterstore/v1/model/BearerToken.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




BearerToken::BearerToken()
{
    creationTime_ = 0.0;
    creationTimeIsSet_ = false;
    expirationTime_ = 0.0;
    expirationTimeIsSet_ = false;
    tokenId_ = "";
    tokenIdIsSet_ = false;
}

BearerToken::~BearerToken() = default;

void BearerToken::validate()
{
}

web::json::value BearerToken::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(tokenIdIsSet_) {
        val[utility::conversions::to_string_t("token_id")] = ModelBase::toJson(tokenId_);
    }

    return val;
}
bool BearerToken::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenId(refVal);
        }
    }
    return ok;
}


double BearerToken::getCreationTime() const
{
    return creationTime_;
}

void BearerToken::setCreationTime(double value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool BearerToken::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void BearerToken::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

double BearerToken::getExpirationTime() const
{
    return expirationTime_;
}

void BearerToken::setExpirationTime(double value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool BearerToken::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void BearerToken::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

std::string BearerToken::getTokenId() const
{
    return tokenId_;
}

void BearerToken::setTokenId(const std::string& value)
{
    tokenId_ = value;
    tokenIdIsSet_ = true;
}

bool BearerToken::tokenIdIsSet() const
{
    return tokenIdIsSet_;
}

void BearerToken::unsettokenId()
{
    tokenIdIsSet_ = false;
}

}
}
}
}
}


