

#include "huaweicloud/projectman/v4/model/ListWorkitemStatusRecordsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkitemStatusRecordsV4Request::ListWorkitemStatusRecordsV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListWorkitemStatusRecordsV4Request::~ListWorkitemStatusRecordsV4Request() = default;

void ListWorkitemStatusRecordsV4Request::validate()
{
}

web::json::value ListWorkitemStatusRecordsV4Request::toJson() const
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
bool ListWorkitemStatusRecordsV4Request::fromJson(const web::json::value& val)
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


std::string ListWorkitemStatusRecordsV4Request::getProjectId() const
{
    return projectId_;
}

void ListWorkitemStatusRecordsV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListWorkitemStatusRecordsV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListWorkitemStatusRecordsV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListWorkitemStatusRecordsV4Request::getOffset() const
{
    return offset_;
}

void ListWorkitemStatusRecordsV4Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkitemStatusRecordsV4Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkitemStatusRecordsV4Request::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWorkitemStatusRecordsV4Request::getLimit() const
{
    return limit_;
}

void ListWorkitemStatusRecordsV4Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkitemStatusRecordsV4Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkitemStatusRecordsV4Request::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


