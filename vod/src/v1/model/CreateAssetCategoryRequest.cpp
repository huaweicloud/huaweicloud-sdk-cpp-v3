

#include "huaweicloud/vod/v1/model/CreateAssetCategoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetCategoryRequest::CreateAssetCategoryRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetCategoryRequest::~CreateAssetCategoryRequest() = default;

void CreateAssetCategoryRequest::validate()
{
}

web::json::value CreateAssetCategoryRequest::toJson() const
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

bool CreateAssetCategoryRequest::fromJson(const web::json::value& val)
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
            CreateCategoryReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateAssetCategoryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAssetCategoryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAssetCategoryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAssetCategoryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateCategoryReq CreateAssetCategoryRequest::getBody() const
{
    return body_;
}

void CreateAssetCategoryRequest::setBody(const CreateCategoryReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetCategoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetCategoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


