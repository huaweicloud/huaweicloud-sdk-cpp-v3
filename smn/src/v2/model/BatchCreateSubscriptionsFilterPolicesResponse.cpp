

#include "huaweicloud/smn/v2/model/BatchCreateSubscriptionsFilterPolicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchCreateSubscriptionsFilterPolicesResponse::BatchCreateSubscriptionsFilterPolicesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    batchResultIsSet_ = false;
}

BatchCreateSubscriptionsFilterPolicesResponse::~BatchCreateSubscriptionsFilterPolicesResponse() = default;

void BatchCreateSubscriptionsFilterPolicesResponse::validate()
{
}

web::json::value BatchCreateSubscriptionsFilterPolicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(batchResultIsSet_) {
        val[utility::conversions::to_string_t("batch_result")] = ModelBase::toJson(batchResult_);
    }

    return val;
}
bool BatchCreateSubscriptionsFilterPolicesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("batch_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_result"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchResult(refVal);
        }
    }
    return ok;
}


std::string BatchCreateSubscriptionsFilterPolicesResponse::getRequestId() const
{
    return requestId_;
}

void BatchCreateSubscriptionsFilterPolicesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchCreateSubscriptionsFilterPolicesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchCreateSubscriptionsFilterPolicesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<BatchResult>& BatchCreateSubscriptionsFilterPolicesResponse::getBatchResult()
{
    return batchResult_;
}

void BatchCreateSubscriptionsFilterPolicesResponse::setBatchResult(const std::vector<BatchResult>& value)
{
    batchResult_ = value;
    batchResultIsSet_ = true;
}

bool BatchCreateSubscriptionsFilterPolicesResponse::batchResultIsSet() const
{
    return batchResultIsSet_;
}

void BatchCreateSubscriptionsFilterPolicesResponse::unsetbatchResult()
{
    batchResultIsSet_ = false;
}

}
}
}
}
}


