

#include "huaweicloud/functiongraph/v2/model/ListFunctionTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTagsRequest::ListFunctionTagsRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionTagsRequest::~ListFunctionTagsRequest() = default;

void ListFunctionTagsRequest::validate()
{
}

web::json::value ListFunctionTagsRequest::toJson() const
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

    return val;
}
bool ListFunctionTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListFunctionTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListFunctionTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListFunctionTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListFunctionTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListFunctionTagsRequest::getResourceId() const
{
    return resourceId_;
}

void ListFunctionTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListFunctionTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListFunctionTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListFunctionTagsRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionTagsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionTagsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionTagsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


