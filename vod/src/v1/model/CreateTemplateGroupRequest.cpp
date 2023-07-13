

#include "huaweicloud/vod/v1/model/CreateTemplateGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTemplateGroupRequest::CreateTemplateGroupRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTemplateGroupRequest::~CreateTemplateGroupRequest() = default;

void CreateTemplateGroupRequest::validate()
{
}

web::json::value CreateTemplateGroupRequest::toJson() const
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

bool CreateTemplateGroupRequest::fromJson(const web::json::value& val)
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
            TransTemplateGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateTemplateGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTemplateGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTemplateGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTemplateGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

TransTemplateGroup CreateTemplateGroupRequest::getBody() const
{
    return body_;
}

void CreateTemplateGroupRequest::setBody(const TransTemplateGroup& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTemplateGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTemplateGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


