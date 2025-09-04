

#include "huaweicloud/cdn/v2/model/DeleteSubscriptionTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DeleteSubscriptionTaskRequest::DeleteSubscriptionTaskRequest()
{
    id_ = 0L;
    idIsSet_ = false;
}

DeleteSubscriptionTaskRequest::~DeleteSubscriptionTaskRequest() = default;

void DeleteSubscriptionTaskRequest::validate()
{
}

web::json::value DeleteSubscriptionTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteSubscriptionTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


int64_t DeleteSubscriptionTaskRequest::getId() const
{
    return id_;
}

void DeleteSubscriptionTaskRequest::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteSubscriptionTaskRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteSubscriptionTaskRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


