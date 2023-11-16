

#include "huaweicloud/aad/v1/model/DomainInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DomainInfo::DomainInfo()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    cname_ = "";
    cnameIsSet_ = false;
    protocolIsSet_ = false;
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    realServers_ = "";
    realServersIsSet_ = false;
    wafStatus_ = 0;
    wafStatusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

DomainInfo::~DomainInfo() = default;

void DomainInfo::validate()
{
}

web::json::value DomainInfo::toJson() const
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
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool DomainInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string DomainInfo::getDomainId() const
{
    return domainId_;
}

void DomainInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DomainInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DomainInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DomainInfo::getDomainName() const
{
    return domainName_;
}

void DomainInfo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainInfo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainInfo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainInfo::getCname() const
{
    return cname_;
}

void DomainInfo::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool DomainInfo::cnameIsSet() const
{
    return cnameIsSet_;
}

void DomainInfo::unsetcname()
{
    cnameIsSet_ = false;
}

std::vector<std::string>& DomainInfo::getProtocol()
{
    return protocol_;
}

void DomainInfo::setProtocol(const std::vector<std::string>& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool DomainInfo::protocolIsSet() const
{
    return protocolIsSet_;
}

void DomainInfo::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t DomainInfo::getRealServerType() const
{
    return realServerType_;
}

void DomainInfo::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool DomainInfo::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void DomainInfo::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::string DomainInfo::getRealServers() const
{
    return realServers_;
}

void DomainInfo::setRealServers(const std::string& value)
{
    realServers_ = value;
    realServersIsSet_ = true;
}

bool DomainInfo::realServersIsSet() const
{
    return realServersIsSet_;
}

void DomainInfo::unsetrealServers()
{
    realServersIsSet_ = false;
}

int32_t DomainInfo::getWafStatus() const
{
    return wafStatus_;
}

void DomainInfo::setWafStatus(int32_t value)
{
    wafStatus_ = value;
    wafStatusIsSet_ = true;
}

bool DomainInfo::wafStatusIsSet() const
{
    return wafStatusIsSet_;
}

void DomainInfo::unsetwafStatus()
{
    wafStatusIsSet_ = false;
}

std::string DomainInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DomainInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DomainInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DomainInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


