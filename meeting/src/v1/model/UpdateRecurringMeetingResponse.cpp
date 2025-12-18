

#include "huaweicloud/meeting/v1/model/UpdateRecurringMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateRecurringMeetingResponse::UpdateRecurringMeetingResponse()
{
    bodyIsSet_ = false;
}

UpdateRecurringMeetingResponse::~UpdateRecurringMeetingResponse() = default;

void UpdateRecurringMeetingResponse::validate()
{
}

web::json::value UpdateRecurringMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRecurringMeetingResponse::fromJson(const web::json::value& val)
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


std::vector<ConferenceInfo>& UpdateRecurringMeetingResponse::getBody()
{
    return body_;
}

void UpdateRecurringMeetingResponse::setBody(const std::vector<ConferenceInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecurringMeetingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecurringMeetingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


