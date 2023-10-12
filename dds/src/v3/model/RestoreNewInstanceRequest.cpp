

#include "huaweicloud/dds/v3/model/RestoreNewInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreNewInstanceRequest::RestoreNewInstanceRequest()
{
    bodyIsSet_ = false;
}

RestoreNewInstanceRequest::~RestoreNewInstanceRequest() = default;

void RestoreNewInstanceRequest::validate()
{
}

web::json::value RestoreNewInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RestoreNewInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestoreNewInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RestoreNewInstanceRequestBody RestoreNewInstanceRequest::getBody() const
{
    return body_;
}

void RestoreNewInstanceRequest::setBody(const RestoreNewInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreNewInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreNewInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


