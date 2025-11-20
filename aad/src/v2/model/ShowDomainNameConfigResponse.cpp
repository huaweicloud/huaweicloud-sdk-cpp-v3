

#include "huaweicloud/aad/v2/model/ShowDomainNameConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDomainNameConfigResponse::ShowDomainNameConfigResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    portHttpIsSet_ = false;
    portHttpsIsSet_ = false;
    realServer_ = "";
    realServerIsSet_ = false;
    ppEnable_ = 0;
    ppEnableIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
    tls_ = "";
    tlsIsSet_ = false;
    cipher_ = "";
    cipherIsSet_ = false;
    http2Enable_ = false;
    http2EnableIsSet_ = false;
    headerMapIsSet_ = false;
}

ShowDomainNameConfigResponse::~ShowDomainNameConfigResponse() = default;

void ShowDomainNameConfigResponse::validate()
{
}

web::json::value ShowDomainNameConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(realServerTypeIsSet_) {
        val[utility::conversions::to_string_t("real_server_type")] = ModelBase::toJson(realServerType_);
    }
    if(portHttpIsSet_) {
        val[utility::conversions::to_string_t("port_http")] = ModelBase::toJson(portHttp_);
    }
    if(portHttpsIsSet_) {
        val[utility::conversions::to_string_t("port_https")] = ModelBase::toJson(portHttps_);
    }
    if(realServerIsSet_) {
        val[utility::conversions::to_string_t("real_server")] = ModelBase::toJson(realServer_);
    }
    if(ppEnableIsSet_) {
        val[utility::conversions::to_string_t("pp_enable")] = ModelBase::toJson(ppEnable_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(tlsIsSet_) {
        val[utility::conversions::to_string_t("tls")] = ModelBase::toJson(tls_);
    }
    if(cipherIsSet_) {
        val[utility::conversions::to_string_t("cipher")] = ModelBase::toJson(cipher_);
    }
    if(http2EnableIsSet_) {
        val[utility::conversions::to_string_t("http2_enable")] = ModelBase::toJson(http2Enable_);
    }
    if(headerMapIsSet_) {
        val[utility::conversions::to_string_t("header_map")] = ModelBase::toJson(headerMap_);
    }

    return val;
}
bool ShowDomainNameConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_server_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_http"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_http"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortHttp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_https"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pp_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pp_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPpEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tls"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cipher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cipher"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipher(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http2_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http2_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp2Enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("header_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("header_map"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaderMap(refVal);
        }
    }
    return ok;
}


std::string ShowDomainNameConfigResponse::getDomainId() const
{
    return domainId_;
}

void ShowDomainNameConfigResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainNameConfigResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainNameConfigResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowDomainNameConfigResponse::getDomainName() const
{
    return domainName_;
}

void ShowDomainNameConfigResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainNameConfigResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainNameConfigResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t ShowDomainNameConfigResponse::getRealServerType() const
{
    return realServerType_;
}

void ShowDomainNameConfigResponse::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool ShowDomainNameConfigResponse::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void ShowDomainNameConfigResponse::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::vector<int32_t>& ShowDomainNameConfigResponse::getPortHttp()
{
    return portHttp_;
}

void ShowDomainNameConfigResponse::setPortHttp(std::vector<int32_t> value)
{
    portHttp_ = value;
    portHttpIsSet_ = true;
}

bool ShowDomainNameConfigResponse::portHttpIsSet() const
{
    return portHttpIsSet_;
}

void ShowDomainNameConfigResponse::unsetportHttp()
{
    portHttpIsSet_ = false;
}

std::vector<int32_t>& ShowDomainNameConfigResponse::getPortHttps()
{
    return portHttps_;
}

void ShowDomainNameConfigResponse::setPortHttps(std::vector<int32_t> value)
{
    portHttps_ = value;
    portHttpsIsSet_ = true;
}

bool ShowDomainNameConfigResponse::portHttpsIsSet() const
{
    return portHttpsIsSet_;
}

void ShowDomainNameConfigResponse::unsetportHttps()
{
    portHttpsIsSet_ = false;
}

std::string ShowDomainNameConfigResponse::getRealServer() const
{
    return realServer_;
}

void ShowDomainNameConfigResponse::setRealServer(const std::string& value)
{
    realServer_ = value;
    realServerIsSet_ = true;
}

bool ShowDomainNameConfigResponse::realServerIsSet() const
{
    return realServerIsSet_;
}

void ShowDomainNameConfigResponse::unsetrealServer()
{
    realServerIsSet_ = false;
}

int32_t ShowDomainNameConfigResponse::getPpEnable() const
{
    return ppEnable_;
}

void ShowDomainNameConfigResponse::setPpEnable(int32_t value)
{
    ppEnable_ = value;
    ppEnableIsSet_ = true;
}

bool ShowDomainNameConfigResponse::ppEnableIsSet() const
{
    return ppEnableIsSet_;
}

void ShowDomainNameConfigResponse::unsetppEnable()
{
    ppEnableIsSet_ = false;
}

int32_t ShowDomainNameConfigResponse::getOverseasType() const
{
    return overseasType_;
}

void ShowDomainNameConfigResponse::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool ShowDomainNameConfigResponse::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void ShowDomainNameConfigResponse::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

std::string ShowDomainNameConfigResponse::getTls() const
{
    return tls_;
}

void ShowDomainNameConfigResponse::setTls(const std::string& value)
{
    tls_ = value;
    tlsIsSet_ = true;
}

bool ShowDomainNameConfigResponse::tlsIsSet() const
{
    return tlsIsSet_;
}

void ShowDomainNameConfigResponse::unsettls()
{
    tlsIsSet_ = false;
}

std::string ShowDomainNameConfigResponse::getCipher() const
{
    return cipher_;
}

void ShowDomainNameConfigResponse::setCipher(const std::string& value)
{
    cipher_ = value;
    cipherIsSet_ = true;
}

bool ShowDomainNameConfigResponse::cipherIsSet() const
{
    return cipherIsSet_;
}

void ShowDomainNameConfigResponse::unsetcipher()
{
    cipherIsSet_ = false;
}

bool ShowDomainNameConfigResponse::isHttp2Enable() const
{
    return http2Enable_;
}

void ShowDomainNameConfigResponse::setHttp2Enable(bool value)
{
    http2Enable_ = value;
    http2EnableIsSet_ = true;
}

bool ShowDomainNameConfigResponse::http2EnableIsSet() const
{
    return http2EnableIsSet_;
}

void ShowDomainNameConfigResponse::unsethttp2Enable()
{
    http2EnableIsSet_ = false;
}

Object ShowDomainNameConfigResponse::getHeaderMap() const
{
    return headerMap_;
}

void ShowDomainNameConfigResponse::setHeaderMap(const Object& value)
{
    headerMap_ = value;
    headerMapIsSet_ = true;
}

bool ShowDomainNameConfigResponse::headerMapIsSet() const
{
    return headerMapIsSet_;
}

void ShowDomainNameConfigResponse::unsetheaderMap()
{
    headerMapIsSet_ = false;
}

}
}
}
}
}


