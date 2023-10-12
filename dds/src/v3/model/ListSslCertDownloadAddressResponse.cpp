

#include "huaweicloud/dds/v3/model/ListSslCertDownloadAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListSslCertDownloadAddressResponse::ListSslCertDownloadAddressResponse()
{
    certsIsSet_ = false;
}

ListSslCertDownloadAddressResponse::~ListSslCertDownloadAddressResponse() = default;

void ListSslCertDownloadAddressResponse::validate()
{
}

web::json::value ListSslCertDownloadAddressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certsIsSet_) {
        val[utility::conversions::to_string_t("certs")] = ModelBase::toJson(certs_);
    }

    return val;
}
bool ListSslCertDownloadAddressResponse::fromJson(const web::json::value& val)
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


std::vector<CertInfo>& ListSslCertDownloadAddressResponse::getCerts()
{
    return certs_;
}

void ListSslCertDownloadAddressResponse::setCerts(const std::vector<CertInfo>& value)
{
    certs_ = value;
    certsIsSet_ = true;
}

bool ListSslCertDownloadAddressResponse::certsIsSet() const
{
    return certsIsSet_;
}

void ListSslCertDownloadAddressResponse::unsetcerts()
{
    certsIsSet_ = false;
}

}
}
}
}
}


