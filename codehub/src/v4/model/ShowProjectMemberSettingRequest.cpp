

#include "huaweicloud/codehub/v4/model/ShowProjectMemberSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectMemberSettingRequest::ShowProjectMemberSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowProjectMemberSettingRequest::~ShowProjectMemberSettingRequest() = default;

void ShowProjectMemberSettingRequest::validate()
{
}

web::json::value ShowProjectMemberSettingRequest::toJson() const
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
bool ShowProjectMemberSettingRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectMemberSettingRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectMemberSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectMemberSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectMemberSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowProjectMemberSettingRequest::getOffset() const
{
    return offset_;
}

void ShowProjectMemberSettingRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowProjectMemberSettingRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowProjectMemberSettingRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowProjectMemberSettingRequest::getLimit() const
{
    return limit_;
}

void ShowProjectMemberSettingRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowProjectMemberSettingRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowProjectMemberSettingRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


