

#include "huaweicloud/drs/v5/model/EndpointSslConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




EndpointSslConfig::EndpointSslConfig()
{
    sslLink_ = false;
    sslLinkIsSet_ = false;
    sslCertName_ = "";
    sslCertNameIsSet_ = false;
    sslCertKey_ = "";
    sslCertKeyIsSet_ = false;
    sslCertCheckSum_ = "";
    sslCertCheckSumIsSet_ = false;
    sslCertPassword_ = "";
    sslCertPasswordIsSet_ = false;
}

EndpointSslConfig::~EndpointSslConfig() = default;

void EndpointSslConfig::validate()
{
}

web::json::value EndpointSslConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sslLinkIsSet_) {
        val[utility::conversions::to_string_t("ssl_link")] = ModelBase::toJson(sslLink_);
    }
    if(sslCertNameIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_name")] = ModelBase::toJson(sslCertName_);
    }
    if(sslCertKeyIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_key")] = ModelBase::toJson(sslCertKey_);
    }
    if(sslCertCheckSumIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_check_sum")] = ModelBase::toJson(sslCertCheckSum_);
    }
    if(sslCertPasswordIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_password")] = ModelBase::toJson(sslCertPassword_);
    }

    return val;
}

bool EndpointSslConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ssl_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_link"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_check_sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_check_sum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertCheckSum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertPassword(refVal);
        }
    }
    return ok;
}

bool EndpointSslConfig::isSslLink() const
{
    return sslLink_;
}

void EndpointSslConfig::setSslLink(bool value)
{
    sslLink_ = value;
    sslLinkIsSet_ = true;
}

bool EndpointSslConfig::sslLinkIsSet() const
{
    return sslLinkIsSet_;
}

void EndpointSslConfig::unsetsslLink()
{
    sslLinkIsSet_ = false;
}

std::string EndpointSslConfig::getSslCertName() const
{
    return sslCertName_;
}

void EndpointSslConfig::setSslCertName(const std::string& value)
{
    sslCertName_ = value;
    sslCertNameIsSet_ = true;
}

bool EndpointSslConfig::sslCertNameIsSet() const
{
    return sslCertNameIsSet_;
}

void EndpointSslConfig::unsetsslCertName()
{
    sslCertNameIsSet_ = false;
}

std::string EndpointSslConfig::getSslCertKey() const
{
    return sslCertKey_;
}

void EndpointSslConfig::setSslCertKey(const std::string& value)
{
    sslCertKey_ = value;
    sslCertKeyIsSet_ = true;
}

bool EndpointSslConfig::sslCertKeyIsSet() const
{
    return sslCertKeyIsSet_;
}

void EndpointSslConfig::unsetsslCertKey()
{
    sslCertKeyIsSet_ = false;
}

std::string EndpointSslConfig::getSslCertCheckSum() const
{
    return sslCertCheckSum_;
}

void EndpointSslConfig::setSslCertCheckSum(const std::string& value)
{
    sslCertCheckSum_ = value;
    sslCertCheckSumIsSet_ = true;
}

bool EndpointSslConfig::sslCertCheckSumIsSet() const
{
    return sslCertCheckSumIsSet_;
}

void EndpointSslConfig::unsetsslCertCheckSum()
{
    sslCertCheckSumIsSet_ = false;
}

std::string EndpointSslConfig::getSslCertPassword() const
{
    return sslCertPassword_;
}

void EndpointSslConfig::setSslCertPassword(const std::string& value)
{
    sslCertPassword_ = value;
    sslCertPasswordIsSet_ = true;
}

bool EndpointSslConfig::sslCertPasswordIsSet() const
{
    return sslCertPasswordIsSet_;
}

void EndpointSslConfig::unsetsslCertPassword()
{
    sslCertPasswordIsSet_ = false;
}

}
}
}
}
}


