

#include "huaweicloud/codehub/v4/model/ListPersonalRecentPushEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListPersonalRecentPushEventsResponse::ListPersonalRecentPushEventsResponse()
{
    bodyIsSet_ = false;
}

ListPersonalRecentPushEventsResponse::~ListPersonalRecentPushEventsResponse() = default;

void ListPersonalRecentPushEventsResponse::validate()
{
}

web::json::value ListPersonalRecentPushEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPersonalRecentPushEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PersonalPushEventDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PersonalPushEventDto>& ListPersonalRecentPushEventsResponse::getBody()
{
    return body_;
}

void ListPersonalRecentPushEventsResponse::setBody(const std::vector<PersonalPushEventDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPersonalRecentPushEventsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPersonalRecentPushEventsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


