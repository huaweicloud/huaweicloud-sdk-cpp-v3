

#include "huaweicloud/rgc/v1/model/EnableControlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnableControlRequest::EnableControlRequest()
{
    bodyIsSet_ = false;
}

EnableControlRequest::~EnableControlRequest() = default;

void EnableControlRequest::validate()
{
}

web::json::value EnableControlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnableControlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ControlOperateReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ControlOperateReqBody EnableControlRequest::getBody() const
{
    return body_;
}

void EnableControlRequest::setBody(const ControlOperateReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableControlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableControlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


