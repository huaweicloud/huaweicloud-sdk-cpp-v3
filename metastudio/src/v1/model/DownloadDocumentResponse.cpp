

#include "huaweicloud/metastudio/v1/model/DownloadDocumentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DownloadDocumentResponse::DownloadDocumentResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DownloadDocumentResponse::~DownloadDocumentResponse() = default;

void DownloadDocumentResponse::validate()
{
}

web::json::value DownloadDocumentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DownloadDocumentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DownloadDocumentResponse::getXRequestId() const
{
    return xRequestId_;
}

void DownloadDocumentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DownloadDocumentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DownloadDocumentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


