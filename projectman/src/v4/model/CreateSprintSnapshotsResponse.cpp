

#include "huaweicloud/projectman/v4/model/CreateSprintSnapshotsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateSprintSnapshotsResponse::CreateSprintSnapshotsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CreateSprintSnapshotsResponse::~CreateSprintSnapshotsResponse() = default;

void CreateSprintSnapshotsResponse::validate()
{
}

web::json::value CreateSprintSnapshotsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool CreateSprintSnapshotsResponse::fromJson(const web::json::value& val)
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


std::string CreateSprintSnapshotsResponse::getStatus() const
{
    return status_;
}

void CreateSprintSnapshotsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateSprintSnapshotsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateSprintSnapshotsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateSprintSnapshotsResponse::getMessage() const
{
    return message_;
}

void CreateSprintSnapshotsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateSprintSnapshotsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateSprintSnapshotsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


