

#include "huaweicloud/smnglobal/v2/model/DeleteSubscriptionUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




DeleteSubscriptionUserRequest::DeleteSubscriptionUserRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteSubscriptionUserRequest::~DeleteSubscriptionUserRequest() = default;

void DeleteSubscriptionUserRequest::validate()
{
}

web::json::value DeleteSubscriptionUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteSubscriptionUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DeleteSubscriptionUserRequest::getId() const
{
    return id_;
}

void DeleteSubscriptionUserRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteSubscriptionUserRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteSubscriptionUserRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


