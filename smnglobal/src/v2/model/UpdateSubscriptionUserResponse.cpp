

#include "huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




UpdateSubscriptionUserResponse::UpdateSubscriptionUserResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateSubscriptionUserResponse::~UpdateSubscriptionUserResponse() = default;

void UpdateSubscriptionUserResponse::validate()
{
}

web::json::value UpdateSubscriptionUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateSubscriptionUserResponse::fromJson(const web::json::value& val)
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


std::string UpdateSubscriptionUserResponse::getRequestId() const
{
    return requestId_;
}

void UpdateSubscriptionUserResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateSubscriptionUserResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateSubscriptionUserResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


