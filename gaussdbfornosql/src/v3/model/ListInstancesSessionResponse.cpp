

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesSessionResponse::ListInstancesSessionResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    sessionsIsSet_ = false;
}

ListInstancesSessionResponse::~ListInstancesSessionResponse() = default;

void ListInstancesSessionResponse::validate()
{
}

web::json::value ListInstancesSessionResponse::toJson() const
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
bool ListInstancesSessionResponse::fromJson(const web::json::value& val)
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
            std::vector<ListInstancesSessionRespondBody_sessions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    return ok;
}


int32_t ListInstancesSessionResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesSessionResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesSessionResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesSessionResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ListInstancesSessionRespondBody_sessions>& ListInstancesSessionResponse::getSessions()
{
    return sessions_;
}

void ListInstancesSessionResponse::setSessions(const std::vector<ListInstancesSessionRespondBody_sessions>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool ListInstancesSessionResponse::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void ListInstancesSessionResponse::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


