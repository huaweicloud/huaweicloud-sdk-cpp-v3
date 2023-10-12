

#include "huaweicloud/cts/v3/model/BatchDeleteResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




BatchDeleteResourceTagsRequest::BatchDeleteResourceTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteResourceTagsRequest::~BatchDeleteResourceTagsRequest() = default;

void BatchDeleteResourceTagsRequest::validate()
{
}

web::json::value BatchDeleteResourceTagsRequest::toJson() const
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
bool BatchDeleteResourceTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteResourceTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchDeleteResourceTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchDeleteResourceTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchDeleteResourceTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string BatchDeleteResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void BatchDeleteResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BatchDeleteResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BatchDeleteResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

BatchDeleteResourceTagsRequestBody BatchDeleteResourceTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteResourceTagsRequest::setBody(const BatchDeleteResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteResourceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteResourceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


