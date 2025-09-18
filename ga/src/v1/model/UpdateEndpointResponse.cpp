

#include "huaweicloud/ga/v1/model/UpdateEndpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointResponse::UpdateEndpointResponse()
{
    endpointIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateEndpointResponse::~UpdateEndpointResponse() = default;

void UpdateEndpointResponse::validate()
{
}

web::json::value UpdateEndpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateEndpointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            EndpointDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
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


EndpointDetail UpdateEndpointResponse::getEndpoint() const
{
    return endpoint_;
}

void UpdateEndpointResponse::setEndpoint(const EndpointDetail& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool UpdateEndpointResponse::endpointIsSet() const
{
    return endpointIsSet_;
}

void UpdateEndpointResponse::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string UpdateEndpointResponse::getRequestId() const
{
    return requestId_;
}

void UpdateEndpointResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateEndpointResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateEndpointResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


