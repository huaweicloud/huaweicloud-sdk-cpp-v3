

#include "huaweicloud/dds/v3/model/DeleteSessionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteSessionRequestBody::DeleteSessionRequestBody()
{
    sessionsIsSet_ = false;
}

DeleteSessionRequestBody::~DeleteSessionRequestBody() = default;

void DeleteSessionRequestBody::validate()
{
}

web::json::value DeleteSessionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }

    return val;
}

bool DeleteSessionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& DeleteSessionRequestBody::getSessions()
{
    return sessions_;
}

void DeleteSessionRequestBody::setSessions(const std::vector<std::string>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool DeleteSessionRequestBody::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void DeleteSessionRequestBody::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


