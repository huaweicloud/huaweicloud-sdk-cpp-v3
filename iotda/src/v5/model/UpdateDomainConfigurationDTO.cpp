

#include "huaweicloud/iotda/v5/model/UpdateDomainConfigurationDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDomainConfigurationDTO::UpdateDomainConfigurationDTO()
{
    serverCertificateId_ = "";
    serverCertificateIdIsSet_ = false;
    serverCertificateConfigIsSet_ = false;
}

UpdateDomainConfigurationDTO::~UpdateDomainConfigurationDTO() = default;

void UpdateDomainConfigurationDTO::validate()
{
}

web::json::value UpdateDomainConfigurationDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_id")] = ModelBase::toJson(serverCertificateId_);
    }
    if(serverCertificateConfigIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_config")] = ModelBase::toJson(serverCertificateConfig_);
    }

    return val;
}
bool UpdateDomainConfigurationDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_certificate_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificate_config"));
        if(!fieldValue.is_null())
        {
            ServerCertificateConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificateConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainConfigurationDTO::getServerCertificateId() const
{
    return serverCertificateId_;
}

void UpdateDomainConfigurationDTO::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool UpdateDomainConfigurationDTO::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void UpdateDomainConfigurationDTO::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

ServerCertificateConfig UpdateDomainConfigurationDTO::getServerCertificateConfig() const
{
    return serverCertificateConfig_;
}

void UpdateDomainConfigurationDTO::setServerCertificateConfig(const ServerCertificateConfig& value)
{
    serverCertificateConfig_ = value;
    serverCertificateConfigIsSet_ = true;
}

bool UpdateDomainConfigurationDTO::serverCertificateConfigIsSet() const
{
    return serverCertificateConfigIsSet_;
}

void UpdateDomainConfigurationDTO::unsetserverCertificateConfig()
{
    serverCertificateConfigIsSet_ = false;
}

}
}
}
}
}


