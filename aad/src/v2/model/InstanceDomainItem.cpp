

#include "huaweicloud/aad/v2/model/InstanceDomainItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




InstanceDomainItem::InstanceDomainItem()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    cname_ = "";
    cnameIsSet_ = false;
    domainStatus_ = "";
    domainStatusIsSet_ = false;
    ccStatus_ = 0;
    ccStatusIsSet_ = false;
    httpsCertStatus_ = 0;
    httpsCertStatusIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    protocolTypeIsSet_ = false;
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    realServers_ = "";
    realServersIsSet_ = false;
    wafStatus_ = 0;
    wafStatusIsSet_ = false;
}

InstanceDomainItem::~InstanceDomainItem() = default;

void InstanceDomainItem::validate()
{
}

web::json::value InstanceDomainItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(cnameIsSet_) {
        val[utility::conversions::to_string_t("cname")] = ModelBase::toJson(cname_);
    }
    if(domainStatusIsSet_) {
        val[utility::conversions::to_string_t("domain_status")] = ModelBase::toJson(domainStatus_);
    }
    if(ccStatusIsSet_) {
        val[utility::conversions::to_string_t("cc_status")] = ModelBase::toJson(ccStatus_);
    }
    if(httpsCertStatusIsSet_) {
        val[utility::conversions::to_string_t("https_cert_status")] = ModelBase::toJson(httpsCertStatus_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(protocolTypeIsSet_) {
        val[utility::conversions::to_string_t("protocol_type")] = ModelBase::toJson(protocolType_);
    }
    if(realServerTypeIsSet_) {
        val[utility::conversions::to_string_t("real_server_type")] = ModelBase::toJson(realServerType_);
    }
    if(realServersIsSet_) {
        val[utility::conversions::to_string_t("real_servers")] = ModelBase::toJson(realServers_);
    }
    if(wafStatusIsSet_) {
        val[utility::conversions::to_string_t("waf_status")] = ModelBase::toJson(wafStatus_);
    }

    return val;
}
bool InstanceDomainItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCcStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_cert_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_cert_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsCertStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protocol_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("real_servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_servers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waf_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waf_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWafStatus(refVal);
        }
    }
    return ok;
}


std::string InstanceDomainItem::getDomainId() const
{
    return domainId_;
}

void InstanceDomainItem::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool InstanceDomainItem::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void InstanceDomainItem::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string InstanceDomainItem::getDomainName() const
{
    return domainName_;
}

void InstanceDomainItem::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool InstanceDomainItem::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void InstanceDomainItem::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string InstanceDomainItem::getCname() const
{
    return cname_;
}

void InstanceDomainItem::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool InstanceDomainItem::cnameIsSet() const
{
    return cnameIsSet_;
}

void InstanceDomainItem::unsetcname()
{
    cnameIsSet_ = false;
}

std::string InstanceDomainItem::getDomainStatus() const
{
    return domainStatus_;
}

void InstanceDomainItem::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool InstanceDomainItem::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void InstanceDomainItem::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

int32_t InstanceDomainItem::getCcStatus() const
{
    return ccStatus_;
}

void InstanceDomainItem::setCcStatus(int32_t value)
{
    ccStatus_ = value;
    ccStatusIsSet_ = true;
}

bool InstanceDomainItem::ccStatusIsSet() const
{
    return ccStatusIsSet_;
}

void InstanceDomainItem::unsetccStatus()
{
    ccStatusIsSet_ = false;
}

int32_t InstanceDomainItem::getHttpsCertStatus() const
{
    return httpsCertStatus_;
}

void InstanceDomainItem::setHttpsCertStatus(int32_t value)
{
    httpsCertStatus_ = value;
    httpsCertStatusIsSet_ = true;
}

bool InstanceDomainItem::httpsCertStatusIsSet() const
{
    return httpsCertStatusIsSet_;
}

void InstanceDomainItem::unsethttpsCertStatus()
{
    httpsCertStatusIsSet_ = false;
}

std::string InstanceDomainItem::getCertName() const
{
    return certName_;
}

void InstanceDomainItem::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool InstanceDomainItem::certNameIsSet() const
{
    return certNameIsSet_;
}

void InstanceDomainItem::unsetcertName()
{
    certNameIsSet_ = false;
}

std::vector<std::string>& InstanceDomainItem::getProtocolType()
{
    return protocolType_;
}

void InstanceDomainItem::setProtocolType(const std::vector<std::string>& value)
{
    protocolType_ = value;
    protocolTypeIsSet_ = true;
}

bool InstanceDomainItem::protocolTypeIsSet() const
{
    return protocolTypeIsSet_;
}

void InstanceDomainItem::unsetprotocolType()
{
    protocolTypeIsSet_ = false;
}

int32_t InstanceDomainItem::getRealServerType() const
{
    return realServerType_;
}

void InstanceDomainItem::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool InstanceDomainItem::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void InstanceDomainItem::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::string InstanceDomainItem::getRealServers() const
{
    return realServers_;
}

void InstanceDomainItem::setRealServers(const std::string& value)
{
    realServers_ = value;
    realServersIsSet_ = true;
}

bool InstanceDomainItem::realServersIsSet() const
{
    return realServersIsSet_;
}

void InstanceDomainItem::unsetrealServers()
{
    realServersIsSet_ = false;
}

int32_t InstanceDomainItem::getWafStatus() const
{
    return wafStatus_;
}

void InstanceDomainItem::setWafStatus(int32_t value)
{
    wafStatus_ = value;
    wafStatusIsSet_ = true;
}

bool InstanceDomainItem::wafStatusIsSet() const
{
    return wafStatusIsSet_;
}

void InstanceDomainItem::unsetwafStatus()
{
    wafStatusIsSet_ = false;
}

}
}
}
}
}


