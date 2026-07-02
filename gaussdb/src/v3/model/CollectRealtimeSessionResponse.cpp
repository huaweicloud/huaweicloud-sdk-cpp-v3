

#include "huaweicloud/gaussdb/v3/model/CollectRealtimeSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CollectRealtimeSessionResponse::CollectRealtimeSessionResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

CollectRealtimeSessionResponse::~CollectRealtimeSessionResponse() = default;

void CollectRealtimeSessionResponse::validate()
{
}

web::json::value CollectRealtimeSessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool CollectRealtimeSessionResponse::fromJson(const web::json::value& val)
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


std::string CollectRealtimeSessionResponse::getRequestId() const
{
    return requestId_;
}

void CollectRealtimeSessionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CollectRealtimeSessionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CollectRealtimeSessionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


