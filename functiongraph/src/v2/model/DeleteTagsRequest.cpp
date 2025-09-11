

#include "huaweicloud/functiongraph/v2/model/DeleteTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteTagsRequest::DeleteTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTagsRequest::~DeleteTagsRequest() = default;

void DeleteTagsRequest::validate()
{
}

web::json::value DeleteTagsRequest::toJson() const
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
bool DeleteTagsRequest::fromJson(const web::json::value& val)
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
            UpdateFunctionTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTagsRequest::getResourceType() const
{
    return resourceType_;
}

void DeleteTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool DeleteTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void DeleteTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string DeleteTagsRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string DeleteTagsRequest::getContentType() const
{
    return contentType_;
}

void DeleteTagsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteTagsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteTagsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateFunctionTagsRequestBody DeleteTagsRequest::getBody() const
{
    return body_;
}

void DeleteTagsRequest::setBody(const UpdateFunctionTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


