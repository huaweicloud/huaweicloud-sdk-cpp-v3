

#include "huaweicloud/cce/v3/model/CertificateAuthority.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CertificateAuthority::CertificateAuthority()
{
    data_ = "";
    dataIsSet_ = false;
}

CertificateAuthority::~CertificateAuthority() = default;

void CertificateAuthority::validate()
{
}

web::json::value CertificateAuthority::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CertificateAuthority::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string CertificateAuthority::getData() const
{
    return data_;
}

void CertificateAuthority::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CertificateAuthority::dataIsSet() const
{
    return dataIsSet_;
}

void CertificateAuthority::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


