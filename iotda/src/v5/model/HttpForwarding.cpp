

#include "huaweicloud/iotda/v5/model/HttpForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




HttpForwarding::HttpForwarding()
{
    url_ = "";
    urlIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
    cnName_ = "";
    cnNameIsSet_ = false;
    sniEnable_ = false;
    sniEnableIsSet_ = false;
    signatureEnable_ = false;
    signatureEnableIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

HttpForwarding::~HttpForwarding() = default;

void HttpForwarding::validate()
{
}

web::json::value HttpForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }
    if(cnNameIsSet_) {
        val[utility::conversions::to_string_t("cn_name")] = ModelBase::toJson(cnName_);
    }
    if(sniEnableIsSet_) {
        val[utility::conversions::to_string_t("sni_enable")] = ModelBase::toJson(sniEnable_);
    }
    if(signatureEnableIsSet_) {
        val[utility::conversions::to_string_t("signature_enable")] = ModelBase::toJson(signatureEnable_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool HttpForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cn_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sni_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sni_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSniEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignatureEnable(refVal);
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
    return ok;
}


std::string HttpForwarding::getUrl() const
{
    return url_;
}

void HttpForwarding::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool HttpForwarding::urlIsSet() const
{
    return urlIsSet_;
}

void HttpForwarding::unseturl()
{
    urlIsSet_ = false;
}

std::string HttpForwarding::getCertId() const
{
    return certId_;
}

void HttpForwarding::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool HttpForwarding::certIdIsSet() const
{
    return certIdIsSet_;
}

void HttpForwarding::unsetcertId()
{
    certIdIsSet_ = false;
}

std::string HttpForwarding::getCnName() const
{
    return cnName_;
}

void HttpForwarding::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool HttpForwarding::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void HttpForwarding::unsetcnName()
{
    cnNameIsSet_ = false;
}

bool HttpForwarding::isSniEnable() const
{
    return sniEnable_;
}

void HttpForwarding::setSniEnable(bool value)
{
    sniEnable_ = value;
    sniEnableIsSet_ = true;
}

bool HttpForwarding::sniEnableIsSet() const
{
    return sniEnableIsSet_;
}

void HttpForwarding::unsetsniEnable()
{
    sniEnableIsSet_ = false;
}

bool HttpForwarding::isSignatureEnable() const
{
    return signatureEnable_;
}

void HttpForwarding::setSignatureEnable(bool value)
{
    signatureEnable_ = value;
    signatureEnableIsSet_ = true;
}

bool HttpForwarding::signatureEnableIsSet() const
{
    return signatureEnableIsSet_;
}

void HttpForwarding::unsetsignatureEnable()
{
    signatureEnableIsSet_ = false;
}

std::string HttpForwarding::getToken() const
{
    return token_;
}

void HttpForwarding::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool HttpForwarding::tokenIsSet() const
{
    return tokenIsSet_;
}

void HttpForwarding::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


