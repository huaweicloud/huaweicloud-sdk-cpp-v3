

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsResponse::BatchDeleteSubscriptionsResponse()
{
    subscriptionsResultIsSet_ = false;
}

BatchDeleteSubscriptionsResponse::~BatchDeleteSubscriptionsResponse() = default;

void BatchDeleteSubscriptionsResponse::validate()
{
}

web::json::value BatchDeleteSubscriptionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionsResultIsSet_) {
        val[utility::conversions::to_string_t("subscriptions_result")] = ModelBase::toJson(subscriptionsResult_);
    }

    return val;
}
bool BatchDeleteSubscriptionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscriptions_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions_result"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteSubscriptionsResponseItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionsResult(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteSubscriptionsResponseItemInfo>& BatchDeleteSubscriptionsResponse::getSubscriptionsResult()
{
    return subscriptionsResult_;
}

void BatchDeleteSubscriptionsResponse::setSubscriptionsResult(const std::vector<BatchDeleteSubscriptionsResponseItemInfo>& value)
{
    subscriptionsResult_ = value;
    subscriptionsResultIsSet_ = true;
}

bool BatchDeleteSubscriptionsResponse::subscriptionsResultIsSet() const
{
    return subscriptionsResultIsSet_;
}

void BatchDeleteSubscriptionsResponse::unsetsubscriptionsResult()
{
    subscriptionsResultIsSet_ = false;
}

}
}
}
}
}


