

#include "huaweicloud/codeartsrepo/v4/model/ListProjectDeployKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectDeployKeysRequest::ListProjectDeployKeysRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectDeployKeysRequest::~ListProjectDeployKeysRequest() = default;

void ListProjectDeployKeysRequest::validate()
{
}

web::json::value ListProjectDeployKeysRequest::toJson() const
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
bool ListProjectDeployKeysRequest::fromJson(const web::json::value& val)
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


std::string ListProjectDeployKeysRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectDeployKeysRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectDeployKeysRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectDeployKeysRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectDeployKeysRequest::getOffset() const
{
    return offset_;
}

void ListProjectDeployKeysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectDeployKeysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectDeployKeysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectDeployKeysRequest::getLimit() const
{
    return limit_;
}

void ListProjectDeployKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectDeployKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectDeployKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


