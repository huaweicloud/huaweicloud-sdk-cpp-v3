

#include "huaweicloud/functiongraph/v2/model/AsyncInvokeFunctionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




AsyncInvokeFunctionResponse::AsyncInvokeFunctionResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

AsyncInvokeFunctionResponse::~AsyncInvokeFunctionResponse() = default;

void AsyncInvokeFunctionResponse::validate()
{
}

web::json::value AsyncInvokeFunctionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool AsyncInvokeFunctionResponse::fromJson(const web::json::value& val)
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


std::string AsyncInvokeFunctionResponse::getRequestId() const
{
    return requestId_;
}

void AsyncInvokeFunctionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AsyncInvokeFunctionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AsyncInvokeFunctionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


