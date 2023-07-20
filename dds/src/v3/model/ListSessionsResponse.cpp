

#include "huaweicloud/dds/v3/model/ListSessionsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListSessionsResponse::ListSessionsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    sessionsIsSet_ = false;
}

ListSessionsResponse::~ListSessionsResponse() = default;

void ListSessionsResponse::validate()
{
}

web::json::value ListSessionsResponse::toJson() const
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

bool ListSessionsResponse::fromJson(const web::json::value& val)
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
            std::vector<QuerySessionResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    return ok;
}

int32_t ListSessionsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSessionsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSessionsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSessionsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<QuerySessionResponse>& ListSessionsResponse::getSessions()
{
    return sessions_;
}

void ListSessionsResponse::setSessions(const std::vector<QuerySessionResponse>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool ListSessionsResponse::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void ListSessionsResponse::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


