

#include "huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAlarmTopicConfigInfoResponse::SetAlarmTopicConfigInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetAlarmTopicConfigInfoResponse::~SetAlarmTopicConfigInfoResponse() = default;

void SetAlarmTopicConfigInfoResponse::validate()
{
}

web::json::value SetAlarmTopicConfigInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAlarmTopicConfigInfoResponse::fromJson(const web::json::value& val)
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


std::string SetAlarmTopicConfigInfoResponse::getStatus() const
{
    return status_;
}

void SetAlarmTopicConfigInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAlarmTopicConfigInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAlarmTopicConfigInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


