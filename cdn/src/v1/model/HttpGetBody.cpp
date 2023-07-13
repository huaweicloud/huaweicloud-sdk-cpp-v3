

#include "huaweicloud/cdn/v1/model/HttpGetBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HttpGetBody::HttpGetBody()
{
    httpsStatus_ = "";
    httpsStatusIsSet_ = false;
    certificateName_ = "";
    certificateNameIsSet_ = false;
    certificateValue_ = "";
    certificateValueIsSet_ = false;
    certificateSource_ = 0;
    certificateSourceIsSet_ = false;
    http2Status_ = "";
    http2StatusIsSet_ = false;
    tlsVersion_ = "";
    tlsVersionIsSet_ = false;
}

HttpGetBody::~HttpGetBody() = default;

void HttpGetBody::validate()
{
}

web::json::value HttpGetBody::toJson() const
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

bool HttpGetBody::fromJson(const web::json::value& val)
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

std::string HttpGetBody::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpGetBody::setHttpsStatus(const std::string& value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpGetBody::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpGetBody::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string HttpGetBody::getCertificateName() const
{
    return certificateName_;
}

void HttpGetBody::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool HttpGetBody::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void HttpGetBody::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string HttpGetBody::getCertificateValue() const
{
    return certificateValue_;
}

void HttpGetBody::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool HttpGetBody::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void HttpGetBody::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

int32_t HttpGetBody::getCertificateSource() const
{
    return certificateSource_;
}

void HttpGetBody::setCertificateSource(int32_t value)
{
    certificateSource_ = value;
    certificateSourceIsSet_ = true;
}

bool HttpGetBody::certificateSourceIsSet() const
{
    return certificateSourceIsSet_;
}

void HttpGetBody::unsetcertificateSource()
{
    certificateSourceIsSet_ = false;
}

std::string HttpGetBody::getHttp2Status() const
{
    return http2Status_;
}

void HttpGetBody::setHttp2Status(const std::string& value)
{
    http2Status_ = value;
    http2StatusIsSet_ = true;
}

bool HttpGetBody::http2StatusIsSet() const
{
    return http2StatusIsSet_;
}

void HttpGetBody::unsethttp2Status()
{
    http2StatusIsSet_ = false;
}

std::string HttpGetBody::getTlsVersion() const
{
    return tlsVersion_;
}

void HttpGetBody::setTlsVersion(const std::string& value)
{
    tlsVersion_ = value;
    tlsVersionIsSet_ = true;
}

bool HttpGetBody::tlsVersionIsSet() const
{
    return tlsVersionIsSet_;
}

void HttpGetBody::unsettlsVersion()
{
    tlsVersionIsSet_ = false;
}

}
}
}
}
}


