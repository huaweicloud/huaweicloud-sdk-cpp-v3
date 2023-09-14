

#include "huaweicloud/smn/v2/model/ListApplicationAttributesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationAttributesResponse::ListApplicationAttributesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    attributesIsSet_ = false;
}

ListApplicationAttributesResponse::~ListApplicationAttributesResponse() = default;

void ListApplicationAttributesResponse::validate()
{
}

web::json::value ListApplicationAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}

bool ListApplicationAttributesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            ListApplicationAttributesResponseBody_attributes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}

std::string ListApplicationAttributesResponse::getRequestId() const
{
    return requestId_;
}

void ListApplicationAttributesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListApplicationAttributesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListApplicationAttributesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListApplicationAttributesResponse::getApplicationId() const
{
    return applicationId_;
}

void ListApplicationAttributesResponse::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListApplicationAttributesResponse::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListApplicationAttributesResponse::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

ListApplicationAttributesResponseBody_attributes ListApplicationAttributesResponse::getAttributes() const
{
    return attributes_;
}

void ListApplicationAttributesResponse::setAttributes(const ListApplicationAttributesResponseBody_attributes& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool ListApplicationAttributesResponse::attributesIsSet() const
{
    return attributesIsSet_;
}

void ListApplicationAttributesResponse::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


