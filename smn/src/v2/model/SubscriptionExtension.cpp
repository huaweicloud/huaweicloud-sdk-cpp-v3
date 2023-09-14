

#include "huaweicloud/smn/v2/model/SubscriptionExtension.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




SubscriptionExtension::SubscriptionExtension()
{
    clientId_ = "";
    clientIdIsSet_ = false;
    clientSecret_ = "";
    clientSecretIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
    signSecret_ = "";
    signSecretIsSet_ = false;
}

SubscriptionExtension::~SubscriptionExtension() = default;

void SubscriptionExtension::validate()
{
}

web::json::value SubscriptionExtension::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientIdIsSet_) {
        val[utility::conversions::to_string_t("client_id")] = ModelBase::toJson(clientId_);
    }
    if(clientSecretIsSet_) {
        val[utility::conversions::to_string_t("client_secret")] = ModelBase::toJson(clientSecret_);
    }
    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(signSecretIsSet_) {
        val[utility::conversions::to_string_t("sign_secret")] = ModelBase::toJson(signSecret_);
    }

    return val;
}

bool SubscriptionExtension::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("client_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignSecret(refVal);
        }
    }
    return ok;
}

std::string SubscriptionExtension::getClientId() const
{
    return clientId_;
}

void SubscriptionExtension::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool SubscriptionExtension::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void SubscriptionExtension::unsetclientId()
{
    clientIdIsSet_ = false;
}

std::string SubscriptionExtension::getClientSecret() const
{
    return clientSecret_;
}

void SubscriptionExtension::setClientSecret(const std::string& value)
{
    clientSecret_ = value;
    clientSecretIsSet_ = true;
}

bool SubscriptionExtension::clientSecretIsSet() const
{
    return clientSecretIsSet_;
}

void SubscriptionExtension::unsetclientSecret()
{
    clientSecretIsSet_ = false;
}

std::string SubscriptionExtension::getKeyword() const
{
    return keyword_;
}

void SubscriptionExtension::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool SubscriptionExtension::keywordIsSet() const
{
    return keywordIsSet_;
}

void SubscriptionExtension::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::string SubscriptionExtension::getSignSecret() const
{
    return signSecret_;
}

void SubscriptionExtension::setSignSecret(const std::string& value)
{
    signSecret_ = value;
    signSecretIsSet_ = true;
}

bool SubscriptionExtension::signSecretIsSet() const
{
    return signSecretIsSet_;
}

void SubscriptionExtension::unsetsignSecret()
{
    signSecretIsSet_ = false;
}

}
}
}
}
}


