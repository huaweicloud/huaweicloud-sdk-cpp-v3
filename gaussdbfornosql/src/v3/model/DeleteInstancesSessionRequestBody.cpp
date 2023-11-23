

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteInstancesSessionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteInstancesSessionRequestBody::DeleteInstancesSessionRequestBody()
{
    isAll_ = false;
    isAllIsSet_ = false;
    sessionIdsIsSet_ = false;
}

DeleteInstancesSessionRequestBody::~DeleteInstancesSessionRequestBody() = default;

void DeleteInstancesSessionRequestBody::validate()
{
}

web::json::value DeleteInstancesSessionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAllIsSet_) {
        val[utility::conversions::to_string_t("is_all")] = ModelBase::toJson(isAll_);
    }
    if(sessionIdsIsSet_) {
        val[utility::conversions::to_string_t("session_ids")] = ModelBase::toJson(sessionIds_);
    }

    return val;
}
bool DeleteInstancesSessionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_all"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAll(refVal);
        }
    }
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


bool DeleteInstancesSessionRequestBody::isIsAll() const
{
    return isAll_;
}

void DeleteInstancesSessionRequestBody::setIsAll(bool value)
{
    isAll_ = value;
    isAllIsSet_ = true;
}

bool DeleteInstancesSessionRequestBody::isAllIsSet() const
{
    return isAllIsSet_;
}

void DeleteInstancesSessionRequestBody::unsetisAll()
{
    isAllIsSet_ = false;
}

std::vector<std::string>& DeleteInstancesSessionRequestBody::getSessionIds()
{
    return sessionIds_;
}

void DeleteInstancesSessionRequestBody::setSessionIds(const std::vector<std::string>& value)
{
    sessionIds_ = value;
    sessionIdsIsSet_ = true;
}

bool DeleteInstancesSessionRequestBody::sessionIdsIsSet() const
{
    return sessionIdsIsSet_;
}

void DeleteInstancesSessionRequestBody::unsetsessionIds()
{
    sessionIdsIsSet_ = false;
}

}
}
}
}
}


