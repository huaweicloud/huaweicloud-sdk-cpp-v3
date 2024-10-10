

#include "huaweicloud/aad/v2/model/CreateAadDomainRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




CreateAadDomainRequestBody::CreateAadDomainRequestBody()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    ipsIsSet_ = false;
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    portHttpIsSet_ = false;
    portHttpsIsSet_ = false;
    realServer_ = "";
    realServerIsSet_ = false;
    overseasType_ = "";
    overseasTypeIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    wafSwitch_ = "";
    wafSwitchIsSet_ = false;
}

CreateAadDomainRequestBody::~CreateAadDomainRequestBody() = default;

void CreateAadDomainRequestBody::validate()
{
}

web::json::value CreateAadDomainRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
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
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(wafSwitchIsSet_) {
        val[utility::conversions::to_string_t("waf_switch")] = ModelBase::toJson(wafSwitch_);
    }

    return val;
}
bool CreateAadDomainRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("waf_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waf_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWafSwitch(refVal);
        }
    }
    return ok;
}


std::string CreateAadDomainRequestBody::getDomainName() const
{
    return domainName_;
}

void CreateAadDomainRequestBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateAadDomainRequestBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateAadDomainRequestBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CreateAadDomainRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateAadDomainRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateAadDomainRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateAadDomainRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& CreateAadDomainRequestBody::getIps()
{
    return ips_;
}

void CreateAadDomainRequestBody::setIps(const std::vector<std::string>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool CreateAadDomainRequestBody::ipsIsSet() const
{
    return ipsIsSet_;
}

void CreateAadDomainRequestBody::unsetips()
{
    ipsIsSet_ = false;
}

int32_t CreateAadDomainRequestBody::getRealServerType() const
{
    return realServerType_;
}

void CreateAadDomainRequestBody::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool CreateAadDomainRequestBody::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void CreateAadDomainRequestBody::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::vector<int32_t>& CreateAadDomainRequestBody::getPortHttp()
{
    return portHttp_;
}

void CreateAadDomainRequestBody::setPortHttp(std::vector<int32_t> value)
{
    portHttp_ = value;
    portHttpIsSet_ = true;
}

bool CreateAadDomainRequestBody::portHttpIsSet() const
{
    return portHttpIsSet_;
}

void CreateAadDomainRequestBody::unsetportHttp()
{
    portHttpIsSet_ = false;
}

std::vector<int32_t>& CreateAadDomainRequestBody::getPortHttps()
{
    return portHttps_;
}

void CreateAadDomainRequestBody::setPortHttps(std::vector<int32_t> value)
{
    portHttps_ = value;
    portHttpsIsSet_ = true;
}

bool CreateAadDomainRequestBody::portHttpsIsSet() const
{
    return portHttpsIsSet_;
}

void CreateAadDomainRequestBody::unsetportHttps()
{
    portHttpsIsSet_ = false;
}

std::string CreateAadDomainRequestBody::getRealServer() const
{
    return realServer_;
}

void CreateAadDomainRequestBody::setRealServer(const std::string& value)
{
    realServer_ = value;
    realServerIsSet_ = true;
}

bool CreateAadDomainRequestBody::realServerIsSet() const
{
    return realServerIsSet_;
}

void CreateAadDomainRequestBody::unsetrealServer()
{
    realServerIsSet_ = false;
}

std::string CreateAadDomainRequestBody::getOverseasType() const
{
    return overseasType_;
}

void CreateAadDomainRequestBody::setOverseasType(const std::string& value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool CreateAadDomainRequestBody::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void CreateAadDomainRequestBody::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

std::string CreateAadDomainRequestBody::getCertName() const
{
    return certName_;
}

void CreateAadDomainRequestBody::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool CreateAadDomainRequestBody::certNameIsSet() const
{
    return certNameIsSet_;
}

void CreateAadDomainRequestBody::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string CreateAadDomainRequestBody::getWafSwitch() const
{
    return wafSwitch_;
}

void CreateAadDomainRequestBody::setWafSwitch(const std::string& value)
{
    wafSwitch_ = value;
    wafSwitchIsSet_ = true;
}

bool CreateAadDomainRequestBody::wafSwitchIsSet() const
{
    return wafSwitchIsSet_;
}

void CreateAadDomainRequestBody::unsetwafSwitch()
{
    wafSwitchIsSet_ = false;
}

}
}
}
}
}


