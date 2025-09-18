

#include "huaweicloud/codeartscheck/v2/model/ListRulesetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListRulesetsRequest::ListRulesetsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRulesetsRequest::~ListRulesetsRequest() = default;

void ListRulesetsRequest::validate()
{
}

web::json::value ListRulesetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRulesetsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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


std::string ListRulesetsRequest::getProjectId() const
{
    return projectId_;
}

void ListRulesetsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListRulesetsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListRulesetsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListRulesetsRequest::getCategory() const
{
    return category_;
}

void ListRulesetsRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListRulesetsRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListRulesetsRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

int32_t ListRulesetsRequest::getOffset() const
{
    return offset_;
}

void ListRulesetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRulesetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRulesetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRulesetsRequest::getLimit() const
{
    return limit_;
}

void ListRulesetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRulesetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRulesetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


