

#include "huaweicloud/vod/v1/model/CreateAssetByFileUploadRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetByFileUploadRequest::CreateAssetByFileUploadRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetByFileUploadRequest::~CreateAssetByFileUploadRequest() = default;

void CreateAssetByFileUploadRequest::validate()
{
}

web::json::value CreateAssetByFileUploadRequest::toJson() const
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

bool CreateAssetByFileUploadRequest::fromJson(const web::json::value& val)
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
            CreateAssetByFileUploadReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateAssetByFileUploadRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAssetByFileUploadRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAssetByFileUploadRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAssetByFileUploadRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateAssetByFileUploadReq CreateAssetByFileUploadRequest::getBody() const
{
    return body_;
}

void CreateAssetByFileUploadRequest::setBody(const CreateAssetByFileUploadReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetByFileUploadRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetByFileUploadRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


