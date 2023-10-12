

#include "huaweicloud/cts/v3/model/BatchCreateResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




BatchCreateResourceTagsRequest::BatchCreateResourceTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateResourceTagsRequest::~BatchCreateResourceTagsRequest() = default;

void BatchCreateResourceTagsRequest::validate()
{
}

web::json::value BatchCreateResourceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateResourceTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateResourceTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchCreateResourceTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchCreateResourceTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchCreateResourceTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string BatchCreateResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void BatchCreateResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchCreateResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchCreateResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

BatchCreateResourceTagsRequestBody BatchCreateResourceTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateResourceTagsRequest::setBody(const BatchCreateResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateResourceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateResourceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


