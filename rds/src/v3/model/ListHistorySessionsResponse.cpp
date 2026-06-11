

#include "huaweicloud/rds/v3/model/ListHistorySessionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistorySessionsResponse::ListHistorySessionsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    sessionsIsSet_ = false;
}

ListHistorySessionsResponse::~ListHistorySessionsResponse() = default;

void ListHistorySessionsResponse::validate()
{
}

web::json::value ListHistorySessionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }

    return val;
}
bool ListHistorySessionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessions"));
        if(!fieldValue.is_null())
        {
            std::vector<Session> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    return ok;
}


int32_t ListHistorySessionsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListHistorySessionsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListHistorySessionsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListHistorySessionsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Session>& ListHistorySessionsResponse::getSessions()
{
    return sessions_;
}

void ListHistorySessionsResponse::setSessions(const std::vector<Session>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool ListHistorySessionsResponse::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void ListHistorySessionsResponse::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


