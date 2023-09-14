

#include "huaweicloud/smn/v2/model/ListApplicationEndpointAttributesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationEndpointAttributesResponse::ListApplicationEndpointAttributesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    attributesIsSet_ = false;
}

ListApplicationEndpointAttributesResponse::~ListApplicationEndpointAttributesResponse() = default;

void ListApplicationEndpointAttributesResponse::validate()
{
}

web::json::value ListApplicationEndpointAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}

bool ListApplicationEndpointAttributesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            ListApplicationEndpointAttributesResponseBody_attributes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}

std::string ListApplicationEndpointAttributesResponse::getRequestId() const
{
    return requestId_;
}

void ListApplicationEndpointAttributesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListApplicationEndpointAttributesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListApplicationEndpointAttributesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ListApplicationEndpointAttributesResponseBody_attributes ListApplicationEndpointAttributesResponse::getAttributes() const
{
    return attributes_;
}

void ListApplicationEndpointAttributesResponse::setAttributes(const ListApplicationEndpointAttributesResponseBody_attributes& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool ListApplicationEndpointAttributesResponse::attributesIsSet() const
{
    return attributesIsSet_;
}

void ListApplicationEndpointAttributesResponse::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


