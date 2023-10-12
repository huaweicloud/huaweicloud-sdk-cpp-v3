

#include "huaweicloud/smn/v2/model/BatchCreateOrDeleteResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchCreateOrDeleteResourceTagsRequest::BatchCreateOrDeleteResourceTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateOrDeleteResourceTagsRequest::~BatchCreateOrDeleteResourceTagsRequest() = default;

void BatchCreateOrDeleteResourceTagsRequest::validate()
{
}

web::json::value BatchCreateOrDeleteResourceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateOrDeleteResourceTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateOrDeleteResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateOrDeleteResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void BatchCreateOrDeleteResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchCreateOrDeleteResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchCreateOrDeleteResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BatchCreateOrDeleteResourceTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchCreateOrDeleteResourceTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchCreateOrDeleteResourceTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchCreateOrDeleteResourceTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchCreateOrDeleteResourceTagsRequestBody BatchCreateOrDeleteResourceTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateOrDeleteResourceTagsRequest::setBody(const BatchCreateOrDeleteResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateOrDeleteResourceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateOrDeleteResourceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


