

#include "huaweicloud/codehub/v4/model/ResolveMergeRequestConflictsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ResolveMergeRequestConflictsResponse::ResolveMergeRequestConflictsResponse()
{
    message_ = "";
    messageIsSet_ = false;
}

ResolveMergeRequestConflictsResponse::~ResolveMergeRequestConflictsResponse() = default;

void ResolveMergeRequestConflictsResponse::validate()
{
}

web::json::value ResolveMergeRequestConflictsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ResolveMergeRequestConflictsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ResolveMergeRequestConflictsResponse::getMessage() const
{
    return message_;
}

void ResolveMergeRequestConflictsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ResolveMergeRequestConflictsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ResolveMergeRequestConflictsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


