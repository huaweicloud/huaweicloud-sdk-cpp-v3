

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRealTimeSessionsResponse::ListRealTimeSessionsResponse()
{
    sessionsIsSet_ = false;
}

ListRealTimeSessionsResponse::~ListRealTimeSessionsResponse() = default;

void ListRealTimeSessionsResponse::validate()
{
}

web::json::value ListRealTimeSessionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }

    return val;
}
bool ListRealTimeSessionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessions"));
        if(!fieldValue.is_null())
        {
            std::vector<RealTimeSessionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    return ok;
}


std::vector<RealTimeSessionResult>& ListRealTimeSessionsResponse::getSessions()
{
    return sessions_;
}

void ListRealTimeSessionsResponse::setSessions(const std::vector<RealTimeSessionResult>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool ListRealTimeSessionsResponse::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void ListRealTimeSessionsResponse::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


