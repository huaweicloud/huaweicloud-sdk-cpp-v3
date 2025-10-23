

#include "huaweicloud/codehub/v4/model/ListItemCommitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListItemCommitsRequest::ListItemCommitsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    itemId_ = "";
    itemIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListItemCommitsRequest::~ListItemCommitsRequest() = default;

void ListItemCommitsRequest::validate()
{
}

web::json::value ListItemCommitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListItemCommitsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListItemCommitsRequest::getProjectId() const
{
    return projectId_;
}

void ListItemCommitsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListItemCommitsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListItemCommitsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListItemCommitsRequest::getItemId() const
{
    return itemId_;
}

void ListItemCommitsRequest::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool ListItemCommitsRequest::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void ListItemCommitsRequest::unsetitemId()
{
    itemIdIsSet_ = false;
}

std::string ListItemCommitsRequest::getType() const
{
    return type_;
}

void ListItemCommitsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListItemCommitsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListItemCommitsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListItemCommitsRequest::getOffset() const
{
    return offset_;
}

void ListItemCommitsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListItemCommitsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListItemCommitsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListItemCommitsRequest::getLimit() const
{
    return limit_;
}

void ListItemCommitsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListItemCommitsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListItemCommitsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


