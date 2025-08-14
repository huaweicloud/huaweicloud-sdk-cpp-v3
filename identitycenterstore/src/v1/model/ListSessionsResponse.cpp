

#include "huaweicloud/identitycenterstore/v1/model/ListSessionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListSessionsResponse::ListSessionsResponse()
{
    sessionListIsSet_ = false;
}

ListSessionsResponse::~ListSessionsResponse() = default;

void ListSessionsResponse::validate()
{
}

web::json::value ListSessionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionListIsSet_) {
        val[utility::conversions::to_string_t("session_list")] = ModelBase::toJson(sessionList_);
    }

    return val;
}
bool ListSessionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("session_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserSessionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionList(refVal);
        }
    }
    return ok;
}


std::vector<UserSessionDto>& ListSessionsResponse::getSessionList()
{
    return sessionList_;
}

void ListSessionsResponse::setSessionList(const std::vector<UserSessionDto>& value)
{
    sessionList_ = value;
    sessionListIsSet_ = true;
}

bool ListSessionsResponse::sessionListIsSet() const
{
    return sessionListIsSet_;
}

void ListSessionsResponse::unsetsessionList()
{
    sessionListIsSet_ = false;
}

}
}
}
}
}


