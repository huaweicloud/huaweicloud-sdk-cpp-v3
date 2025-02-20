

#include "huaweicloud/smnglobal/v2/model/DeleteSubscriptionUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




DeleteSubscriptionUserResponse::DeleteSubscriptionUserResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteSubscriptionUserResponse::~DeleteSubscriptionUserResponse() = default;

void DeleteSubscriptionUserResponse::validate()
{
}

web::json::value DeleteSubscriptionUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DeleteSubscriptionUserResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteSubscriptionUserResponse::getRequestId() const
{
    return requestId_;
}

void DeleteSubscriptionUserResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteSubscriptionUserResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteSubscriptionUserResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


