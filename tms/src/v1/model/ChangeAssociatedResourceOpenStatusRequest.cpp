

#include "huaweicloud/tms/v1/model/ChangeAssociatedResourceOpenStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ChangeAssociatedResourceOpenStatusRequest::ChangeAssociatedResourceOpenStatusRequest()
{
    bodyIsSet_ = false;
}

ChangeAssociatedResourceOpenStatusRequest::~ChangeAssociatedResourceOpenStatusRequest() = default;

void ChangeAssociatedResourceOpenStatusRequest::validate()
{
}

web::json::value ChangeAssociatedResourceOpenStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeAssociatedResourceOpenStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqAssociatedResourceOpenStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ReqAssociatedResourceOpenStatus ChangeAssociatedResourceOpenStatusRequest::getBody() const
{
    return body_;
}

void ChangeAssociatedResourceOpenStatusRequest::setBody(const ReqAssociatedResourceOpenStatus& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeAssociatedResourceOpenStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeAssociatedResourceOpenStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


