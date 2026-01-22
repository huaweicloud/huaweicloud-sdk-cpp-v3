

#include "huaweicloud/live/v1/model/ShowCertificateInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowCertificateInfoResponse::ShowCertificateInfoResponse()
{
    total_ = 0.0;
    totalIsSet_ = false;
    certificatesInfoIsSet_ = false;
}

ShowCertificateInfoResponse::~ShowCertificateInfoResponse() = default;

void ShowCertificateInfoResponse::validate()
{
}

web::json::value ShowCertificateInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(certificatesInfoIsSet_) {
        val[utility::conversions::to_string_t("certificates_info")] = ModelBase::toJson(certificatesInfo_);
    }

    return val;
}
bool ShowCertificateInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificates_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificates_info"));
        if(!fieldValue.is_null())
        {
            std::vector<CertInfoResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificatesInfo(refVal);
        }
    }
    return ok;
}


double ShowCertificateInfoResponse::getTotal() const
{
    return total_;
}

void ShowCertificateInfoResponse::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowCertificateInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowCertificateInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CertInfoResp>& ShowCertificateInfoResponse::getCertificatesInfo()
{
    return certificatesInfo_;
}

void ShowCertificateInfoResponse::setCertificatesInfo(const std::vector<CertInfoResp>& value)
{
    certificatesInfo_ = value;
    certificatesInfoIsSet_ = true;
}

bool ShowCertificateInfoResponse::certificatesInfoIsSet() const
{
    return certificatesInfoIsSet_;
}

void ShowCertificateInfoResponse::unsetcertificatesInfo()
{
    certificatesInfoIsSet_ = false;
}

}
}
}
}
}


