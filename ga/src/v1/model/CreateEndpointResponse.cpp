

#include "huaweicloud/ga/v1/model/CreateEndpointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointResponse::CreateEndpointResponse()
{
    endpointIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreateEndpointResponse::~CreateEndpointResponse() = default;

void CreateEndpointResponse::validate()
{
}

web::json::value CreateEndpointResponse::toJson() const
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
bool CreateEndpointResponse::fromJson(const web::json::value& val)
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


EndpointDetail CreateEndpointResponse::getEndpoint() const
{
    return endpoint_;
}

void CreateEndpointResponse::setEndpoint(const EndpointDetail& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateEndpointResponse::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateEndpointResponse::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string CreateEndpointResponse::getRequestId() const
{
    return requestId_;
}

void CreateEndpointResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateEndpointResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateEndpointResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


