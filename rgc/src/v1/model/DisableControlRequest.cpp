

#include "huaweicloud/rgc/v1/model/DisableControlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DisableControlRequest::DisableControlRequest()
{
    bodyIsSet_ = false;
}

DisableControlRequest::~DisableControlRequest() = default;

void DisableControlRequest::validate()
{
}

web::json::value DisableControlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisableControlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DisableControlOperateReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DisableControlOperateReqBody DisableControlRequest::getBody() const
{
    return body_;
}

void DisableControlRequest::setBody(const DisableControlOperateReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableControlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableControlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


