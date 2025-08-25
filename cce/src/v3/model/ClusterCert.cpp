

#include "huaweicloud/cce/v3/model/ClusterCert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterCert::ClusterCert()
{
    server_ = "";
    serverIsSet_ = false;
    certificateAuthorityData_ = "";
    certificateAuthorityDataIsSet_ = false;
    insecureSkipTlsVerify_ = false;
    insecureSkipTlsVerifyIsSet_ = false;
}

ClusterCert::~ClusterCert() = default;

void ClusterCert::validate()
{
}

web::json::value ClusterCert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }
    if(certificateAuthorityDataIsSet_) {
        val[utility::conversions::to_string_t("certificate-authority-data")] = ModelBase::toJson(certificateAuthorityData_);
    }
    if(insecureSkipTlsVerifyIsSet_) {
        val[utility::conversions::to_string_t("insecure-skip-tls-verify")] = ModelBase::toJson(insecureSkipTlsVerify_);
    }

    return val;
}
bool ClusterCert::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate-authority-data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate-authority-data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateAuthorityData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insecure-skip-tls-verify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insecure-skip-tls-verify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsecureSkipTlsVerify(refVal);
        }
    }
    return ok;
}


std::string ClusterCert::getServer() const
{
    return server_;
}

void ClusterCert::setServer(const std::string& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool ClusterCert::serverIsSet() const
{
    return serverIsSet_;
}

void ClusterCert::unsetserver()
{
    serverIsSet_ = false;
}

std::string ClusterCert::getCertificateAuthorityData() const
{
    return certificateAuthorityData_;
}

void ClusterCert::setCertificateAuthorityData(const std::string& value)
{
    certificateAuthorityData_ = value;
    certificateAuthorityDataIsSet_ = true;
}

bool ClusterCert::certificateAuthorityDataIsSet() const
{
    return certificateAuthorityDataIsSet_;
}

void ClusterCert::unsetcertificateAuthorityData()
{
    certificateAuthorityDataIsSet_ = false;
}

bool ClusterCert::isInsecureSkipTlsVerify() const
{
    return insecureSkipTlsVerify_;
}

void ClusterCert::setInsecureSkipTlsVerify(bool value)
{
    insecureSkipTlsVerify_ = value;
    insecureSkipTlsVerifyIsSet_ = true;
}

bool ClusterCert::insecureSkipTlsVerifyIsSet() const
{
    return insecureSkipTlsVerifyIsSet_;
}

void ClusterCert::unsetinsecureSkipTlsVerify()
{
    insecureSkipTlsVerifyIsSet_ = false;
}

}
}
}
}
}


