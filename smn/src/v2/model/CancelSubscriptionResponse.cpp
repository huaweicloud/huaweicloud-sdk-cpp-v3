

#include "huaweicloud/smn/v2/model/CancelSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CancelSubscriptionResponse::CancelSubscriptionResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

CancelSubscriptionResponse::~CancelSubscriptionResponse() = default;

void CancelSubscriptionResponse::validate()
{
}

web::json::value CancelSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool CancelSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string CancelSubscriptionResponse::getRequestId() const
{
    return requestId_;
}

void CancelSubscriptionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CancelSubscriptionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CancelSubscriptionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


