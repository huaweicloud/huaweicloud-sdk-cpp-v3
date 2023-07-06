

#include "huaweicloud/cdn/v1/model/HttpPutBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HttpPutBody::HttpPutBody()
{
    httpsStatus_ = "";
    httpsStatusIsSet_ = false;
    certificateName_ = "";
    certificateNameIsSet_ = false;
    certificateValue_ = "";
    certificateValueIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    certificateSource_ = 0;
    certificateSourceIsSet_ = false;
    http2Status_ = "";
    http2StatusIsSet_ = false;
    tlsVersion_ = "";
    tlsVersionIsSet_ = false;
}

HttpPutBody::~HttpPutBody() = default;

void HttpPutBody::validate()
{
}

web::json::value HttpPutBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(certificateNameIsSet_) {
        val[utility::conversions::to_string_t("certificate_name")] = ModelBase::toJson(certificateName_);
    }
    if(certificateValueIsSet_) {
        val[utility::conversions::to_string_t("certificate_value")] = ModelBase::toJson(certificateValue_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(certificateSourceIsSet_) {
        val[utility::conversions::to_string_t("certificate_source")] = ModelBase::toJson(certificateSource_);
    }
    if(http2StatusIsSet_) {
        val[utility::conversions::to_string_t("http2_status")] = ModelBase::toJson(http2Status_);
    }
    if(tlsVersionIsSet_) {
        val[utility::conversions::to_string_t("tls_version")] = ModelBase::toJson(tlsVersion_);
    }

    return val;
}

bool HttpPutBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_source"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http2_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http2_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp2Status(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tls_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tls_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTlsVersion(refVal);
        }
    }
    return ok;
}

std::string HttpPutBody::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpPutBody::setHttpsStatus(const std::string& value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpPutBody::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpPutBody::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string HttpPutBody::getCertificateName() const
{
    return certificateName_;
}

void HttpPutBody::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool HttpPutBody::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void HttpPutBody::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string HttpPutBody::getCertificateValue() const
{
    return certificateValue_;
}

void HttpPutBody::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool HttpPutBody::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void HttpPutBody::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

std::string HttpPutBody::getPrivateKey() const
{
    return privateKey_;
}

void HttpPutBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HttpPutBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HttpPutBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t HttpPutBody::getCertificateSource() const
{
    return certificateSource_;
}

void HttpPutBody::setCertificateSource(int32_t value)
{
    certificateSource_ = value;
    certificateSourceIsSet_ = true;
}

bool HttpPutBody::certificateSourceIsSet() const
{
    return certificateSourceIsSet_;
}

void HttpPutBody::unsetcertificateSource()
{
    certificateSourceIsSet_ = false;
}

std::string HttpPutBody::getHttp2Status() const
{
    return http2Status_;
}

void HttpPutBody::setHttp2Status(const std::string& value)
{
    http2Status_ = value;
    http2StatusIsSet_ = true;
}

bool HttpPutBody::http2StatusIsSet() const
{
    return http2StatusIsSet_;
}

void HttpPutBody::unsethttp2Status()
{
    http2StatusIsSet_ = false;
}

std::string HttpPutBody::getTlsVersion() const
{
    return tlsVersion_;
}

void HttpPutBody::setTlsVersion(const std::string& value)
{
    tlsVersion_ = value;
    tlsVersionIsSet_ = true;
}

bool HttpPutBody::tlsVersionIsSet() const
{
    return tlsVersionIsSet_;
}

void HttpPutBody::unsettlsVersion()
{
    tlsVersionIsSet_ = false;
}

}
}
}
}
}


