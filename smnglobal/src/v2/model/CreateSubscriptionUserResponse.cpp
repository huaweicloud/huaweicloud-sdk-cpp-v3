

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserResponse::CreateSubscriptionUserResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CreateSubscriptionUserResponse::~CreateSubscriptionUserResponse() = default;

void CreateSubscriptionUserResponse::validate()
{
}

web::json::value CreateSubscriptionUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateSubscriptionUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
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


std::string CreateSubscriptionUserResponse::getRequestId() const
{
    return requestId_;
}

void CreateSubscriptionUserResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateSubscriptionUserResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateSubscriptionUserResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateSubscriptionUserResponse::getId() const
{
    return id_;
}

void CreateSubscriptionUserResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateSubscriptionUserResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateSubscriptionUserResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


