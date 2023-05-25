

#include "huaweicloud/vod/v1/model/UpdateAssetCategoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateAssetCategoryRequest::UpdateAssetCategoryRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAssetCategoryRequest::~UpdateAssetCategoryRequest() = default;

void UpdateAssetCategoryRequest::validate()
{
}

web::json::value UpdateAssetCategoryRequest::toJson() const
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

bool UpdateAssetCategoryRequest::fromJson(const web::json::value& val)
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
            UpdateCategoryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetCategoryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateAssetCategoryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateAssetCategoryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateAssetCategoryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UpdateCategoryReq UpdateAssetCategoryRequest::getBody() const
{
    return body_;
}

void UpdateAssetCategoryRequest::setBody(const UpdateCategoryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssetCategoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssetCategoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


