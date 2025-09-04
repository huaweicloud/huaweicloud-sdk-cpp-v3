

#include "huaweicloud/iotda/v5/model/ListDeviceCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceCertificateResponse::ListDeviceCertificateResponse()
{
    deviceCertificatesIsSet_ = false;
    pageIsSet_ = false;
}

ListDeviceCertificateResponse::~ListDeviceCertificateResponse() = default;

void ListDeviceCertificateResponse::validate()
{
}

web::json::value ListDeviceCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceCertificatesIsSet_) {
        val[utility::conversions::to_string_t("device_certificates")] = ModelBase::toJson(deviceCertificates_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListDeviceCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<DeviceCertificateSimple> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceCertificates(refVal);
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


std::vector<DeviceCertificateSimple>& ListDeviceCertificateResponse::getDeviceCertificates()
{
    return deviceCertificates_;
}

void ListDeviceCertificateResponse::setDeviceCertificates(const std::vector<DeviceCertificateSimple>& value)
{
    deviceCertificates_ = value;
    deviceCertificatesIsSet_ = true;
}

bool ListDeviceCertificateResponse::deviceCertificatesIsSet() const
{
    return deviceCertificatesIsSet_;
}

void ListDeviceCertificateResponse::unsetdeviceCertificates()
{
    deviceCertificatesIsSet_ = false;
}

Page ListDeviceCertificateResponse::getPage() const
{
    return page_;
}

void ListDeviceCertificateResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeviceCertificateResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeviceCertificateResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


