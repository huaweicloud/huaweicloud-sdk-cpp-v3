

#include "huaweicloud/cdn/v2/model/ShowCertificatesHttpsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowCertificatesHttpsInfoResponse::ShowCertificatesHttpsInfoResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    httpsIsSet_ = false;
}

ShowCertificatesHttpsInfoResponse::~ShowCertificatesHttpsInfoResponse() = default;

void ShowCertificatesHttpsInfoResponse::validate()
{
}

web::json::value ShowCertificatesHttpsInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }

    return val;
}
bool ShowCertificatesHttpsInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpsDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    return ok;
}


int32_t ShowCertificatesHttpsInfoResponse::getTotal() const
{
    return total_;
}

void ShowCertificatesHttpsInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowCertificatesHttpsInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowCertificatesHttpsInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<HttpsDetail>& ShowCertificatesHttpsInfoResponse::getHttps()
{
    return https_;
}

void ShowCertificatesHttpsInfoResponse::setHttps(const std::vector<HttpsDetail>& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool ShowCertificatesHttpsInfoResponse::httpsIsSet() const
{
    return httpsIsSet_;
}

void ShowCertificatesHttpsInfoResponse::unsethttps()
{
    httpsIsSet_ = false;
}

}
}
}
}
}


