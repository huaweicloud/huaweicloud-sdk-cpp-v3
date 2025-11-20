

#include "huaweicloud/iotda/v5/model/ServerCertificateConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServerCertificateConfig::ServerCertificateConfig()
{
    ocspStaplingEnable_ = false;
    ocspStaplingEnableIsSet_ = false;
    ocspServerCaId_ = "";
    ocspServerCaIdIsSet_ = false;
    ocspSslEnable_ = false;
    ocspSslEnableIsSet_ = false;
}

ServerCertificateConfig::~ServerCertificateConfig() = default;

void ServerCertificateConfig::validate()
{
}

web::json::value ServerCertificateConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ocspStaplingEnableIsSet_) {
        val[utility::conversions::to_string_t("ocsp_stapling_enable")] = ModelBase::toJson(ocspStaplingEnable_);
    }
    if(ocspServerCaIdIsSet_) {
        val[utility::conversions::to_string_t("ocsp_server_ca_id")] = ModelBase::toJson(ocspServerCaId_);
    }
    if(ocspSslEnableIsSet_) {
        val[utility::conversions::to_string_t("ocsp_ssl_enable")] = ModelBase::toJson(ocspSslEnable_);
    }

    return val;
}
bool ServerCertificateConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ocsp_stapling_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_stapling_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspStaplingEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ocsp_server_ca_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_server_ca_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspServerCaId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ocsp_ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspSslEnable(refVal);
        }
    }
    return ok;
}


bool ServerCertificateConfig::isOcspStaplingEnable() const
{
    return ocspStaplingEnable_;
}

void ServerCertificateConfig::setOcspStaplingEnable(bool value)
{
    ocspStaplingEnable_ = value;
    ocspStaplingEnableIsSet_ = true;
}

bool ServerCertificateConfig::ocspStaplingEnableIsSet() const
{
    return ocspStaplingEnableIsSet_;
}

void ServerCertificateConfig::unsetocspStaplingEnable()
{
    ocspStaplingEnableIsSet_ = false;
}

std::string ServerCertificateConfig::getOcspServerCaId() const
{
    return ocspServerCaId_;
}

void ServerCertificateConfig::setOcspServerCaId(const std::string& value)
{
    ocspServerCaId_ = value;
    ocspServerCaIdIsSet_ = true;
}

bool ServerCertificateConfig::ocspServerCaIdIsSet() const
{
    return ocspServerCaIdIsSet_;
}

void ServerCertificateConfig::unsetocspServerCaId()
{
    ocspServerCaIdIsSet_ = false;
}

bool ServerCertificateConfig::isOcspSslEnable() const
{
    return ocspSslEnable_;
}

void ServerCertificateConfig::setOcspSslEnable(bool value)
{
    ocspSslEnable_ = value;
    ocspSslEnableIsSet_ = true;
}

bool ServerCertificateConfig::ocspSslEnableIsSet() const
{
    return ocspSslEnableIsSet_;
}

void ServerCertificateConfig::unsetocspSslEnable()
{
    ocspSslEnableIsSet_ = false;
}

}
}
}
}
}


