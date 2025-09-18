

#include "huaweicloud/ga/v1/model/ShowEndpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowEndpointResponse::ShowEndpointResponse()
{
    endpointIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowEndpointResponse::~ShowEndpointResponse() = default;

void ShowEndpointResponse::validate()
{
}

web::json::value ShowEndpointResponse::toJson() const
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
bool ShowEndpointResponse::fromJson(const web::json::value& val)
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


EndpointDetail ShowEndpointResponse::getEndpoint() const
{
    return endpoint_;
}

void ShowEndpointResponse::setEndpoint(const EndpointDetail& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ShowEndpointResponse::endpointIsSet() const
{
    return endpointIsSet_;
}

void ShowEndpointResponse::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string ShowEndpointResponse::getRequestId() const
{
    return requestId_;
}

void ShowEndpointResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowEndpointResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowEndpointResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


