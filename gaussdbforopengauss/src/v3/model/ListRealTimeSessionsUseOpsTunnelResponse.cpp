

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsUseOpsTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRealTimeSessionsUseOpsTunnelResponse::ListRealTimeSessionsUseOpsTunnelResponse()
{
    sessionsIsSet_ = false;
}

ListRealTimeSessionsUseOpsTunnelResponse::~ListRealTimeSessionsUseOpsTunnelResponse() = default;

void ListRealTimeSessionsUseOpsTunnelResponse::validate()
{
}

web::json::value ListRealTimeSessionsUseOpsTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }

    return val;
}
bool ListRealTimeSessionsUseOpsTunnelResponse::fromJson(const web::json::value& val)
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


std::vector<RealTimeSessionResult>& ListRealTimeSessionsUseOpsTunnelResponse::getSessions()
{
    return sessions_;
}

void ListRealTimeSessionsUseOpsTunnelResponse::setSessions(const std::vector<RealTimeSessionResult>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool ListRealTimeSessionsUseOpsTunnelResponse::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void ListRealTimeSessionsUseOpsTunnelResponse::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


