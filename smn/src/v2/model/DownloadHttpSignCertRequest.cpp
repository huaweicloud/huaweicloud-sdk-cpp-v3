

#include "huaweicloud/smn/v2/model/DownloadHttpSignCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DownloadHttpSignCertRequest::DownloadHttpSignCertRequest()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

DownloadHttpSignCertRequest::~DownloadHttpSignCertRequest() = default;

void DownloadHttpSignCertRequest::validate()
{
}

web::json::value DownloadHttpSignCertRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }

    return val;
}
bool DownloadHttpSignCertRequest::fromJson(const web::json::value& val)
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


std::string DownloadHttpSignCertRequest::getCertificateId() const
{
    return certificateId_;
}

void DownloadHttpSignCertRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DownloadHttpSignCertRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DownloadHttpSignCertRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


