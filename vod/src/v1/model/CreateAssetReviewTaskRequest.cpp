

#include "huaweicloud/vod/v1/model/CreateAssetReviewTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetReviewTaskRequest::CreateAssetReviewTaskRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetReviewTaskRequest::~CreateAssetReviewTaskRequest() = default;

void CreateAssetReviewTaskRequest::validate()
{
}

web::json::value CreateAssetReviewTaskRequest::toJson() const
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

bool CreateAssetReviewTaskRequest::fromJson(const web::json::value& val)
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
            AssetReviewReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetReviewTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAssetReviewTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAssetReviewTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAssetReviewTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

AssetReviewReq CreateAssetReviewTaskRequest::getBody() const
{
    return body_;
}

void CreateAssetReviewTaskRequest::setBody(const AssetReviewReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetReviewTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetReviewTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


