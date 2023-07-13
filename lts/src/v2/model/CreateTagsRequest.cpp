

#include "huaweicloud/lts/v2/model/CreateTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateTagsRequest::CreateTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTagsRequest::~CreateTagsRequest() = default;

void CreateTagsRequest::validate()
{
}

web::json::value CreateTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTagsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTagsReqbody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateTagsRequest::getResourceType() const
{
    return resourceType_;
}

void CreateTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string CreateTagsRequest::getResourceId() const
{
    return resourceId_;
}

void CreateTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CreateTagsRequest::getContentType() const
{
    return contentType_;
}

void CreateTagsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateTagsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateTagsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateTagsReqbody CreateTagsRequest::getBody() const
{
    return body_;
}

void CreateTagsRequest::setBody(const CreateTagsReqbody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


