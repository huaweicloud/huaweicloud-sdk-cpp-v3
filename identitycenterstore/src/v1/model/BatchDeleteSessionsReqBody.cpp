

#include "huaweicloud/identitycenterstore/v1/model/BatchDeleteSessionsReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




BatchDeleteSessionsReqBody::BatchDeleteSessionsReqBody()
{
    sessionIdsIsSet_ = false;
}

BatchDeleteSessionsReqBody::~BatchDeleteSessionsReqBody() = default;

void BatchDeleteSessionsReqBody::validate()
{
}

web::json::value BatchDeleteSessionsReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionIdsIsSet_) {
        val[utility::conversions::to_string_t("session_ids")] = ModelBase::toJson(sessionIds_);
    }

    return val;
}
bool BatchDeleteSessionsReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("session_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteSessionsReqBody::getSessionIds()
{
    return sessionIds_;
}

void BatchDeleteSessionsReqBody::setSessionIds(const std::vector<std::string>& value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool BatchDeleteSessionsReqBody::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void BatchDeleteSessionsReqBody::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

}
}
}
}
}


