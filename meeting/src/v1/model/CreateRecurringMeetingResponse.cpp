

#include "huaweicloud/meeting/v1/model/CreateRecurringMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateRecurringMeetingResponse::CreateRecurringMeetingResponse()
{
    bodyIsSet_ = false;
}

CreateRecurringMeetingResponse::~CreateRecurringMeetingResponse() = default;

void CreateRecurringMeetingResponse::validate()
{
}

web::json::value CreateRecurringMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRecurringMeetingResponse::fromJson(const web::json::value& val)
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


std::vector<ConferenceInfo>& CreateRecurringMeetingResponse::getBody()
{
    return body_;
}

void CreateRecurringMeetingResponse::setBody(const std::vector<ConferenceInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRecurringMeetingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRecurringMeetingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


