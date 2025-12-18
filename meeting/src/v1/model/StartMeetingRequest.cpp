

#include "huaweicloud/meeting/v1/model/StartMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StartMeetingRequest::StartMeetingRequest()
{
    bodyIsSet_ = false;
}

StartMeetingRequest::~StartMeetingRequest() = default;

void StartMeetingRequest::validate()
{
}

web::json::value StartMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartMeetingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StartRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


StartRequest StartMeetingRequest::getBody() const
{
    return body_;
}

void StartMeetingRequest::setBody(const StartRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartMeetingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartMeetingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


