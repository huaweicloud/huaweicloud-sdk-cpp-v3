

#include "huaweicloud/projectman/v4/model/ListIpdProjectFieldsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdProjectFieldsRequest::ListIpdProjectFieldsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListIpdProjectFieldsRequest::~ListIpdProjectFieldsRequest() = default;

void ListIpdProjectFieldsRequest::validate()
{
}

web::json::value ListIpdProjectFieldsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListIpdProjectFieldsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
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


std::string ListIpdProjectFieldsRequest::getProjectId() const
{
    return projectId_;
}

void ListIpdProjectFieldsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIpdProjectFieldsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIpdProjectFieldsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIpdProjectFieldsRequest::getKeyword() const
{
    return keyword_;
}

void ListIpdProjectFieldsRequest::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool ListIpdProjectFieldsRequest::keywordIsSet() const
{
    return keywordIsSet_;
}

void ListIpdProjectFieldsRequest::unsetkeyword()
{
    keywordIsSet_ = false;
}

int32_t ListIpdProjectFieldsRequest::getOffset() const
{
    return offset_;
}

void ListIpdProjectFieldsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIpdProjectFieldsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIpdProjectFieldsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListIpdProjectFieldsRequest::getLimit() const
{
    return limit_;
}

void ListIpdProjectFieldsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIpdProjectFieldsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIpdProjectFieldsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


