

#include "huaweicloud/projectman/v4/model/ListProjectModulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectModulesRequest::ListProjectModulesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectModulesRequest::~ListProjectModulesRequest() = default;

void ListProjectModulesRequest::validate()
{
}

web::json::value ListProjectModulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListProjectModulesRequest::fromJson(const web::json::value& val)
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


std::string ListProjectModulesRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectModulesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectModulesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectModulesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectModulesRequest::getOffset() const
{
    return offset_;
}

void ListProjectModulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectModulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectModulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectModulesRequest::getLimit() const
{
    return limit_;
}

void ListProjectModulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectModulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectModulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


