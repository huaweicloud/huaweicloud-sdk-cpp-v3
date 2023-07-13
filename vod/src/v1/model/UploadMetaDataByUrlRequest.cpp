

#include "huaweicloud/vod/v1/model/UploadMetaDataByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadMetaDataByUrlRequest::UploadMetaDataByUrlRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UploadMetaDataByUrlRequest::~UploadMetaDataByUrlRequest() = default;

void UploadMetaDataByUrlRequest::validate()
{
}

web::json::value UploadMetaDataByUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UploadMetaDataByUrlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadMetaDataByUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UploadMetaDataByUrlRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UploadMetaDataByUrlRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UploadMetaDataByUrlRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UploadMetaDataByUrlRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UploadMetaDataByUrlReq UploadMetaDataByUrlRequest::getBody() const
{
    return body_;
}

void UploadMetaDataByUrlRequest::setBody(const UploadMetaDataByUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadMetaDataByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadMetaDataByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


