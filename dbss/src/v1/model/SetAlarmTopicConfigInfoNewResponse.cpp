

#include "huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAlarmTopicConfigInfoNewResponse::SetAlarmTopicConfigInfoNewResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetAlarmTopicConfigInfoNewResponse::~SetAlarmTopicConfigInfoNewResponse() = default;

void SetAlarmTopicConfigInfoNewResponse::validate()
{
}

web::json::value SetAlarmTopicConfigInfoNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAlarmTopicConfigInfoNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetAlarmTopicConfigInfoNewResponse::getStatus() const
{
    return status_;
}

void SetAlarmTopicConfigInfoNewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAlarmTopicConfigInfoNewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAlarmTopicConfigInfoNewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


