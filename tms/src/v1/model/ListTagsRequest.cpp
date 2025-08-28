

#include "huaweicloud/tms/v1/model/ListTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListTagsRequest::ListTagsRequest()
{
    resourceTypes_ = "";
    resourceTypesIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    tagTypes_ = "";
    tagTypesIsSet_ = false;
}

ListTagsRequest::~ListTagsRequest() = default;

void ListTagsRequest::validate()
{
}

web::json::value ListTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypesIsSet_) {
        val[utility::conversions::to_string_t("resource_types")] = ModelBase::toJson(resourceTypes_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(tagTypesIsSet_) {
        val[utility::conversions::to_string_t("tag_types")] = ModelBase::toJson(tagTypes_);
    }

    return val;
}
bool ListTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagTypes(refVal);
        }
    }
    return ok;
}


std::string ListTagsRequest::getResourceTypes() const
{
    return resourceTypes_;
}

void ListTagsRequest::setResourceTypes(const std::string& value)
{
    resourceTypes_ = value;
    resourceTypesIsSet_ = true;
}

bool ListTagsRequest::resourceTypesIsSet() const
{
    return resourceTypesIsSet_;
}

void ListTagsRequest::unsetresourceTypes()
{
    resourceTypesIsSet_ = false;
}

std::string ListTagsRequest::getProjectId() const
{
    return projectId_;
}

void ListTagsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTagsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTagsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTagsRequest::getTagTypes() const
{
    return tagTypes_;
}

void ListTagsRequest::setTagTypes(const std::string& value)
{
    tagTypes_ = value;
    tagTypesIsSet_ = true;
}

bool ListTagsRequest::tagTypesIsSet() const
{
    return tagTypesIsSet_;
}

void ListTagsRequest::unsettagTypes()
{
    tagTypesIsSet_ = false;
}

}
}
}
}
}


