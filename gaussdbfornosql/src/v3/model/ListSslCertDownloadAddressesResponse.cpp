

#include "huaweicloud/gaussdbfornosql/v3/model/ListSslCertDownloadAddressesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListSslCertDownloadAddressesResponse::ListSslCertDownloadAddressesResponse()
{
    certsIsSet_ = false;
}

ListSslCertDownloadAddressesResponse::~ListSslCertDownloadAddressesResponse() = default;

void ListSslCertDownloadAddressesResponse::validate()
{
}

web::json::value ListSslCertDownloadAddressesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certsIsSet_) {
        val[utility::conversions::to_string_t("certs")] = ModelBase::toJson(certs_);
    }

    return val;
}
bool ListSslCertDownloadAddressesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certs"));
        if(!fieldValue.is_null())
        {
            std::vector<CertInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCerts(refVal);
        }
    }
    return ok;
}


std::vector<CertInfo>& ListSslCertDownloadAddressesResponse::getCerts()
{
    return certs_;
}

void ListSslCertDownloadAddressesResponse::setCerts(const std::vector<CertInfo>& value)
{
    certs_ = value;
    certsIsSet_ = true;
}

bool ListSslCertDownloadAddressesResponse::certsIsSet() const
{
    return certsIsSet_;
}

void ListSslCertDownloadAddressesResponse::unsetcerts()
{
    certsIsSet_ = false;
}

}
}
}
}
}


