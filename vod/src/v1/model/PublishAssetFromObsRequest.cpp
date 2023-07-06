

#include "huaweicloud/vod/v1/model/PublishAssetFromObsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PublishAssetFromObsRequest::PublishAssetFromObsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

PublishAssetFromObsRequest::~PublishAssetFromObsRequest() = default;

void PublishAssetFromObsRequest::validate()
{
}

web::json::value PublishAssetFromObsRequest::toJson() const
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

bool PublishAssetFromObsRequest::fromJson(const web::json::value& val)
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
            PublishAssetFromObsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string PublishAssetFromObsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void PublishAssetFromObsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool PublishAssetFromObsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void PublishAssetFromObsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

PublishAssetFromObsReq PublishAssetFromObsRequest::getBody() const
{
    return body_;
}

void PublishAssetFromObsRequest::setBody(const PublishAssetFromObsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishAssetFromObsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishAssetFromObsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


