

#include "huaweicloud/drs/v5/model/UpdateStartPositionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateStartPositionResponse::UpdateStartPositionResponse()
{
    bodyIsSet_ = false;
}

UpdateStartPositionResponse::~UpdateStartPositionResponse() = default;

void UpdateStartPositionResponse::validate()
{
}

web::json::value UpdateStartPositionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStartPositionResponse::fromJson(const web::json::value& val)
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


Object UpdateStartPositionResponse::getBody() const
{
    return body_;
}

void UpdateStartPositionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStartPositionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStartPositionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


