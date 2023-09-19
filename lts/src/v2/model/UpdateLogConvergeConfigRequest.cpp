

#include "huaweicloud/lts/v2/model/UpdateLogConvergeConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogConvergeConfigRequest::UpdateLogConvergeConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogConvergeConfigRequest::~UpdateLogConvergeConfigRequest() = default;

void UpdateLogConvergeConfigRequest::validate()
{
}

web::json::value UpdateLogConvergeConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateLogConvergeConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatelogConvergeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateLogConvergeConfigRequest::getContentType() const
{
    return contentType_;
}

void UpdateLogConvergeConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateLogConvergeConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateLogConvergeConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdatelogConvergeConfig UpdateLogConvergeConfigRequest::getBody() const
{
    return body_;
}

void UpdateLogConvergeConfigRequest::setBody(const UpdatelogConvergeConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogConvergeConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogConvergeConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


