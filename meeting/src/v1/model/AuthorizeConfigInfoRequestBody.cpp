

#include "huaweicloud/meeting/v1/model/AuthorizeConfigInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AuthorizeConfigInfoRequestBody::AuthorizeConfigInfoRequestBody()
{
    enableSSO_ = false;
    enableSSOIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    authorizeUrl_ = "";
    authorizeUrlIsSet_ = false;
    getTokenUrl_ = "";
    getTokenUrlIsSet_ = false;
    clientId_ = "";
    clientIdIsSet_ = false;
    clientSecret_ = "";
    clientSecretIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    accFieldName_ = "";
    accFieldNameIsSet_ = false;
    getUserInfoUrl_ = "";
    getUserInfoUrlIsSet_ = false;
    oauth2ServerType_ = 0;
    oauth2ServerTypeIsSet_ = false;
    pcSchemaUrl_ = "";
    pcSchemaUrlIsSet_ = false;
    androidSchemaUrl_ = "";
    androidSchemaUrlIsSet_ = false;
    iosSchemaUrl_ = "";
    iosSchemaUrlIsSet_ = false;
    thirdName_ = "";
    thirdNameIsSet_ = false;
    thirdEmail_ = "";
    thirdEmailIsSet_ = false;
    thirdMobile_ = "";
    thirdMobileIsSet_ = false;
    thirdAccessToken_ = "";
    thirdAccessTokenIsSet_ = false;
    thirdHeadImgUrl_ = "";
    thirdHeadImgUrlIsSet_ = false;
}

AuthorizeConfigInfoRequestBody::~AuthorizeConfigInfoRequestBody() = default;

void AuthorizeConfigInfoRequestBody::validate()
{
}

