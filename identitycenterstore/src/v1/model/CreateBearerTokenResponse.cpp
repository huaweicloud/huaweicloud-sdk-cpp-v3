

#include "huaweicloud/identitycenterstore/v1/model/CreateBearerTokenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateBearerTokenResponse::CreateBearerTokenResponse()
{
    creationTime_ = 0.0;
    creationTimeIsSet_ = false;
    expirationTime_ = 0.0;
    expirationTimeIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    tokenId_ = "";
    tokenIdIsSet_ = false;
}

CreateBearerTokenResponse::~CreateBearerTokenResponse() = default;

void CreateBearerTokenResponse::validate()
{
}

web::json::value CreateBearerTokenResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(tokenIdIsSet_) {
        val[utility::conversions::to_string_t("token_id")] = ModelBase::toJson(tokenId_);
    }

    return val;
}
bool CreateBearerTokenResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
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


double CreateBearerTokenResponse::getCreationTime() const
{
    return creationTime_;
}

void CreateBearerTokenResponse::setCreationTime(double value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool CreateBearerTokenResponse::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void CreateBearerTokenResponse::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

double CreateBearerTokenResponse::getExpirationTime() const
{
    return expirationTime_;
}

void CreateBearerTokenResponse::setExpirationTime(double value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool CreateBearerTokenResponse::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void CreateBearerTokenResponse::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

std::string CreateBearerTokenResponse::getToken() const
{
    return token_;
}

void CreateBearerTokenResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool CreateBearerTokenResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void CreateBearerTokenResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string CreateBearerTokenResponse::getTokenId() const
{
    return tokenId_;
}

void CreateBearerTokenResponse::setTokenId(const std::string& value)
{
    tokenId_ = value;
    tokenIdIsSet_ = true;
}

bool CreateBearerTokenResponse::tokenIdIsSet() const
{
    return tokenIdIsSet_;
}

void CreateBearerTokenResponse::unsettokenId()
{
    tokenIdIsSet_ = false;
}

}
}
}
}
}


