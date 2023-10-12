

#include "huaweicloud/vod/v1/model/UpdateTemplateGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateTemplateGroupRequest::UpdateTemplateGroupRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTemplateGroupRequest::~UpdateTemplateGroupRequest() = default;

void UpdateTemplateGroupRequest::validate()
{
}

web::json::value UpdateTemplateGroupRequest::toJson() const
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
bool UpdateTemplateGroupRequest::fromJson(const web::json::value& val)
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
            ModifyTransTemplateGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTemplateGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateTemplateGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateTemplateGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateTemplateGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ModifyTransTemplateGroup UpdateTemplateGroupRequest::getBody() const
{
    return body_;
}

void UpdateTemplateGroupRequest::setBody(const ModifyTransTemplateGroup& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTemplateGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTemplateGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


