

#include "huaweicloud/vod/v1/model/ConfirmAssetUploadRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfirmAssetUploadRequest::ConfirmAssetUploadRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

ConfirmAssetUploadRequest::~ConfirmAssetUploadRequest() = default;

void ConfirmAssetUploadRequest::validate()
{
}

web::json::value ConfirmAssetUploadRequest::toJson() const
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
bool ConfirmAssetUploadRequest::fromJson(const web::json::value& val)
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
            ConfirmAssetUploadReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ConfirmAssetUploadRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ConfirmAssetUploadRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ConfirmAssetUploadRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ConfirmAssetUploadRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ConfirmAssetUploadReq ConfirmAssetUploadRequest::getBody() const
{
    return body_;
}

void ConfirmAssetUploadRequest::setBody(const ConfirmAssetUploadReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConfirmAssetUploadRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConfirmAssetUploadRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


