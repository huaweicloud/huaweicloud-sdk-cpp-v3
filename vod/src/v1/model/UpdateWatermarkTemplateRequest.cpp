

#include "huaweicloud/vod/v1/model/UpdateWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateWatermarkTemplateRequest::UpdateWatermarkTemplateRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWatermarkTemplateRequest::~UpdateWatermarkTemplateRequest() = default;

void UpdateWatermarkTemplateRequest::validate()
{
}

web::json::value UpdateWatermarkTemplateRequest::toJson() const
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
bool UpdateWatermarkTemplateRequest::fromJson(const web::json::value& val)
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
            UpdateWatermarkTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWatermarkTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateWatermarkTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateWatermarkTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateWatermarkTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UpdateWatermarkTemplateReq UpdateWatermarkTemplateRequest::getBody() const
{
    return body_;
}

void UpdateWatermarkTemplateRequest::setBody(const UpdateWatermarkTemplateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWatermarkTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWatermarkTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


