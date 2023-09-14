

#include "huaweicloud/smn/v2/model/DeleteApplicationEndpointResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteApplicationEndpointResponse::DeleteApplicationEndpointResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteApplicationEndpointResponse::~DeleteApplicationEndpointResponse() = default;

void DeleteApplicationEndpointResponse::validate()
{
}

web::json::value DeleteApplicationEndpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DeleteApplicationEndpointResponse::fromJson(const web::json::value& val)
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

std::string DeleteApplicationEndpointResponse::getRequestId() const
{
    return requestId_;
}

void DeleteApplicationEndpointResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteApplicationEndpointResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteApplicationEndpointResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


