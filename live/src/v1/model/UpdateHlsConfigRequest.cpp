

#include "huaweicloud/live/v1/model/UpdateHlsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateHlsConfigRequest::UpdateHlsConfigRequest()
{
    bodyIsSet_ = false;
}

UpdateHlsConfigRequest::~UpdateHlsConfigRequest() = default;

void UpdateHlsConfigRequest::validate()
{
}

web::json::value UpdateHlsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHlsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyHlsConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyHlsConfig UpdateHlsConfigRequest::getBody() const
{
    return body_;
}

void UpdateHlsConfigRequest::setBody(const ModifyHlsConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHlsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHlsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


