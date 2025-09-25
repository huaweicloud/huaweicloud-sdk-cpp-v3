

#include "huaweicloud/codehub/v4/model/ListMergeRequestParticipantsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestParticipantsResponse::ListMergeRequestParticipantsResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestParticipantsResponse::~ListMergeRequestParticipantsResponse() = default;

void ListMergeRequestParticipantsResponse::validate()
{
}

web::json::value ListMergeRequestParticipantsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestParticipantsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UserBasicDto>& ListMergeRequestParticipantsResponse::getBody()
{
    return body_;
}

void ListMergeRequestParticipantsResponse::setBody(const std::vector<UserBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestParticipantsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestParticipantsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


