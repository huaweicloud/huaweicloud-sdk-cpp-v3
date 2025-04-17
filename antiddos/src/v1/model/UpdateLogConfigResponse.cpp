

#include "huaweicloud/antiddos/v1/model/UpdateLogConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateLogConfigResponse::UpdateLogConfigResponse()
{
    bodyIsSet_ = false;
}

UpdateLogConfigResponse::~UpdateLogConfigResponse() = default;

void UpdateLogConfigResponse::validate()
{
}

web::json::value UpdateLogConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLogConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object UpdateLogConfigResponse::getBody() const
{
    return body_;
}

void UpdateLogConfigResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogConfigResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogConfigResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


