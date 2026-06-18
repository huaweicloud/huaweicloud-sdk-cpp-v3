

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryResourcePermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryResourcePermissionsResponse::UpdateRepositoryResourcePermissionsResponse()
{
    status_ = 0;
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

UpdateRepositoryResourcePermissionsResponse::~UpdateRepositoryResourcePermissionsResponse() = default;

void UpdateRepositoryResourcePermissionsResponse::validate()
{
}

web::json::value UpdateRepositoryResourcePermissionsResponse::toJson() const
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
bool UpdateRepositoryResourcePermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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


int32_t UpdateRepositoryResourcePermissionsResponse::getStatus() const
{
    return status_;
}

void UpdateRepositoryResourcePermissionsResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRepositoryResourcePermissionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRepositoryResourcePermissionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateRepositoryResourcePermissionsResponse::getMessage() const
{
    return message_;
}

void UpdateRepositoryResourcePermissionsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UpdateRepositoryResourcePermissionsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UpdateRepositoryResourcePermissionsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


