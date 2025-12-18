

#include "huaweicloud/meeting/v1/model/UpdateMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateMeetingResponse::UpdateMeetingResponse()
{
    bodyIsSet_ = false;
}

UpdateMeetingResponse::~UpdateMeetingResponse() = default;

void UpdateMeetingResponse::validate()
{
}

web::json::value UpdateMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMeetingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ConferenceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ConferenceInfo>& UpdateMeetingResponse::getBody()
{
    return body_;
}

void UpdateMeetingResponse::setBody(const std::vector<ConferenceInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMeetingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMeetingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


