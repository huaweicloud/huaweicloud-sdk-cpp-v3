

#include "huaweicloud/aad/v1/model/HostBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




HostBody::HostBody()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    vipsIsSet_ = false;
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    portHttpIsSet_ = false;
    portHttpsIsSet_ = false;
    realServer_ = "";
    realServerIsSet_ = false;
}

HostBody::~HostBody() = default;

void HostBody::validate()
{
}

web::json::value HostBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(vipsIsSet_) {
        val[utility::conversions::to_string_t("vips")] = ModelBase::toJson(vips_);
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

    return val;
}
bool HostBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVips(refVal);
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
    return ok;
}


std::string HostBody::getDomainName() const
{
    return domainName_;
}

void HostBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool HostBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void HostBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string HostBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void HostBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool HostBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void HostBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& HostBody::getVips()
{
    return vips_;
}

void HostBody::setVips(const std::vector<std::string>& value)
{
    vips_ = value;
    vipsIsSet_ = true;
}

bool HostBody::vipsIsSet() const
{
    return vipsIsSet_;
}

void HostBody::unsetvips()
{
    vipsIsSet_ = false;
}

int32_t HostBody::getRealServerType() const
{
    return realServerType_;
}

void HostBody::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool HostBody::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void HostBody::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::vector<int32_t>& HostBody::getPortHttp()
{
    return portHttp_;
}

void HostBody::setPortHttp(std::vector<int32_t> value)
{
    portHttp_ = value;
    portHttpIsSet_ = true;
}

bool HostBody::portHttpIsSet() const
{
    return portHttpIsSet_;
}

void HostBody::unsetportHttp()
{
    portHttpIsSet_ = false;
}

std::vector<int32_t>& HostBody::getPortHttps()
{
    return portHttps_;
}

void HostBody::setPortHttps(std::vector<int32_t> value)
{
    portHttps_ = value;
    portHttpsIsSet_ = true;
}

bool HostBody::portHttpsIsSet() const
{
    return portHttpsIsSet_;
}

void HostBody::unsetportHttps()
{
    portHttpsIsSet_ = false;
}

std::string HostBody::getRealServer() const
{
    return realServer_;
}

void HostBody::setRealServer(const std::string& value)
{
    realServer_ = value;
    realServerIsSet_ = true;
}

bool HostBody::realServerIsSet() const
{
    return realServerIsSet_;
}

void HostBody::unsetrealServer()
{
    realServerIsSet_ = false;
}

}
}
}
}
}


