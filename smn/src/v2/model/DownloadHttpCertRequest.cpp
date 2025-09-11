

#include "huaweicloud/smn/v2/model/DownloadHttpCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DownloadHttpCertRequest::DownloadHttpCertRequest()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

DownloadHttpCertRequest::~DownloadHttpCertRequest() = default;

void DownloadHttpCertRequest::validate()
{
}

web::json::value DownloadHttpCertRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }

    return val;
}
bool DownloadHttpCertRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    return ok;
}


std::string DownloadHttpCertRequest::getCertificateId() const
{
    return certificateId_;
}

void DownloadHttpCertRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DownloadHttpCertRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DownloadHttpCertRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


