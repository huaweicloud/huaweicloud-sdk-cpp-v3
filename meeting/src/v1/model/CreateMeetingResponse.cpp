

#include "huaweicloud/meeting/v1/model/CreateMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateMeetingResponse::CreateMeetingResponse()
{
    bodyIsSet_ = false;
}

CreateMeetingResponse::~CreateMeetingResponse() = default;

void CreateMeetingResponse::validate()
{
}

web::json::value CreateMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMeetingResponse::fromJson(const web::json::value& val)
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


std::vector<ConferenceInfo>& CreateMeetingResponse::getBody()
{
    return body_;
}

void CreateMeetingResponse::setBody(const std::vector<ConferenceInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMeetingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMeetingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


