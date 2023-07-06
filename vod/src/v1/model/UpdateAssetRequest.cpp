

#include "huaweicloud/vod/v1/model/UpdateAssetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateAssetRequest::UpdateAssetRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAssetRequest::~UpdateAssetRequest() = default;

void UpdateAssetRequest::validate()
{
}

web::json::value UpdateAssetRequest::toJson() const
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

bool UpdateAssetRequest::fromJson(const web::json::value& val)
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
            UploadAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UploadAssetReq UpdateAssetRequest::getBody() const
{
    return body_;
}

void UpdateAssetRequest::setBody(const UploadAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


