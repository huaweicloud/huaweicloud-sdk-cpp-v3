

#include "huaweicloud/gaussdbfornosql/v3/model/CertInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CertInfoOption::CertInfoOption()
{
    certId_ = "";
    certIdIsSet_ = false;
    certType_ = "";
    certTypeIsSet_ = false;
}

CertInfoOption::~CertInfoOption() = default;

void CertInfoOption::validate()
{
}

web::json::value CertInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }
    if(certTypeIsSet_) {
        val[utility::conversions::to_string_t("cert_type")] = ModelBase::toJson(certType_);
    }

    return val;
}
bool CertInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertType(refVal);
        }
    }
    return ok;
}


std::string CertInfoOption::getCertId() const
{
    return certId_;
}

void CertInfoOption::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool CertInfoOption::certIdIsSet() const
{
    return certIdIsSet_;
}

void CertInfoOption::unsetcertId()
{
    certIdIsSet_ = false;
}

std::string CertInfoOption::getCertType() const
{
    return certType_;
}

void CertInfoOption::setCertType(const std::string& value)
{
    certType_ = value;
    certTypeIsSet_ = true;
}

bool CertInfoOption::certTypeIsSet() const
{
    return certTypeIsSet_;
}

void CertInfoOption::unsetcertType()
{
    certTypeIsSet_ = false;
}

}
}
}
}
}


