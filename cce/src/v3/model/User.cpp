

#include "huaweicloud/cce/v3/model/User.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




User::User()
{
    clientCertificateData_ = "";
    clientCertificateDataIsSet_ = false;
    clientKeyData_ = "";
    clientKeyDataIsSet_ = false;
}

User::~User() = default;

void User::validate()
{
}

web::json::value User::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientCertificateDataIsSet_) {
        val[utility::conversions::to_string_t("client-certificate-data")] = ModelBase::toJson(clientCertificateData_);
    }
    if(clientKeyDataIsSet_) {
        val[utility::conversions::to_string_t("client-key-data")] = ModelBase::toJson(clientKeyData_);
    }

    return val;
}
bool User::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("client-certificate-data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client-certificate-data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientCertificateData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client-key-data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client-key-data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientKeyData(refVal);
        }
    }
    return ok;
}


std::string User::getClientCertificateData() const
{
    return clientCertificateData_;
}

void User::setClientCertificateData(const std::string& value)
{
    clientCertificateData_ = value;
    clientCertificateDataIsSet_ = true;
}

bool User::clientCertificateDataIsSet() const
{
    return clientCertificateDataIsSet_;
}

void User::unsetclientCertificateData()
{
    clientCertificateDataIsSet_ = false;
}

std::string User::getClientKeyData() const
{
    return clientKeyData_;
}

void User::setClientKeyData(const std::string& value)
{
    clientKeyData_ = value;
    clientKeyDataIsSet_ = true;
}

bool User::clientKeyDataIsSet() const
{
    return clientKeyDataIsSet_;
}

void User::unsetclientKeyData()
{
    clientKeyDataIsSet_ = false;
}

}
}
}
}
}


