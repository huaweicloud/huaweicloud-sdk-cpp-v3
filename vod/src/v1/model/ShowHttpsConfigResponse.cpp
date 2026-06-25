

#include "huaweicloud/vod/v1/model/ShowHttpsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowHttpsConfigResponse::ShowHttpsConfigResponse()
{
    source_ = "";
    sourceIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    forceRedirectHttps_ = 0;
    forceRedirectHttpsIsSet_ = false;
    http2_ = 0;
    http2IsSet_ = false;
}

ShowHttpsConfigResponse::~ShowHttpsConfigResponse() = default;

void ShowHttpsConfigResponse::validate()
{
}

web::json::value ShowHttpsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }
    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(forceRedirectHttpsIsSet_) {
        val[utility::conversions::to_string_t("force_redirect_https")] = ModelBase::toJson(forceRedirectHttps_);
    }
    if(http2IsSet_) {
        val[utility::conversions::to_string_t("http2")] = ModelBase::toJson(http2_);
    }

    return val;
}
bool ShowHttpsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("https_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_redirect_https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_redirect_https"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRedirectHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http2"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp2(refVal);
        }
    }
    return ok;
}


std::string ShowHttpsConfigResponse::getSource() const
{
    return source_;
}

void ShowHttpsConfigResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ShowHttpsConfigResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void ShowHttpsConfigResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ShowHttpsConfigResponse::getCertName() const
{
    return certName_;
}

void ShowHttpsConfigResponse::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool ShowHttpsConfigResponse::certNameIsSet() const
{
    return certNameIsSet_;
}

void ShowHttpsConfigResponse::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string ShowHttpsConfigResponse::getCertId() const
{
    return certId_;
}

void ShowHttpsConfigResponse::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool ShowHttpsConfigResponse::certIdIsSet() const
{
    return certIdIsSet_;
}

void ShowHttpsConfigResponse::unsetcertId()
{
    certIdIsSet_ = false;
}

int32_t ShowHttpsConfigResponse::getHttpsStatus() const
{
    return httpsStatus_;
}

void ShowHttpsConfigResponse::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool ShowHttpsConfigResponse::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void ShowHttpsConfigResponse::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string ShowHttpsConfigResponse::getCertificate() const
{
    return certificate_;
}

void ShowHttpsConfigResponse::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool ShowHttpsConfigResponse::certificateIsSet() const
{
    return certificateIsSet_;
}

void ShowHttpsConfigResponse::unsetcertificate()
{
    certificateIsSet_ = false;
}

int32_t ShowHttpsConfigResponse::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void ShowHttpsConfigResponse::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool ShowHttpsConfigResponse::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void ShowHttpsConfigResponse::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

int32_t ShowHttpsConfigResponse::getHttp2() const
{
    return http2_;
}

void ShowHttpsConfigResponse::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool ShowHttpsConfigResponse::http2IsSet() const
{
    return http2IsSet_;
}

void ShowHttpsConfigResponse::unsethttp2()
{
    http2IsSet_ = false;
}

}
}
}
}
}


