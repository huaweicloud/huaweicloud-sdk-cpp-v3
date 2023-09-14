

#include "huaweicloud/smn/v2/model/CreateApplicationEndpointResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateApplicationEndpointResponse::CreateApplicationEndpointResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    endpointUrn_ = "";
    endpointUrnIsSet_ = false;
}

CreateApplicationEndpointResponse::~CreateApplicationEndpointResponse() = default;

void CreateApplicationEndpointResponse::validate()
{
}

web::json::value CreateApplicationEndpointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(endpointUrnIsSet_) {
        val[utility::conversions::to_string_t("endpoint_urn")] = ModelBase::toJson(endpointUrn_);
    }

    return val;
}

bool CreateApplicationEndpointResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("endpoint_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUrn(refVal);
        }
    }
    return ok;
}

std::string CreateApplicationEndpointResponse::getRequestId() const
{
    return requestId_;
}

void CreateApplicationEndpointResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateApplicationEndpointResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateApplicationEndpointResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateApplicationEndpointResponse::getEndpointUrn() const
{
    return endpointUrn_;
}

void CreateApplicationEndpointResponse::setEndpointUrn(const std::string& value)
{
    endpointUrn_ = value;
    endpointUrnIsSet_ = true;
}

bool CreateApplicationEndpointResponse::endpointUrnIsSet() const
{
    return endpointUrnIsSet_;
}

void CreateApplicationEndpointResponse::unsetendpointUrn()
{
    endpointUrnIsSet_ = false;
}

}
}
}
}
}


