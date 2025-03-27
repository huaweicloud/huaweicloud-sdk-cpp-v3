

#include "huaweicloud/vod/v1/model/UpdateStorageModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateStorageModeRequest::UpdateStorageModeRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStorageModeRequest::~UpdateStorageModeRequest() = default;

void UpdateStorageModeRequest::validate()
{
}

web::json::value UpdateStorageModeRequest::toJson() const
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
bool UpdateStorageModeRequest::fromJson(const web::json::value& val)
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
            UpdateStorageModeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStorageModeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateStorageModeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateStorageModeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateStorageModeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UpdateStorageModeReq UpdateStorageModeRequest::getBody() const
{
    return body_;
}

void UpdateStorageModeRequest::setBody(const UpdateStorageModeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStorageModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStorageModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


