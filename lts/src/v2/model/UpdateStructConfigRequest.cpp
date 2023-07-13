

#include "huaweicloud/lts/v2/model/UpdateStructConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateStructConfigRequest::UpdateStructConfigRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStructConfigRequest::~UpdateStructConfigRequest() = default;

void UpdateStructConfigRequest::validate()
{
}

web::json::value UpdateStructConfigRequest::toJson() const
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

bool UpdateStructConfigRequest::fromJson(const web::json::value& val)
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
            StructConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateStructConfigRequest::getContentType() const
{
    return contentType_;
}

void UpdateStructConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateStructConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateStructConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

StructConfig UpdateStructConfigRequest::getBody() const
{
    return body_;
}

void UpdateStructConfigRequest::setBody(const StructConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStructConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStructConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


