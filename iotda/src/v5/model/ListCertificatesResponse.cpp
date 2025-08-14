

#include "huaweicloud/iotda/v5/model/ListCertificatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListCertificatesResponse::ListCertificatesResponse()
{
    certificatesIsSet_ = false;
    pageIsSet_ = false;
}

ListCertificatesResponse::~ListCertificatesResponse() = default;

void ListCertificatesResponse::validate()
{
}

web::json::value ListCertificatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificatesIsSet_) {
        val[utility::conversions::to_string_t("certificates")] = ModelBase::toJson(certificates_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListCertificatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<CertificatesRspDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<CertificatesRspDTO>& ListCertificatesResponse::getCertificates()
{
    return certificates_;
}

void ListCertificatesResponse::setCertificates(const std::vector<CertificatesRspDTO>& value)
{
    certificates_ = value;
    certificatesIsSet_ = true;
}

bool ListCertificatesResponse::certificatesIsSet() const
{
    return certificatesIsSet_;
}

void ListCertificatesResponse::unsetcertificates()
{
    certificatesIsSet_ = false;
}

Page ListCertificatesResponse::getPage() const
{
    return page_;
}

void ListCertificatesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListCertificatesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListCertificatesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


