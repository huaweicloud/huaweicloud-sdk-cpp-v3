

#include "huaweicloud/cdn/v2/model/ClientCert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ClientCert::ClientCert()
{
    status_ = "";
    statusIsSet_ = false;
    trustedCert_ = "";
    trustedCertIsSet_ = false;
    hosts_ = "";
    hostsIsSet_ = false;
    trustedCertsIsSet_ = false;
    smTrustedCertsIsSet_ = false;
    smCertHosts_ = "";
    smCertHostsIsSet_ = false;
}

ClientCert::~ClientCert() = default;

void ClientCert::validate()
{
}

web::json::value ClientCert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(trustedCertIsSet_) {
        val[utility::conversions::to_string_t("trusted_cert")] = ModelBase::toJson(trustedCert_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }
    if(trustedCertsIsSet_) {
        val[utility::conversions::to_string_t("trusted_certs")] = ModelBase::toJson(trustedCerts_);
    }
    if(smTrustedCertsIsSet_) {
        val[utility::conversions::to_string_t("sm_trusted_certs")] = ModelBase::toJson(smTrustedCerts_);
    }
    if(smCertHostsIsSet_) {
        val[utility::conversions::to_string_t("sm_cert_hosts")] = ModelBase::toJson(smCertHosts_);
    }

    return val;
}
bool ClientCert::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trusted_cert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trusted_cert"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustedCert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trusted_certs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trusted_certs"));
        if(!fieldValue.is_null())
        {
            std::vector<ClientCert_trusted_certs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustedCerts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sm_trusted_certs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sm_trusted_certs"));
        if(!fieldValue.is_null())
        {
            std::vector<ClientCert_trusted_certs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmTrustedCerts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sm_cert_hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sm_cert_hosts"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmCertHosts(refVal);
        }
    }
    return ok;
}


std::string ClientCert::getStatus() const
{
    return status_;
}

void ClientCert::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ClientCert::statusIsSet() const
{
    return statusIsSet_;
}

void ClientCert::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ClientCert::getTrustedCert() const
{
    return trustedCert_;
}

void ClientCert::setTrustedCert(const std::string& value)
{
    trustedCert_ = value;
    trustedCertIsSet_ = true;
}

bool ClientCert::trustedCertIsSet() const
{
    return trustedCertIsSet_;
}

void ClientCert::unsettrustedCert()
{
    trustedCertIsSet_ = false;
}

std::string ClientCert::getHosts() const
{
    return hosts_;
}

void ClientCert::setHosts(const std::string& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool ClientCert::hostsIsSet() const
{
    return hostsIsSet_;
}

void ClientCert::unsethosts()
{
    hostsIsSet_ = false;
}

std::vector<ClientCert_trusted_certs>& ClientCert::getTrustedCerts()
{
    return trustedCerts_;
}

void ClientCert::setTrustedCerts(const std::vector<ClientCert_trusted_certs>& value)
{
    trustedCerts_ = value;
    trustedCertsIsSet_ = true;
}

bool ClientCert::trustedCertsIsSet() const
{
    return trustedCertsIsSet_;
}

void ClientCert::unsettrustedCerts()
{
    trustedCertsIsSet_ = false;
}

std::vector<ClientCert_trusted_certs>& ClientCert::getSmTrustedCerts()
{
    return smTrustedCerts_;
}

void ClientCert::setSmTrustedCerts(const std::vector<ClientCert_trusted_certs>& value)
{
    smTrustedCerts_ = value;
    smTrustedCertsIsSet_ = true;
}

bool ClientCert::smTrustedCertsIsSet() const
{
    return smTrustedCertsIsSet_;
}

void ClientCert::unsetsmTrustedCerts()
{
    smTrustedCertsIsSet_ = false;
}

std::string ClientCert::getSmCertHosts() const
{
    return smCertHosts_;
}

void ClientCert::setSmCertHosts(const std::string& value)
{
    smCertHosts_ = value;
    smCertHostsIsSet_ = true;
}

bool ClientCert::smCertHostsIsSet() const
{
    return smCertHostsIsSet_;
}

void ClientCert::unsetsmCertHosts()
{
    smCertHostsIsSet_ = false;
}

}
}
}
}
}


