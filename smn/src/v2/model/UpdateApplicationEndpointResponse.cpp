

#include "huaweicloud/smn/v2/model/UpdateApplicationEndpointResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateApplicationEndpointResponse::UpdateApplicationEndpointResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateApplicationEndpointResponse::~UpdateApplicationEndpointResponse() = default;

void UpdateApplicationEndpointResponse::validate()
{
}

web::json::value UpdateApplicationEndpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool UpdateApplicationEndpointResponse::fromJson(const web::json::value& val)
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

std::string UpdateApplicationEndpointResponse::getRequestId() const
{
    return requestId_;
}

void UpdateApplicationEndpointResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateApplicationEndpointResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateApplicationEndpointResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