web::json::value AuthorizeConfigInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableSSOIsSet_) {
        val[utility::conversions::to_string_t("enableSSO")] = ModelBase::toJson(enableSSO_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(authorizeUrlIsSet_) {
        val[utility::conversions::to_string_t("authorizeUrl")] = ModelBase::toJson(authorizeUrl_);
    }
    if(getTokenUrlIsSet_) {
        val[utility::conversions::to_string_t("getTokenUrl")] = ModelBase::toJson(getTokenUrl_);
    }
    if(clientIdIsSet_) {
        val[utility::conversions::to_string_t("clientId")] = ModelBase::toJson(clientId_);
    }
    if(clientSecretIsSet_) {
        val[utility::conversions::to_string_t("clientSecret")] = ModelBase::toJson(clientSecret_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(accFieldNameIsSet_) {
        val[utility::conversions::to_string_t("accFieldName")] = ModelBase::toJson(accFieldName_);
    }
    if(getUserInfoUrlIsSet_) {
        val[utility::conversions::to_string_t("getUserInfoUrl")] = ModelBase::toJson(getUserInfoUrl_);
    }
    if(oauth2ServerTypeIsSet_) {
        val[utility::conversions::to_string_t("oauth2ServerType")] = ModelBase::toJson(oauth2ServerType_);
    }
    if(pcSchemaUrlIsSet_) {
        val[utility::conversions::to_string_t("pcSchemaUrl")] = ModelBase::toJson(pcSchemaUrl_);
    }
    if(androidSchemaUrlIsSet_) {
        val[utility::conversions::to_string_t("androidSchemaUrl")] = ModelBase::toJson(androidSchemaUrl_);
    }
    if(iosSchemaUrlIsSet_) {
        val[utility::conversions::to_string_t("iosSchemaUrl")] = ModelBase::toJson(iosSchemaUrl_);
    }
    if(thirdNameIsSet_) {
        val[utility::conversions::to_string_t("thirdName")] = ModelBase::toJson(thirdName_);
    }
    if(thirdEmailIsSet_) {
        val[utility::conversions::to_string_t("thirdEmail")] = ModelBase::toJson(thirdEmail_);
    }
    if(thirdMobileIsSet_) {
        val[utility::conversions::to_string_t("thirdMobile")] = ModelBase::toJson(thirdMobile_);
    }
    if(thirdAccessTokenIsSet_) {
        val[utility::conversions::to_string_t("thirdAccessToken")] = ModelBase::toJson(thirdAccessToken_);
    }
    if(thirdHeadImgUrlIsSet_) {
        val[utility::conversions::to_string_t("thirdHeadImgUrl")] = ModelBase::toJson(thirdHeadImgUrl_);
    }

    return val;
}
bool AuthorizeConfigInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enableSSO"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSSO"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSSO(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorizeUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizeUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizeUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("getTokenUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("getTokenUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGetTokenUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientSecret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientSecret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accFieldName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accFieldName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("getUserInfoUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("getUserInfoUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGetUserInfoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("oauth2ServerType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oauth2ServerType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOauth2ServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pcSchemaUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pcSchemaUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPcSchemaUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("androidSchemaUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("androidSchemaUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAndroidSchemaUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iosSchemaUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iosSchemaUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIosSchemaUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdEmail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdEmail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdMobile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdMobile"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdMobile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdAccessToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdAccessToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdHeadImgUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdHeadImgUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdHeadImgUrl(refVal);
        }
    }
    return ok;
}


bool AuthorizeConfigInfoRequestBody::isEnableSSO() const
{
    return enableSSO_;
}

void AuthorizeConfigInfoRequestBody::setEnableSSO(bool value)
{
    enableSSO_ = value;
    enableSSOIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::enableSSOIsSet() const
{
    return enableSSOIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetenableSSO()
{
    enableSSOIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getDomain() const
{
    return domain_;
}

void AuthorizeConfigInfoRequestBody::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::domainIsSet() const
{
    return domainIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetdomain()
{
    domainIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getAuthorizeUrl() const
{
    return authorizeUrl_;
}

void AuthorizeConfigInfoRequestBody::setAuthorizeUrl(const std::string& value)
{
    authorizeUrl_ = value;
    authorizeUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::authorizeUrlIsSet() const
{
    return authorizeUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetauthorizeUrl()
{
    authorizeUrlIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getGetTokenUrl() const
{
    return getTokenUrl_;
}

void AuthorizeConfigInfoRequestBody::setGetTokenUrl(const std::string& value)
{
    getTokenUrl_ = value;
    getTokenUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::getTokenUrlIsSet() const
{
    return getTokenUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetgetTokenUrl()
{
    getTokenUrlIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getClientId() const
{
    return clientId_;
}

void AuthorizeConfigInfoRequestBody::setClientId(const std::string& value)
{
    clientId_ = value;
    clientIdIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::clientIdIsSet() const
{
    return clientIdIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetclientId()
{
    clientIdIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getClientSecret() const
{
    return clientSecret_;
}

void AuthorizeConfigInfoRequestBody::setClientSecret(const std::string& value)
{
    clientSecret_ = value;
    clientSecretIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::clientSecretIsSet() const
{
    return clientSecretIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetclientSecret()
{
    clientSecretIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getScope() const
{
    return scope_;
}

void AuthorizeConfigInfoRequestBody::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::scopeIsSet() const
{
    return scopeIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetscope()
{
    scopeIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getAccFieldName() const
{
    return accFieldName_;
}

void AuthorizeConfigInfoRequestBody::setAccFieldName(const std::string& value)
{
    accFieldName_ = value;
    accFieldNameIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::accFieldNameIsSet() const
{
    return accFieldNameIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetaccFieldName()
{
    accFieldNameIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getGetUserInfoUrl() const
{
    return getUserInfoUrl_;
}

void AuthorizeConfigInfoRequestBody::setGetUserInfoUrl(const std::string& value)
{
    getUserInfoUrl_ = value;
    getUserInfoUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::getUserInfoUrlIsSet() const
{
    return getUserInfoUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetgetUserInfoUrl()
{
    getUserInfoUrlIsSet_ = false;
}

int32_t AuthorizeConfigInfoRequestBody::getOauth2ServerType() const
{
    return oauth2ServerType_;
}

void AuthorizeConfigInfoRequestBody::setOauth2ServerType(int32_t value)
{
    oauth2ServerType_ = value;
    oauth2ServerTypeIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::oauth2ServerTypeIsSet() const
{
    return oauth2ServerTypeIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetoauth2ServerType()
{
    oauth2ServerTypeIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getPcSchemaUrl() const
{
    return pcSchemaUrl_;
}

void AuthorizeConfigInfoRequestBody::setPcSchemaUrl(const std::string& value)
{
    pcSchemaUrl_ = value;
    pcSchemaUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::pcSchemaUrlIsSet() const
{
    return pcSchemaUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetpcSchemaUrl()
{
    pcSchemaUrlIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getAndroidSchemaUrl() const
{
    return androidSchemaUrl_;
}

void AuthorizeConfigInfoRequestBody::setAndroidSchemaUrl(const std::string& value)
{
    androidSchemaUrl_ = value;
    androidSchemaUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::androidSchemaUrlIsSet() const
{
    return androidSchemaUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetandroidSchemaUrl()
{
    androidSchemaUrlIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getIosSchemaUrl() const
{
    return iosSchemaUrl_;
}

void AuthorizeConfigInfoRequestBody::setIosSchemaUrl(const std::string& value)
{
    iosSchemaUrl_ = value;
    iosSchemaUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::iosSchemaUrlIsSet() const
{
    return iosSchemaUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetiosSchemaUrl()
{
    iosSchemaUrlIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getThirdName() const
{
    return thirdName_;
}

void AuthorizeConfigInfoRequestBody::setThirdName(const std::string& value)
{
    thirdName_ = value;
    thirdNameIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::thirdNameIsSet() const
{
    return thirdNameIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetthirdName()
{
    thirdNameIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getThirdEmail() const
{
    return thirdEmail_;
}

void AuthorizeConfigInfoRequestBody::setThirdEmail(const std::string& value)
{
    thirdEmail_ = value;
    thirdEmailIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::thirdEmailIsSet() const
{
    return thirdEmailIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetthirdEmail()
{
    thirdEmailIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getThirdMobile() const
{
    return thirdMobile_;
}

void AuthorizeConfigInfoRequestBody::setThirdMobile(const std::string& value)
{
    thirdMobile_ = value;
    thirdMobileIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::thirdMobileIsSet() const
{
    return thirdMobileIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetthirdMobile()
{
    thirdMobileIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getThirdAccessToken() const
{
    return thirdAccessToken_;
}

void AuthorizeConfigInfoRequestBody::setThirdAccessToken(const std::string& value)
{
    thirdAccessToken_ = value;
    thirdAccessTokenIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::thirdAccessTokenIsSet() const
{
    return thirdAccessTokenIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetthirdAccessToken()
{
    thirdAccessTokenIsSet_ = false;
}

std::string AuthorizeConfigInfoRequestBody::getThirdHeadImgUrl() const
{
    return thirdHeadImgUrl_;
}

void AuthorizeConfigInfoRequestBody::setThirdHeadImgUrl(const std::string& value)
{
    thirdHeadImgUrl_ = value;
    thirdHeadImgUrlIsSet_ = true;
}

bool AuthorizeConfigInfoRequestBody::thirdHeadImgUrlIsSet() const
{
    return thirdHeadImgUrlIsSet_;
}

void AuthorizeConfigInfoRequestBody::unsetthirdHeadImgUrl()
{
    thirdHeadImgUrlIsSet_ = false;
}

}
}
}
}
}


