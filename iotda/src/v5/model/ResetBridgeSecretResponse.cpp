

#include "huaweicloud/iotda/v5/model/ResetBridgeSecretResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetBridgeSecretResponse::ResetBridgeSecretResponse()
{
    bridgeId_ = "";
    bridgeIdIsSet_ = false;
    secret_ = "";
    secretIsSet_ = false;
}

ResetBridgeSecretResponse::~ResetBridgeSecretResponse() = default;

void ResetBridgeSecretResponse::validate()
{
}

web::json::value ResetBridgeSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bridgeIdIsSet_) {
        val[utility::conversions::to_string_t("bridge_id")] = ModelBase::toJson(bridgeId_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}
bool ResetBridgeSecretResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bridge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridgeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecret(refVal);
        }
    }
    return ok;
}


std::string ResetBridgeSecretResponse::getBridgeId() const
{
    return bridgeId_;
}

void ResetBridgeSecretResponse::setBridgeId(const std::string& value)
{
    bridgeId_ = value;
    bridgeIdIsSet_ = true;
}

bool ResetBridgeSecretResponse::bridgeIdIsSet() const
{
    return bridgeIdIsSet_;
}

void ResetBridgeSecretResponse::unsetbridgeId()
{
    bridgeIdIsSet_ = false;
}

std::string ResetBridgeSecretResponse::getSecret() const
{
    return secret_;
}

void ResetBridgeSecretResponse::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool ResetBridgeSecretResponse::secretIsSet() const
{
    return secretIsSet_;
}

void ResetBridgeSecretResponse::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


