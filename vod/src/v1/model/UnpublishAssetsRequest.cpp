

#include "huaweicloud/vod/v1/model/UnpublishAssetsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UnpublishAssetsRequest::UnpublishAssetsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UnpublishAssetsRequest::~UnpublishAssetsRequest() = default;

void UnpublishAssetsRequest::validate()
{
}

web::json::value UnpublishAssetsRequest::toJson() const
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

bool UnpublishAssetsRequest::fromJson(const web::json::value& val)
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
            PublishAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnpublishAssetsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UnpublishAssetsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UnpublishAssetsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UnpublishAssetsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

PublishAssetReq UnpublishAssetsRequest::getBody() const
{
    return body_;
}

void UnpublishAssetsRequest::setBody(const PublishAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnpublishAssetsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnpublishAssetsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


