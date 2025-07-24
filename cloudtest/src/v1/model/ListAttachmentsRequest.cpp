

#include "huaweicloud/cloudtest/v1/model/ListAttachmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAttachmentsRequest::ListAttachmentsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceUri_ = "";
    resourceUriIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListAttachmentsRequest::~ListAttachmentsRequest() = default;

void ListAttachmentsRequest::validate()
{
}

web::json::value ListAttachmentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceUriIsSet_) {
        val[utility::conversions::to_string_t("resource_uri")] = ModelBase::toJson(resourceUri_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListAttachmentsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUri(refVal);
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
    return ok;
}


std::string ListAttachmentsRequest::getProjectId() const
{
    return projectId_;
}

void ListAttachmentsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAttachmentsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAttachmentsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListAttachmentsRequest::getResourceUri() const
{
    return resourceUri_;
}

void ListAttachmentsRequest::setResourceUri(const std::string& value)
{
    resourceUri_ = value;
    resourceUriIsSet_ = true;
}

bool ListAttachmentsRequest::resourceUriIsSet() const
{
    return resourceUriIsSet_;
}

void ListAttachmentsRequest::unsetresourceUri()
{
    resourceUriIsSet_ = false;
}

std::string ListAttachmentsRequest::getResourceType() const
{
    return resourceType_;
}

void ListAttachmentsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListAttachmentsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListAttachmentsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


