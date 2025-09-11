

#include "huaweicloud/smn/v2/model/DeleteSubscriptionsByTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteSubscriptionsByTopicResponse::DeleteSubscriptionsByTopicResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteSubscriptionsByTopicResponse::~DeleteSubscriptionsByTopicResponse() = default;

void DeleteSubscriptionsByTopicResponse::validate()
{
}

web::json::value DeleteSubscriptionsByTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DeleteSubscriptionsByTopicResponse::fromJson(const web::json::value& val)
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


std::string DeleteSubscriptionsByTopicResponse::getRequestId() const
{
    return requestId_;
}

void DeleteSubscriptionsByTopicResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteSubscriptionsByTopicResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteSubscriptionsByTopicResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


