

#include "huaweicloud/vod/v1/model/RefreshAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




RefreshAssetRequest::RefreshAssetRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

RefreshAssetRequest::~RefreshAssetRequest() = default;

void RefreshAssetRequest::validate()
{
}

web::json::value RefreshAssetRequest::toJson() const
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
bool RefreshAssetRequest::fromJson(const web::json::value& val)
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
            RefreshTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RefreshAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void RefreshAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool RefreshAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void RefreshAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

RefreshTaskReq RefreshAssetRequest::getBody() const
{
    return body_;
}

void RefreshAssetRequest::setBody(const RefreshTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RefreshAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RefreshAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


